/* Name: display.h
 * Project: Boilerplate
 * Author: Ridvan Altun
 * Creation Date: 2019-06-14
 * License: MIT
 */

#ifndef __display_h_included__
#define __display_h_included__
#include <stdint.h>

    void display_init(void);
    void display_power_on(void);
    void display_power_off(void);
    void display_write_to_screen(int32_t num);

#endif