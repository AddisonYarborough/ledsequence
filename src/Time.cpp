#include <Time.h>
#include <Arduino.h>

void Time::update()
{
    // Calculate (and set) the time in milliseconds since the last frame
    lastMillis = currentMillis;
    currentMillis = millis();
    deltaMillis = currentMillis - lastMillis;
}
