#ifndef LED_DATA_H
#define LED_DATA_H

class LedData
{
public:
    LedData(int pin, bool high, int offset, int interval);
    void update(int deltaMillis);

private:
    int pinNumber = 0;
    bool isHigh = false;
    int timer = 0;
    int blinkInterval = 0;
};

#endif // LED_DATA_H
