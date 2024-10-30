#include <string.h>

#include "battery_info.h"

void get_battery_capacity(int *capacity){
    FILE *fp;
    char line[100];

    fp = fopen("/sys/class/power_supply/BAT0/capacity", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 100, fp);
    fclose(fp);

    *capacity = atoi(line);
}

void get_battery_cap_lvl(char *cap_lvl){
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/capacity_level", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    strcpy(cap_lvl, line);
}