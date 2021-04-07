#include <Arduino.h>
#include <LedData.h>

LedData::LedData(int pin, bool high, int offset, int interval)
{
    pinNumber = pin;
    isHigh = high;
    timer += offset;
    blinkInterval = interval;

    pinMode(pinNumber, OUTPUT);
}

void LedData::update(int deltaMillis)
{
    timer += deltaMillis;

    if (timer >= blinkInterval)
    {
        digitalWrite(pinNumber, (isHigh ? LOW : HIGH));
        isHigh = !isHigh;
        timer = 0;
    }
};
