#ifndef BATTERY_INFO_H
#define BATTERY_INFO_H

#include <stdio.h>
#include <stdlib.h>


/* Retrieves the battery capacity in percentage of full charge */
void get_battery_capacity(int *capacity);

/** Retrieves the capacity level of the battery
 *
 * There are 3 capacity levels: Low, Normal, High
 *
 **/
void get_battery_cap_lvl(char *cap_lvl);

/** Retrieves the status of the battery
 *
 * Possible states: Unknown, Charging, Discharging, Not Charging, Full
 *
 */
void get_battery_status(int *status);

/* Retrieve current battery voltage */
void get_battery_voltage(int *voltage);

/* Retrieve charging current */
void get_battery_current(int *current);

#endif