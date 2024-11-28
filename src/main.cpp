/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"
#include "WiFi.h"

// Set LED_BUILTIN if it is not defined by Arduino framework
#define LED_BUILTIN 2

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop()
{

  // WiFi.scanNetworks will return the number of networks found
  int n = WiFi.scanNetworks();

  if (n == 0)
  {
  }
  else
  {

    for (int i = 0; i < n; ++i)
    {
      // turn the LED on (HIGH is the voltage level)
      digitalWrite(LED_BUILTIN, HIGH);

      // wait for a second
      delay(300);

      // turn the LED off by making the voltage LOW
      digitalWrite(LED_BUILTIN, LOW);

      // wait for a second
      delay(300);
    }
  }

  delay(5000); // wait for a second
}