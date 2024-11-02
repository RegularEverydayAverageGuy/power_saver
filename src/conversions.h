#ifndef CONVERSIONS_H
#define CONVERSIONS_H

float microvoltsToVolts(int microvolts) {
    return (float)microvolts * 0.000001f;
}

float microampsToAmps(int microamps) {
    return (float)microamps * 0.000001f;
}

#endif // CONVERSIONS_H