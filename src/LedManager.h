
#ifndef LED_MANAGER_H
#define LED_MANAGER_H

#include "LedData.h"
#include "Time.h"

class LedManager
{
public:
    void update();

private:
    // Define the LED data (pin number, isHigh, timer, blink interval milliseconds)
    LedData redLedData = LedData{11, false, -500, 500};
    LedData yellowLedData = LedData{10, false, 0, 500};
};

#endif // LED_MANAGER_H
