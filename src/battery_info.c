#include <string.h>

#include "battery_info.h"

void get_battery_info(battery_info *battery_info)
{
    /* Retrieve all available informaiton about the battery here */

    get_battery_capacity(&battery_info->capacity);
    get_battery_cap_lvl(battery_info->cap_lvl);
    get_battery_status(battery_info->status);
    get_battery_voltage(&battery_info->voltage);
    get_battery_current(&battery_info->current);
    get_battery_cycle_count(&battery_info->cycle_count);
    get_battery_full_charge_design(&battery_info->full_charge_design);
    get_battery_full_charge(&battery_info->full_charge);
    get_battery_charge(&battery_info->charge);
    get_battery_technology(battery_info->technology);
    get_battery_manufacturer(battery_info->manufacturer);
    get_battery_model_name(battery_info->model);
    get_battery_serial_number(battery_info->serial_number);
}

static void get_battery_capacity(int *capacity)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/capacity", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *capacity = atoi(line);
}

static void get_battery_cap_lvl(char *cap_lvl){
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

static void get_battery_status(char *status){
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/status", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    strcpy(status, line);
}

static void get_battery_voltage(int *voltage){
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/voltage_now", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *voltage = atoi(line);
}

static void get_min_voltage_design(int *min_voltage_design)
{
}

static void get_battery_current(int *current){
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/current_now", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *current = atoi(line);
}

static void get_battery_cycle_count(int *cycle_count){
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/cycle_count", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *cycle_count = atoi(line);
}

static void get_battery_full_charge_design(int *full_charge_design)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/charge_full_design", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *full_charge_design = atoi(line);
}

static void get_battery_full_charge(int *full_charge)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/charge_full", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *full_charge = atoi(line);
}

static void get_battery_charge(int *charge)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/charge_now", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *charge = atoi(line);
}

static void get_battery_technology(char *technology)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/technology", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    strcpy(technology, line);
}

static void get_battery_manufacturer(char *manufacturer)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/manufacturer", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    strcpy(manufacturer, line);
}

static void get_battery_model_name(char *model)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/model_name", "r");

    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    strcpy(model, line);
}

static void get_battery_serial_number(char *serial_number)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/serial_number", "r");

    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    strcpy(serial_number, line);
}

static void get_battery_alarm(char *alarm)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/alarm", "r");

    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    strcpy(alarm, line);
}

static void is_battery_present(int *battery_present)
{
    FILE *fp;
    char line[128];

    fp = fopen("/sys/class/power_supply/BAT0/present", "r");
    if (!fp) {
        exit(1);
    }

    fgets(line, 128, fp);
    fclose(fp);

    *battery_present = atoi(line);
}