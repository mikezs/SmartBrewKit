#include "connection.h"
#include "display.h"
#include "relay.h"
#include "temperature.h"

class SmartBrewKit {
public:
    virtual ~SmartBrewKit() {}
    virtual void loop() = 0;
    Temperature *temp;
private:
};

class TDisplaySmartBrewKit : public SmartBrewKit
{
private:

public:
    TDisplaySmartBrewKit(uint8_t pin) {
        this->temp = new SBKTemperature(pin);
    }
    ~TDisplaySmartBrewKit() {}
    void loop();
};