#include "LedManager.h"
#include "LedData.h"
#include "Time.h"

Time time = Time();

void LedManager::update()
{
    time.update();

    int deltaMillis = time.deltaMillis;

    redLedData.update(deltaMillis);
    yellowLedData.update(deltaMillis);
}
