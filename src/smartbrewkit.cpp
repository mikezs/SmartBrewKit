#include "smartbrewkit.h"

void TDisplaySmartBrewKit::loop() {
    this->temp->getUpdate();
}