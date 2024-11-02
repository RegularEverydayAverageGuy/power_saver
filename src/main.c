#include <stdio.h>

#include "battery_info.h"
#include "conversions.h"

battery_info bat_info;

int main() {
    get_battery_info(&bat_info);

    printf("==========================\n");
    printf("BATTERY INFO\n");
    printf("==========================\n");
    printf("Capacity: %d\n",             bat_info.capacity);
    printf("Capacity level: %s",         bat_info.cap_lvl);
    printf("Status: %s",                 bat_info.status);
    printf("Voltage: %f V\n",            microvoltsToVolts(bat_info.voltage));
    printf("Voltage min design: %f V\n", microvoltsToVolts(bat_info.min_voltage_design));
    printf("Current: %f A\n",            microampsToAmps(bat_info.current));
    printf("Cycle count: %d\n",          bat_info.cycle_count);
    printf("Full charge design: %d\n",   bat_info.full_charge_design);
    printf("Full charge: %d\n",          bat_info.full_charge);
    printf("Charge: %d\n",               bat_info.charge);
    printf("Technology: %s",             bat_info.technology);
    printf("Manufacturer: %s",           bat_info.manufacturer);
    printf("Model: %s",                  bat_info.model);
    printf("Serial number: %s",          bat_info.serial_number);

    return 0;
}