#include "display.h"
#include <stdio.h>

void display_init(void)
{
    printf("DISPLAY INIT!\n");
}

void display_power_on(void)
{
    printf("DISPLAY POWER ON!\n");
}

void display_power_off(void)
{
    printf("DISPLAY POWER OFF!\n");
}

void display_write_to_screen(int32_t num)
{
    printf("Temp: %d\n", num);
}