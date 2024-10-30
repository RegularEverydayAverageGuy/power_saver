#include <stdio.h>

#include "battery_info.h"

int main() {

    int capacity = 0;
    char cap_lvl[128];

    get_battery_capacity(&capacity);
    get_battery_cap_lvl(cap_lvl);

    printf("Battery capacity: %d\n", capacity);
    printf("Battery capacity level: %s\n", cap_lvl);

    return 0;
}