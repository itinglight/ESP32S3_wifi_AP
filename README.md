#How to use?
1. copy xn_web_wifi_manger to components
2. copy partitions.csv file
3. change main/CMakeLists.text
   ```
        PRIV_REQUIRES xn_web_wifi_manger
   ```
4. add  #include "xn_wifi_manage.h"
5. use in app_main
   ```esp_err_t ret = wifi_manage_init(NULL);
   (void)ret; 
   ```
6. Set Flash 4mb
7. Set Target 
8. Build ~
   