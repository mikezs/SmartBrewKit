class WifiConnection {
public:
    WifiConnection();
    ~WifiConnection();
    virtual void scan() = 0;
};