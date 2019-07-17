#include "mcc_generated_files/mcc.h"
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include"define.h"
#include"led.h"
#include"relay.h"
/*
                         Main application
 */
void DATA_PROCESS(char x);
void check_message(uint8_t x);
bool  check_data(uint8_t x);
void update_state(void);
void myButtonPressedCallback(enum mtouch_button_names button);
void myButtonReleasedCallback(enum mtouch_button_names button);
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    MTOUCH_Button_SetPressedCallback(myButtonPressedCallback);
    MTOUCH_Button_SetNotPressedCallback(myButtonReleasedCallback);    
    LED_EN_SetLow();
    config_status = false;  
    last_touch_status.full_status = 0x00;
    LED_PROCESS(last_touch_status.full_status);
    RELAY_PROCESS(last_touch_status.full_status);     
    while (1)
    {
        if(EUSART_is_rx_ready())
        {
            rxData = EUSART_Read();
            if(check_data(rxData))
            {
                if(check_request == false)// khong co gi de check
                {
                    prcData = rxData;
                    check_message(rxData);                  
                }
                else// da gui lenh check, xac nhan
                {
                    if(config_status == true)
                    {
                        if(rxData == 'T')
                        {
                            LED_PROCESS(15);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            config_status = false;
                            check_request = false;
                            LED_PROCESS(last_touch_status.full_status);
                        }
                        if(rxData == 'F')
                        {           
                            LED_PROCESS(0);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            __delay_ms(500);
                            config_status = false;
                            check_request = false;
                            LED_PROCESS(last_touch_status.full_status);
                        }                        
                    }
                    else
                    {
                        if(rxData == 'T')
                        {
                            DATA_PROCESS(prcData);
                        }
                        if(rxData == 'F')
                        {                        
                            check_request = false;// xoa request
                        }
                    }
                }
            }
        }
        if(MTOUCH_Service_Mainloop()) // 1 tick = 0.5
        {
            if(config_status == 0)
            {
                if(check_request == true)
                {
                    timeout_count++;
                    if(timeout_count == 20) // 10 ms
                    {
                        timeout_count = 0;
                        check_request = false;
                    }
                }
                if(MTOUCH_Button_isPressed(0) == 0 && MTOUCH_Button_isPressed(1) == 1 && MTOUCH_Button_isPressed(2) == 1)
                {                    
                    count_conf++;
                    if(count_conf == 1500)
                    {         
                        count_conf = 0;
                        printf("PICSMART");
                        config_status = true;
                        check_request = true;
                        timeout_count = 0;
                        LED_PROCESS(0);
                        blink = false;
                    }
                }
                else
                {
                    count_conf = 0;
                }
            }
            else
            {
                if(check_request == true)
                {
                    timeout_count++;
                    if(timeout_count > 30000)
                    {
                        
                        LED_PROCESS(0);
                        timeout_count++;
                        if(timeout_count >= 32000)
                        {
                            timeout_count = 0;
                            LED_PROCESS(last_touch_status.full_status);
                            check_request = false;
                            config_status = false;                          
                        }
                        
                    }
                }
                blink_count++;
                if(blink == false)
                {
                    LED_PROCESS(0);
                    if(blink_count == 200)
                    {
                        blink_count = 0;
                        blink = true;
                    }                                      
                }
                else
                {
                    LED_PROCESS(7);
                    if(blink_count == 200)
                    {
                        blink_count = 0;
                        blink = false;
                    } 
                }                       
            }            
        }
    }
}
/**
 End of File
*/
void myButtonPressedCallback(enum mtouch_button_names button)
{
    count_conf = 0;
    if(config_status == false)
    {
        if(button == 0) last_touch_status.full_status ^= 0b00000001;
        if(button == 1) last_touch_status.full_status ^= 0b00000010;
        if(button == 2) last_touch_status.full_status ^= 0b00000100;
        // update status to last_touch_status memory
        LED_PROCESS(last_touch_status.full_status);
        RELAY_PROCESS(last_touch_status.full_status);
    }
}
void myButtonReleasedCallback(enum mtouch_button_names button)
{
    count_conf = 0;
    if(config_status == false)
    {
        
        if(MTOUCH_Button_isPressed(0)==0&&MTOUCH_Button_isPressed(1)==0&&MTOUCH_Button_isPressed(2)==0)
        {
            update_state();      
        }
    }
}
void update_state(void)
{
    switch(last_touch_status.full_status)
    {
        case 0: printf("PIC0"); break;
        case 1: printf("PIC1"); break;
        case 2: printf("PIC2"); break;
        case 3: printf("PIC3"); break;
        case 4: printf("PIC4"); break;
        case 5: printf("PIC5"); break;
        case 6: printf("PIC6"); break;
        case 7: printf("PIC7"); break;
    }
}
void DATA_PROCESS(char x)
{
    switch(x)
    {
        case '0':
        {
            LED_PROCESS(0);            
            RELAY_PROCESS(0);           
            check_request = false;
            last_touch_status.full_status = 0;
            break;
        }
        case '1':
        {
            LED_PROCESS(1);
            RELAY_PROCESS(1);
            check_request = false;
            last_touch_status.full_status = 1;
            break;
        }
        case '2':
        {
            LED_PROCESS(2);
            RELAY_PROCESS(2);
            check_request = false;
            last_touch_status.full_status = 2;
            break;
        }
        case '3':
        {
            LED_PROCESS(3);
            RELAY_PROCESS(3);
            check_request = false;
            last_touch_status.full_status = 3;
            break;
        }
        case '4':
        {
            LED_PROCESS(4);
            RELAY_PROCESS(4);
            check_request = false;
            last_touch_status.full_status = 4;
            break;
        }
        case '5':
        {
            LED_PROCESS(5);
            RELAY_PROCESS(5);
            check_request = false;
            last_touch_status.full_status = 5;
            break;
        }
        case '6':
        {
            LED_PROCESS(6);
            RELAY_PROCESS(6);
            check_request = false;
            last_touch_status.full_status = 6;
            break;
        }
        case '7':
        {
            LED_PROCESS(7);
            RELAY_PROCESS(7);
            check_request = false;
            last_touch_status.full_status = 7;
            break;
        }        
        case 'U':
        {
            update_state();
            break;
        }
        default:
        {
            check_request = false;
            break;
        }
    }
}
void check_message(uint8_t x)
{
    switch (x)
    {
        case 'T': 
        {
            check_request = false;
            break;
        }
        case 'F': 
        {
            check_request = false;
            break;
        }
        default:
        {
            printf("%c",x);            
            check_request = true;
            break;
        }
    }
}
bool  check_data(uint8_t x)
{
    switch(x)
    {
        case '0': return true;
        case '1': return true;
        case '2': return true;
        case '3': return true;
        case '4': return true;
        case '5': return true;
        case '6': return true;
        case '7': return true;
        case 'U': return true;
        default : return false;
    }
}