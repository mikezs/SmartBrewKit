#include "smartbrewkit.h"

SmartBrewKit *sbk;

void setup() {
    sbk = new TDisplaySmartBrewKit(32);
}

void loop() {
    sbk->loop();
}
