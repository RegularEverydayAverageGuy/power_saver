#ifndef BATTERY_INFO_H
#define BATTERY_INFO_H

#include <stdio.h>
#include <stdlib.h>

#define BATTERY_INFO_PATH "/sys/class/power_supply/BAT0"

struct battery_info
{
    int  capacity;               /* Capacity of the battery in percentages */
    char cap_lvl[128];           /* Capacity level of the battery */
    char status[128];            /* Status of the battery */
    int  voltage;                /* Voltage of the battery in microvolts */
    int  min_voltage_design;     /* Designed minimum voltage of the battery in microvolts */
    int  current;                /* Charging/Discharging current of the battery in microamps */
    int  cycle_count;            /* Cycle count of the battery */
    int  full_charge_design;     /* Designed/initial full charge level of the battery */
    int  full_charge;            /* Current full charge level of the battery */
    int  charge;                 /* Charge level of the battery */
    char technology[128];        /* Type of technology behind the battery */
    char manufacturer[128];      /* Manufacturer of the battery */
    char model[128];             /* Model of the battery */
    char serial_number[128];     /* Serial number of the battery */
};

typedef struct battery_info battery_info;

/* Retrieve battery information that is available on the BATTERY_INFO_PATH */
void get_battery_info(struct battery_info *battery_info);

/* Retrieves the capacity of the battery in percentages */
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
void get_battery_status(char *status);

/* Retrieve current battery voltage in microvolts*/
void get_battery_voltage(int *voltage);

void get_min_voltage_design(int *min_voltage_design);

/* Retrieve charging current in microamps */
void get_battery_current(int *current);

/* Retrieves the cycle count of the battery */
void get_battery_cycle_count(int *cycle_count);

/* Retrieves the designed/initial full charge level of the battery */
void get_battery_full_charge_design(int *full_charge_design);

/* Retrieves the current full charge level of the battery */
void get_battery_full_charge(int *full_charge);

/* Retrieves the charge level of the battery */
void get_battery_charge(int *charged);

/* Retrieves the type of technology behind the battery */
void get_battery_technology(char *technology);

/* Retrieves the manufacturer of the battery */
void get_battery_manufacturer(char *manufacturer);

/* Retrieves the model name of the battery */
void get_battery_model_name(char *model);

/* Retrieves the serial number of the battery */
void get_battery_serial_number(char *serial_number);

/* Retrieves the alarm state of the battery */
void get_battery_alarm(char *alarm);

/* Checks if the battery is present */
void is_battery_present(int *battery_present);

#endif