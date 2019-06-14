#include "sensor.h"
#include <stdio.h>

int32_t temp_val[10] = {12, 34, 45, 78, 99, 20, 23, 46, 63, 95};

void sensor_init(void)
{
    printf("SENSOR INIT!\n");
}

int32_t sensor_get_temp_value(void)
{
    static int32_t sayac = 0;
    int32_t temp = 0;
    
    temp = temp_val[sayac];
    sayac++;
    
    if (sayac == 10)
    {
        sayac = 0;
    }
    
    return temp;
}