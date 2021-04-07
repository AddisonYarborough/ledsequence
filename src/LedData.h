#ifndef LED_DATA_H
#define LED_DATA_H

// A class that contains data about a particular LED that we wish to control
class LedData
{
public:
    LedData(int pin, bool high, int offset, int interval);
    void update(int deltaMillis);

private:
    // The (digital) pin we assign our output to for the LED
    int pinNumber = 0;

    // Whether the pin should start high or low
    bool isHigh = false;

    // The number of milliseconds we are currently at. When we reach our blink interval,
    // we will set the pin to HIGH
    int timer = 0;

    // The number of milliseconds between blinks
    int blinkInterval = 0;
};

#endif // LED_DATA_H
