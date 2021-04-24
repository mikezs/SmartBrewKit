#include <Arduino.h>
#include <TFT_eSPI.h>
#include <Button2.h>
#include <OneWire.h>
#include <DallasTemperature.h>

class Temperature {
public:
    Temperature() {}
    ~Temperature() {}
    virtual float getUpdate() = 0;
};

class SBKTemperature: public Temperature {
public:
    SBKTemperature(uint8_t pin) {
        this->oneWire = OneWire(pin);
        this->sensors = DallasTemperature(&oneWire);
    }
private:
    OneWire oneWire;
    DallasTemperature sensors;
};

float SBKTemperature::getUpdate() {
    sensors.requestTemperatures();
}

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

void TDisplaySmartBrewKit::loop() {
    
}

SmartBrewKit *smk;

void setup() {
    smk = new TDisplaySmartBrewKit();
}

void loop() {
    smk->loop();
}
