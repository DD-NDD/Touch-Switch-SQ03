/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16LF1559
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.00
        MPLAB 	          :  MPLAB X 5.10	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_0_B aliases
#define LED_0_B_TRIS                 TRISAbits.TRISA0
#define LED_0_B_LAT                  LATAbits.LATA0
#define LED_0_B_PORT                 PORTAbits.RA0
#define LED_0_B_WPU                  WPUAbits.WPUA0
#define LED_0_B_ANS                  ANSELAbits.ANSA0
#define LED_0_B_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED_0_B_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED_0_B_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED_0_B_GetValue()           PORTAbits.RA0
#define LED_0_B_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED_0_B_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED_0_B_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED_0_B_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED_0_B_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED_0_B_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED_0_R aliases
#define LED_0_R_TRIS                 TRISAbits.TRISA1
#define LED_0_R_LAT                  LATAbits.LATA1
#define LED_0_R_PORT                 PORTAbits.RA1
#define LED_0_R_WPU                  WPUAbits.WPUA1
#define LED_0_R_ANS                  ANSELAbits.ANSA1
#define LED_0_R_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_0_R_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_0_R_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_0_R_GetValue()           PORTAbits.RA1
#define LED_0_R_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_0_R_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_0_R_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_0_R_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_0_R_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_0_R_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED_EN aliases
#define LED_EN_TRIS                 TRISAbits.TRISA2
#define LED_EN_LAT                  LATAbits.LATA2
#define LED_EN_PORT                 PORTAbits.RA2
#define LED_EN_WPU                  WPUAbits.WPUA2
#define LED_EN_ANS                  ANSELAbits.ANSA2
#define LED_EN_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_EN_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_EN_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_EN_GetValue()           PORTAbits.RA2
#define LED_EN_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_EN_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_EN_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_EN_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_EN_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_EN_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RL0 aliases
#define RL0_TRIS                 TRISAbits.TRISA4
#define RL0_LAT                  LATAbits.LATA4
#define RL0_PORT                 PORTAbits.RA4
#define RL0_WPU                  WPUAbits.WPUA4
#define RL0_ANS                  ANSELAbits.ANSA4
#define RL0_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RL0_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RL0_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RL0_GetValue()           PORTAbits.RA4
#define RL0_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RL0_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RL0_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define RL0_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define RL0_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define RL0_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RL1 aliases
#define RL1_TRIS                 TRISAbits.TRISA5
#define RL1_LAT                  LATAbits.LATA5
#define RL1_PORT                 PORTAbits.RA5
#define RL1_WPU                  WPUAbits.WPUA5
#define RL1_ANS                  ANSELAbits.ANSA5
#define RL1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RL1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RL1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RL1_GetValue()           PORTAbits.RA5
#define RL1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RL1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RL1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define RL1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define RL1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define RL1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RL2 aliases
#define RL2_TRIS                 TRISBbits.TRISB6
#define RL2_LAT                  LATBbits.LATB6
#define RL2_PORT                 PORTBbits.RB6
#define RL2_WPU                  WPUBbits.WPUB6
#define RL2_ANS                  ANSELBbits.ANSB6
#define RL2_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RL2_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RL2_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RL2_GetValue()           PORTBbits.RB6
#define RL2_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RL2_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RL2_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define RL2_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define RL2_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define RL2_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)
#define RB7_SetAnalogMode()         do { ANSELBbits.ANSB7 = 1; } while(0)
#define RB7_SetDigitalMode()        do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set LED_2_B aliases
#define LED_2_B_TRIS                 TRISCbits.TRISC2
#define LED_2_B_LAT                  LATCbits.LATC2
#define LED_2_B_PORT                 PORTCbits.RC2
#define LED_2_B_ANS                  ANSELCbits.ANSC2
#define LED_2_B_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_2_B_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_2_B_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_2_B_GetValue()           PORTCbits.RC2
#define LED_2_B_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_2_B_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_2_B_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_2_B_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set LED_2_R aliases
#define LED_2_R_TRIS                 TRISCbits.TRISC3
#define LED_2_R_LAT                  LATCbits.LATC3
#define LED_2_R_PORT                 PORTCbits.RC3
#define LED_2_R_ANS                  ANSELCbits.ANSC3
#define LED_2_R_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_2_R_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_2_R_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_2_R_GetValue()           PORTCbits.RC3
#define LED_2_R_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_2_R_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_2_R_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_2_R_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_1_B aliases
#define LED_1_B_TRIS                 TRISCbits.TRISC5
#define LED_1_B_LAT                  LATCbits.LATC5
#define LED_1_B_PORT                 PORTCbits.RC5
#define LED_1_B_ANS                  ANSELCbits.ANSC5
#define LED_1_B_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_1_B_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_1_B_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_1_B_GetValue()           PORTCbits.RC5
#define LED_1_B_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_1_B_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_1_B_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_1_B_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set LED_1_R aliases
#define LED_1_R_TRIS                 TRISCbits.TRISC7
#define LED_1_R_LAT                  LATCbits.LATC7
#define LED_1_R_PORT                 PORTCbits.RC7
#define LED_1_R_ANS                  ANSELCbits.ANSC7
#define LED_1_R_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED_1_R_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED_1_R_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED_1_R_GetValue()           PORTCbits.RC7
#define LED_1_R_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED_1_R_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED_1_R_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED_1_R_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/