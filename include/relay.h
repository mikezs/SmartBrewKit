class Relay {
public:
    Relay() {}
    ~Relay() {}
    virtual void holdTemperature(float temperature, float tolerance) = 0;
    virtual void updateTemperature(float temperature) = 0;
};

class PIDRelay: public Relay {
public:
    PIDRelay() {}
    ~PIDRelay() {}
    virtual void holdPIDTemperature(float temperature) = 0;
    virtual void updateTemperature(float temperature) = 0;
};

class SolidStateRelay: public PIDRelay {

}

class ElectromagneticRelay: public Relay {

}
