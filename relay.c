#include<xc.h>
#include<stdint.h>
#include"relay.h"
#include"mcc_generated_files/pin_manager.h"
void RELAY_PROCESS(uint8_t x)
{
    switch(x)
    {
        case 0:
        {
            RL2_SetHigh();RL1_SetHigh();RL0_SetHigh();
            break;
        }
        case 1:
        {
            RL2_SetHigh();RL1_SetHigh();RL0_SetLow();
            break;
        }
        case 2:
        {
            RL2_SetHigh();RL1_SetLow();RL0_SetHigh();
            break;
        }
        case 3:
        {
            RL2_SetHigh();RL1_SetLow();RL0_SetLow();
            break;
        }
        case 4:
        {
            RL2_SetLow();RL1_SetHigh();RL0_SetHigh();
            break;
        }
        case 5:
        {
            RL2_SetLow();RL1_SetHigh();RL0_SetLow();
            break;
        }
        case 6:
        {
            RL2_SetLow();RL1_SetLow();RL0_SetHigh();
            break;
        }
        case 7:
        {
            RL2_SetLow();RL1_SetLow();RL0_SetLow();
            break;
        }        
    }    
}
