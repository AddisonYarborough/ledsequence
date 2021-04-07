#include <Arduino.h>
#include <Time.h>
#include <LedManager.h>

LedManager ledManager = LedManager();

void setup()
{
  // No need to perform any setup
}

void loop()
{
  // Update our LED manager once per loop
  ledManager.update();
}
