/*  
 * Author   :      Chiappalone Mattia
 * MPLAB    :      MPLABX IDE v3.40 or v3.35
 * Compiler :      XC8 v1.38 PRO
 * Date     :      September 2022
 * Revision :      v1.0 
 * 
 *  main.c
 * 
 *  WARNING:       Use only tested compilers, otherwise it will probably not work
 * 
 * This program enstablish an ABP LoRaWAN communication once every hour sending 
 * out temperature and light telemetry to the ChirpStack server on port 2.
 * When the MCU is not sending it's sleeping.
 * Every 16 seconds an interrupt wakes the board up and checks if a hour is passed.
 *  
 */

#include "mcc_generated_files/mcc.h"

#define LED PORTAbits.RA4       // Led pin
#define DONE PORTCbits.RC0      // Pin used to comunicate the external timer that we are done sending data
#define EN_LORA PORTDbits.RD2   // When high enables Vbat to LoRa module and Sensor
#define TEMP 37                 // RC3/AN15, wired up to a TMP36GT9Z
#define DOWNLINK_PORT   30      // Must match with the port from chirpstack

void IO_pins_init(void);           
void ADC_Init(void);
void ADC_SelChannel(uint8_t c);         
uint16_t ADC_Read(uint8_t channel);
void SysConfigSleep(void);              
void readAndSend(void);                 

// LoRaWAN stuff
uint8_t nwkSKey[16] = {0x75, 0xE0, 0x66, 0x1A, 0xA0, 0xBC, 0x21, 0xE4, 0x4B, 0x57, 0x21, 0xB0, 0xD6, 0x30, 0xF7, 0xB2};
uint8_t appSKey[16] = {0xDD, 0x32, 0x54, 0xF0, 0x8D, 0x55, 0xD6, 0x52, 0xE7, 0x73, 0x0B, 0xBC, 0x26, 0x3E, 0x0A, 0xDA};
uint32_t devAddr = 0x12345678;
uint16_t payload[1];
void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status);
void RxJoinResponse(bool status);
void LoRaSleep(void);
void LoRaWakeUp(void);

uint8_t TimeToSend;
uint8_t portNumber = 2;                     // Port number for uplink packet


void main(void)
{
    SYSTEM_Initialize();        // Function called by MCC to initialize timers, interrupts, oscillators and SPI
    SysConfigSleep();           // Turns off all peripherals and pins not needed during sleep to minimize consumes
    IO_pins_init();             // Initializes the leds and analog pinsIO_pins_init(); 
    ADC_Init();
     // Enable the Global & Peripheral Interrupts
    EN_LORA = 1;        // Turns on SX1276 and temperature sensor
    
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
                         
    LED = 1;
    // The led is turned off from the callback function "RxJoinResponse" indicating the LoRaWAN stack was initialized properly
    for(int i = 0; i < 5; i++){
        LED != LED;
        for(int j = 0; j < 1000; j++)__delay_ms(1);
    }
    
    
    
    LORAWAN_Init(RxDataDone, RxJoinResponse);
    LORAWAN_SetNetworkSessionKey(nwkSKey);
    LORAWAN_SetApplicationSessionKey(appSKey);
    LORAWAN_SetDeviceAddress(devAddr);
    LORAWAN_Join(ABP);
    
    // Application main loop
    TimeToSend = 1;
    LED = 1;
    
    while (1)
    {   
        LORAWAN_Mainloop();         // Has to be called once per loop (runs system timers and check DIO pins)
        
        if(TimeToSend){
            LoRaWakeUp();
            readAndSend(); 
            TimeToSend = 0;
        }
        
        if(LORAWAN_GetState() == IDLE){   // it's not transmitting nor receiving
            DONE = 1;                     // Warns the timer TPL5010 that we are done (otherwise a reset could be applied to the MCU)
            LoRaSleep();
            EN_LORA = 0;                  // Turns off SX1276 and Temperature sensor
            LED = 0;                
            DONE = 0;               // The Done signal must be held high for at least 100 nS
            TMR1ON = 0;             // Turns off timer1
            TRISCbits.TRISC3 = 0;   //temperature sensor as output low
            ANSELCbits.ANSC3 = 0;   //Temperature sensor as digital
            // Prepare_to_sleep(); Function to shut off everything... may as well shut off timer1
            SLEEP();               
            
            
            // MCU Woke up from IOC pin.
            TMR1ON = 1;             // Turns on timer 1
            EN_LORA = 1;           //back from sleep
            TRISCbits.TRISC3 = 1;   //temperature sensor as output low
            ANSELCbits.ANSC3 = 1;
            LED = 1;               // we're awake!
            // Function to setup again all the pins...
        }
        
    } //end of while(1)
} // end of main()



void RxDataDone(uint8_t* pData, uint8_t dataLength, OpStatus_t status) 
{
    //This is a prototype for downlink. Any received data is stored in a buffer pointed by *pData with a lenght of dataLength bites
    // pData[0] is the fport used from the gateway in downlink
    
    if(pData[0]==DOWNLINK_PORT){
        LORAWAN_SetCurrentDataRate(pData[1]);
        LED = pData[2];
    }
}

void RxJoinResponse(bool status)
{
    LED = 0;
}

void readAndSend(void){
    payload[0] = ADC_Read(TEMP);
    LORAWAN_Send(UNCNF, portNumber, &payload, sizeof(payload)); //2 is the number of bytes sent
}

void IO_pins_init(void){
    //TRISx = 1 input ; TRISx = 0 output
    //ANSELx = 0 digital, ANSELx = 1 analog
    TRISAbits.TRISA4 = 0;       // user led
    TRISCbits.TRISC0 = 0;       // done pin
    TRISDbits.TRISD2 = 0;       // enable lora
    ANSELDbits.ANSD2 = 0;       // set lora as digital
    TRISCbits.TRISC3 = 1;       // Temperature sensor set as input
    ANSELCbits.ANSC3 = 1;       // Temperature sensor set as analog
    TRISBbits.TRISB5 = 1;       // Set the wake up
    ANSELBbits.ANSB5 = 0;       // wake up set as digital
}   
void ADC_SelChannel(uint8_t c){
   ADCON0bits.CHS = c;    //Set the channel (analog pin))
   return;
}

uint16_t ADC_Read(uint8_t channel){
    uint16_t result = 0;
    ADCON0bits.ADON = 1;    //Turns on ADC
    ADC_SelChannel(channel);
    ADCON0bits.GO = 1;      //Starts conversion
    while(ADCON0bits.GO);
    result = (ADRESH<<8) | ADRESL;
    ADCON0bits.ADON = 0;    //turns off ADC
    return result;
}

void ADC_Init(void){
    ADCON0bits.GO = 0;   // starts conversion if set
    ADCON2bits.ADFM = 1; // right justified (MSB conversione sono il bit 1 di ADRESH e il LSB il bit 0 di ADRESL )
    ADCON2bits.ADCS = 3; // clock is derived from internal oscillator 
    return;
}

void SysConfigSleep(void)
{
    // Turn off everything the project won't ever use
    UART2MD = 1;
    UART1MD = 1;
    TMR6MD = 1;
    TMR5MD = 1;    
    TMR4MD = 1;
    TMR2MD = 1;
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
    TRISA = 0x00;
    LATA = 0x00;
    
    //PORT B
    TRISBbits.RB4 = OUTPUT;
    //TRISBbits.RB5 = OUTPUT;
    TRISBbits.RB6 = OUTPUT;
    TRISBbits.RB7 = OUTPUT;
    LATBbits.LATB4 = LOW;
    //LATBbits.LATB5 = LOW;
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