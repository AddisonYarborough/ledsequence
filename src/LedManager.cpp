#include "LedManager.h"
#include "LedData.h"
#include "Time.h"

// Define our time manager, a class which calculates time for us
Time time = Time();

void LedManager::update()
{
    // Update our time manager once per loop
    time.update();

    // Calculate the time in milliseconds since the previous loop
    int deltaMillis = time.deltaMillis;

    // Update our LED Data classes
    redLedData.update(deltaMillis);
    yellowLedData.update(deltaMillis);
}
