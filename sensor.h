/* Name: sensor.h
 * Project: Boilerplate
 * Author: Ridvan Altun
 * Creation Date: 2019-06-14
 * License: MIT
 */

#ifndef __sensor_h_included__
#define __sensor_h_included__
#include <stdint.h>

    void sensor_init();
    int32_t sensor_get_temp_value(void);

#endif