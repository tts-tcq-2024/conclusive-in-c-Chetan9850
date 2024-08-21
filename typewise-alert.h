#pragma once

#include "temperature_classification.h"
#include "alert_mechanism.h"

typedef struct {
    CoolingType coolingType;
    char brand[48];
} BatteryCharacter;

void checkAndAlert(AlertTarget alertTarget, BatteryCharacter batteryChar, double temperatureInC);
