/* Author:  Chiappalone Mattia
 * Date:    September 2022
 * Main:    Il PIC inizializza allo start up lo stack LoRaWAN, poi entra
 *          in un ciclo infinito dove legge il sensore di temperatura,
 *          invia il pacchetto al server LoRaWAN e poi va in sleep fino a
 *          che non verrà svegliato dal timer TPL5010 tramite pin IOC. 
 * 
 * Tested:          Wake up funzionante, Invio e ricezione dati dal server
 *
 * Not Tested:      Comunicazione bidirezionale, deep sleep @20nA con tutte
 *                  le periferiche disabilitate
 *
*/

#include "mcc_generated_files/mcc.h"

// Functions i wrote
void readAndSend(void);
void SysConfigSleep(void);
void SysRestoreFromSleep(void);
void LoRaSleep (void); 
void LoRaWakeUp(void); 

// Variables
int portNumber = 2;
uint16_t payload[1];
uint8_t TimeToSend;
uint8_t JoinedServer = 0;
int count = 1;          // Number of packets sent

// Premade functions for LoRaWAN & variables
uint8_t nwkSKey[16] = {0x75, 0xE0, 0x66, 0x1A, 0xA0, 0xBC, 0x21, 0xE4, 0x4B, 0x57, 0x21, 0xB0, 0xD6, 0x30, 0xF7, 0xB2};
uint8_t appSKey[16] = {0xDD, 0x32, 0x54, 0xF0, 0x8D, 0x55, 0xD6, 0x52, 0xE7, 0x73, 0x0B, 0xBC, 0x26, 0x3E, 0x0A, 0xDA};
uint32_t devAddr = 0x12345678;
void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status);
void RxJoinResponse(bool status);

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    SysConfigSleep();
    printf("\n\rSystem Initialized\n\r");
    EN_LORA_SetHigh();
    printf("\n\rPowering up SX1276 module\n\r");
    
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    printf("Initializing LoRaWAN Stack\n\r");
    LORAWAN_Init(RxDataDone, RxJoinResponse);
    LORAWAN_SetNetworkSessionKey(nwkSKey);
    LORAWAN_SetApplicationSessionKey(appSKey);
    LORAWAN_SetDeviceAddress(devAddr);
    LORAWAN_Join(ABP);
    printf("LoRaWAN Stack Initialized\n\r");
    
    //PORTAbits.RA4 = 1;  //Led turned on
    LED_SetHigh();
    TimeToSend = 1;
    
    while(JoinedServer == 0){   // While the network isnt join do nothing...
        LORAWAN_Mainloop();
    }
    
    while (1)
    {   
        PORTAbits.RA4 = 1;
        LORAWAN_Mainloop();
        
        if(TimeToSend == 1){
            printf("It's time to send a packet...\n\r");
            readAndSend();
            TimeToSend = 0;
        }
        
        if(LORAWAN_GetState() == IDLE){   // it's not transmitting nor receiving
            DONE_SetHigh();                    // Warns the timer TPL5010 that we are done (otherwise a reset could be applied to the MCU)
            printf("Done pulled high..\n\r");
            EN_LORA_SetLow(); 
            printf("Powering off SX1276 module\n\r");
            __delay_ms(1);
            printf("Going to sleep!\n\r");
            DONE_SetLow();               // The Done signal must be held high for at least 100 nS
            //SysConfigSleep();
            LoRaSleep(); 
            PORTAbits.RA4 = 0;
            SLEEP();   
            
            //SysRestoreFromSleep();
            EN_LORA_SetHigh();
            printf("\n\r");
            printf("I'm awake!\n\r");
            LoRaWakeUp(); 
            printf("Powering up SX1276 module\n\r");
            TimeToSend = 1;
        }
        
        
    } // End of while
} // End of main



void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status)
{
}

void RxJoinResponse(bool status)
{   
    printf("Callback function! LoRaWAN Initialized successfully\n\r");
    JoinedServer = 1;
    //PORTAbits.RA4 = 0; //LEd turned off
    LED_SetLow();
}

void readAndSend(void){
    ADCON0bits.ADON = 1;
    //while(ADC_GetConversion(TEMP) < 300);
    payload[0] = ADC_GetConversion(TEMP);
    //payload[0] = 0xFF00;
    LORAWAN_Send(UNCNF, portNumber, &payload, sizeof(payload)); 
    printf("Packet #%d sent: temperature value: %d\n\r", count, payload[0]);
    count++;
    
}

void SysConfigSleep(void)
{
    // Turn off everything the project won't ever use
    ADCON0bits.ADON = 0;
    UART2MD = 1;
    //UART1MD = 1;
    TMR6MD = 1;
    TMR5MD = 1;    
    TMR4MD = 1;
    TMR2MD = 1;
    //TMR1MD = 1;
    //MSSP2MD = 1;
    MSSP1MD = 1;

    CCP5MD = 1;
    CCP4MD = 1;
    CCP3MD = 1;
    CCP2MD = 1;
    CCP1MD = 1;
    CTMUMD = 1;
    CMP2MD = 1;
    CMP1MD = 1;
    
    //Device enters Sleep mode on SLEEP instruction
    IDLEN = 0;
    
    // Configure as output all unused port pins and set them to low
    //PORT A
    
    /*TRISA = 0x00;
    LATA = 0x00;
    
    //PORT B
    TRISBbits.RB4 = OUTPUT;
    TRISBbits.RB5 = OUTPUT;
    TRISBbits.RB6 = OUTPUT;
    TRISBbits.RB7 = OUTPUT;
    LATBbits.LATB4 = LOW;
    LATBbits.LATB5 = LOW;
    LATBbits.LATB6 = LOW;
    LATBbits.LATB7 = LOW;
    
    //PORT C
    TRISCbits.RC0 = OUTPUT;
    TRISCbits.RC1 = OUTPUT;
    TRISCbits.RC3 = OUTPUT;
    TRISCbits.RC4 = OUTPUT;
    TRISCbits.RC5 = OUTPUT;
    TRISCbits.RC6 = OUTPUT;
    TRISCbits.RC7 = OUTPUT;
    LATCbits.LATC0 = LOW;
    LATCbits.LATC1 = LOW;
    LATCbits.LATC3 = LOW;
    LATCbits.LATC4 = LOW;
    LATCbits.LATC5 = LOW;
    LATCbits.LATC6 = LOW;
    LATCbits.LATC7 = LOW;
    
    //PORT D
    TRISDbits.RD0 = OUTPUT;
    TRISDbits.RD1 = OUTPUT;
    TRISDbits.RD2 = OUTPUT;
    TRISDbits.RD4 = OUTPUT;
    TRISDbits.RD5 = OUTPUT;
    TRISDbits.RD7 = OUTPUT;
    LATDbits.LATD0 = LOW;
    LATDbits.LATD1 = LOW;
    LATDbits.LATD2 = LOW;
    LATDbits.LATD4 = LOW;
    LATDbits.LATD5 = LOW;
    LATDbits.LATD7 = LOW;
    
    //PORT E
    TRISEbits.RE0 = OUTPUT;
    TRISEbits.RE1 = OUTPUT;
    TRISEbits.RE2 = OUTPUT;
    LATEbits.LATE0 = LOW;
    LATEbits.LATE1 = LOW;
    LATEbits.LATE2 = LOW;
}

void SysRestoreFromSleep(){
    LATE = 0x00;    
    LATD = 0x00;    
    LATA = 0x00;    
    LATB = 0x00;    
    LATC = 0x00;    

    
    TRISx registers
     
    TRISE = 0x07;
    TRISA = 0xEF;
    TRISB = 0xFF;
    TRISC = 0xBE;
    TRISD = 0xE2;

    /**
    ANSELx registers
      
    ANSELC = 0xB8;
    ANSELB = 0x08;
    ANSELD = 0xE0;
    ANSELE = 0x07;
    ANSELA = 0x2F;
    
    */
    //EUSART1_Initialize();
}

void LoRaSleep (void) 
{
    // SSPEN disabled; WCOL no_collision; SSPOV no_overflow; CKP Idle:Low, Active:High; SSPM FOSC/4;
    SSP2CON1 = 0x00;
    
    //Disable MSSP2 module
    MSSP2MD = 1;
    
    //Make sure SPI2 pins are not left in floating state during sleep
    //NCS
    RADIO_nCS_ANS = 0;
    RADIO_nCS_TRIS = 0;
    RADIO_nCS_LAT = 1;
    
    //MISO
    ANSD1 = 0;
    TRISD1 = 0;
    LATD1 = 0;
    
    //MOSI
    ANSD4 = 0;
    TRISD4 = 0;
    LATD4 = 0;
    
    //CLK
    ANSD0 = 0;
    TRISD0 = 0;
    LATD0 = 0;
}

void LoRaWakeUp(void) 
{   
    MSSP2MD = 0;    
    SPI2_Initialize();
}
/**
End of File
*/