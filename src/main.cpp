#include <Arduino.h>
#include <Time.h>
#include <LedManager.h>

LedManager ledManager = LedManager();

void setup()
{
}

void loop()
{
  // Update our time keeper class
  ledManager.update();
}
