#include "temperature.h"

class SmartBrewKit {
public:
    SmartBrewKit() {}
    virtual ~SmartBrewKit() {}
    virtual void loop() = 0;
    Temperature *temp;
private:
};

class TDisplaySmartBrewKit : public SmartBrewKit
{
private:

public:
    TDisplaySmartBrewKit() {
        this->temp = new SBKTemperature(32);
    }
    ~TDisplaySmartBrewKit() {}
    void loop();
};