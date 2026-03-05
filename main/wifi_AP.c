#include <stdio.h>
#include "xn_wifi_manage.h"

void app_main(void)
{
    printf("wifi AP example\n");
    esp_err_t ret = wifi_manage_init(NULL);
    (void)ret; 
}
