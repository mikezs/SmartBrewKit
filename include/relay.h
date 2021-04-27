class Relay {
public:
    virtual ~Relay() {}
    virtual void holdTemperature(float temperature, float tolerance) = 0;
    virtual void updateTemperature(float temperature) = 0;
};

class PIDRelay: public Relay {
public:
    virtual ~PIDRelay() {}
    virtual void holdPIDTemperature(float temperature) = 0;
    virtual void updateTemperature(float temperature) = 0;
};

class SolidStateRelay: public PIDRelay {

};

class ElectromagneticRelay: public Relay {

};
