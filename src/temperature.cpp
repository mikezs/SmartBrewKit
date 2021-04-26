#include "temperature.h"

float SBKTemperature::getUpdate() {
    sensors.requestTemperatures();

    return sensors.getTempCByIndex(0);
}
