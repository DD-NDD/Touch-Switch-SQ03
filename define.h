#include <stdbool.h>
#include <stdint.h>
#include <stdbool.h>
uint8_t rxData;
uint8_t prcData;
bool config_status;
bool check_request;
uint16_t count_conf;
bool blink;
uint8_t blink_count;
uint32_t timeout_count;
bool update_state_flag = false;
/*Glass status*/
union
{
    unsigned int full_status;
    struct
    {
        unsigned CS0    :1;
        unsigned CS1    :1;
        unsigned CS2    :1;
        unsigned CS3    :1;
        unsigned CS4    :1;
        unsigned CS5    :1;
        unsigned CS6    :1;
        unsigned CS7    :1;
    };
}last_touch_status;
/*End define status touch*/