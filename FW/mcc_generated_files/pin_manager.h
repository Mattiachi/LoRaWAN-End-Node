/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC18LF46K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED aliases
#define LED_TRIS               TRISAbits.TRISA4
#define LED_LAT                LATAbits.LATA4
#define LED_PORT               PORTAbits.RA4
#define LED_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_GetValue()           PORTAbits.RA4
#define LED_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set RB0 procedures
#define RB0_SetHigh()    do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()   do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()   do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()         PORTBbits.RB0
#define RB0_SetDigitalInput()   do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()  do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()     do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()   do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode() do { ANSELBbits.ANSB0 = 1; } while(0)
#define RB0_SetDigitalMode()do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()    do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()   do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()   do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()         PORTBbits.RB1
#define RB1_SetDigitalInput()   do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()  do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()     do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()   do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode() do { ANSELBbits.ANSB1 = 1; } while(0)
#define RB1_SetDigitalMode()do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()    do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()   do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()   do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()         PORTBbits.RB2
#define RB2_SetDigitalInput()   do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()  do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()     do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()   do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode() do { ANSELBbits.ANSB2 = 1; } while(0)
#define RB2_SetDigitalMode()do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()    do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()   do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()   do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()         PORTBbits.RB4
#define RB4_SetDigitalInput()   do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()  do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()     do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()   do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode() do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set WAKE_UP aliases
#define WAKE_UP_TRIS               TRISBbits.TRISB5
#define WAKE_UP_LAT                LATBbits.LATB5
#define WAKE_UP_PORT               PORTBbits.RB5
#define WAKE_UP_WPU                WPUBbits.WPUB5
#define WAKE_UP_ANS                ANSELBbits.ANSB5
#define WAKE_UP_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define WAKE_UP_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define WAKE_UP_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define WAKE_UP_GetValue()           PORTBbits.RB5
#define WAKE_UP_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define WAKE_UP_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define WAKE_UP_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define WAKE_UP_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define WAKE_UP_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define WAKE_UP_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set DONE aliases
#define DONE_TRIS               TRISCbits.TRISC0
#define DONE_LAT                LATCbits.LATC0
#define DONE_PORT               PORTCbits.RC0
#define DONE_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define DONE_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define DONE_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define DONE_GetValue()           PORTCbits.RC0
#define DONE_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define DONE_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()    do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()   do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()   do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()         PORTCbits.RC2
#define RC2_SetDigitalInput()   do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()  do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetAnalogMode() do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set TEMP aliases
#define TEMP_TRIS               TRISCbits.TRISC3
#define TEMP_LAT                LATCbits.LATC3
#define TEMP_PORT               PORTCbits.RC3
#define TEMP_ANS                ANSELCbits.ANSC3
#define TEMP_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define TEMP_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define TEMP_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define TEMP_GetValue()           PORTCbits.RC3
#define TEMP_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define TEMP_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define TEMP_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define TEMP_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RD0 procedures
#define RD0_SetHigh()    do { LATDbits.LATD0 = 1; } while(0)
#define RD0_SetLow()   do { LATDbits.LATD0 = 0; } while(0)
#define RD0_Toggle()   do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define RD0_GetValue()         PORTDbits.RD0
#define RD0_SetDigitalInput()   do { TRISDbits.TRISD0 = 1; } while(0)
#define RD0_SetDigitalOutput()  do { TRISDbits.TRISD0 = 0; } while(0)
#define RD0_SetAnalogMode() do { ANSELDbits.ANSD0 = 1; } while(0)
#define RD0_SetDigitalMode()do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set RD1 procedures
#define RD1_SetHigh()    do { LATDbits.LATD1 = 1; } while(0)
#define RD1_SetLow()   do { LATDbits.LATD1 = 0; } while(0)
#define RD1_Toggle()   do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RD1_GetValue()         PORTDbits.RD1
#define RD1_SetDigitalInput()   do { TRISDbits.TRISD1 = 1; } while(0)
#define RD1_SetDigitalOutput()  do { TRISDbits.TRISD1 = 0; } while(0)
#define RD1_SetAnalogMode() do { ANSELDbits.ANSD1 = 1; } while(0)
#define RD1_SetDigitalMode()do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set EN_LORA aliases
#define EN_LORA_TRIS               TRISDbits.TRISD2
#define EN_LORA_LAT                LATDbits.LATD2
#define EN_LORA_PORT               PORTDbits.RD2
#define EN_LORA_ANS                ANSELDbits.ANSD2
#define EN_LORA_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define EN_LORA_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define EN_LORA_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define EN_LORA_GetValue()           PORTDbits.RD2
#define EN_LORA_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define EN_LORA_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define EN_LORA_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define EN_LORA_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set RD3 procedures
#define RD3_SetHigh()    do { LATDbits.LATD3 = 1; } while(0)
#define RD3_SetLow()   do { LATDbits.LATD3 = 0; } while(0)
#define RD3_Toggle()   do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define RD3_GetValue()         PORTDbits.RD3
#define RD3_SetDigitalInput()   do { TRISDbits.TRISD3 = 1; } while(0)
#define RD3_SetDigitalOutput()  do { TRISDbits.TRISD3 = 0; } while(0)
#define RD3_SetAnalogMode() do { ANSELDbits.ANSD3 = 1; } while(0)
#define RD3_SetDigitalMode()do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set RD4 procedures
#define RD4_SetHigh()    do { LATDbits.LATD4 = 1; } while(0)
#define RD4_SetLow()   do { LATDbits.LATD4 = 0; } while(0)
#define RD4_Toggle()   do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define RD4_GetValue()         PORTDbits.RD4
#define RD4_SetDigitalInput()   do { TRISDbits.TRISD4 = 1; } while(0)
#define RD4_SetDigitalOutput()  do { TRISDbits.TRISD4 = 0; } while(0)
#define RD4_SetAnalogMode() do { ANSELDbits.ANSD4 = 1; } while(0)
#define RD4_SetDigitalMode()do { ANSELDbits.ANSD4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCB4 pin functionality
 * @Example
    IOCB4_ISR();
 */
void IOCB4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCB4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCB4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCB4_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCB4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCB4_SetInterruptHandler() method.
    This handler is called every time the IOCB4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(IOCB4_InterruptHandler);

*/
extern void (*IOCB4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCB4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCB4_SetInterruptHandler() method.
    This handler is called every time the IOCB4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(IOCB4_DefaultInterruptHandler);

*/
void IOCB4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCB5 pin functionality
 * @Example
    IOCB5_ISR();
 */
void IOCB5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCB5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCB5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCB5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCB5_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCB5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCB5_SetInterruptHandler() method.
    This handler is called every time the IOCB5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB5_SetInterruptHandler(IOCB5_InterruptHandler);

*/
extern void (*IOCB5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCB5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCB5_SetInterruptHandler() method.
    This handler is called every time the IOCB5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB5_SetInterruptHandler(IOCB5_DefaultInterruptHandler);

*/
void IOCB5_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/