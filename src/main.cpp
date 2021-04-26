#include <Arduino.h>
#include <TFT_eSPI.h>
#include <Button2.h>

#include "smartbrewkit.h"

SmartBrewKit *sbk;

void setup() {
    sbk = new TDisplaySmartBrewKit();
}

void loop() {
    sbk->loop();
}
