#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "motor.h"
#include "display.h"
#include "sensor.h"

void delay(void);

/*
    Klima Kontrol Yazilimi:
    - Ekran : Sicaklik degerini gosteriyor
    - Sensör: Sicaklik degerini olcuyor
    - Motor : Calistirildiginda sogutma yapiyor
    
    Ekran Fonksiyonlari:
    Init()
    Power_On()
    Power_Off()
    Write_to_Screen(int32_t num)
    
    Sensör Fonksiyonlari:
    Init()
    int32_t Get_Temp_Value()
    
    Motor Fonksiyonlari:
    Init()
    on()
    off()
    
    Ana yazilim:
    Sicakligi okuyup ekrana yazdiricaz.
    Sicaklik kullanicinin girdigi (25) degerin ustune ciktiginda
    klima motoru calistirilacak.

*/

int main(void)
{
    // Init
    int32_t temp = 0;
    display_init();
    motor_init();
    sensor_init();
    display_power_on();
    
    while (1)
    {
        temp = sensor_get_temp_value();
        display_write_to_screen(temp);
        
        if (temp > 25)
        {
            motor_on();
        }
        else
        {
            motor_off();
        }
        
        delay();
    }
    
    return 0;
}

void delay(void)
{
    int64_t t = 0;

    for (t = 0; t < 1000000; t++)
    {
        // pass
    }
}