#include <OneWire.h>
#include <DallasTemperature.h>

class Temperature {
public:
    virtual ~Temperature() {}
    virtual float getUpdate() = 0;
    float currentTemperature;
};

class SBKTemperature: public Temperature {
public:
    SBKTemperature(uint8_t pin) {
        this->oneWire = OneWire(pin);
        this->sensors = DallasTemperature(&oneWire);
    }
    float getUpdate();
private:
    OneWire oneWire;
    DallasTemperature sensors;
};
