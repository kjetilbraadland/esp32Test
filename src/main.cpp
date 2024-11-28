#include "Arduino.h"
#include "WiFi.h"

#define LED_BUILTIN 2

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
}

void loop()
{

  // WiFi.scanNetworks will return the number of networks found
  int n = WiFi.scanNetworks();

    for (int i = 0; i < n; ++i)
    {
      // turn the LED on (HIGH is the voltage level)
      digitalWrite(LED_BUILTIN, HIGH);

      delay(300);

      // turn the LED off by making the voltage LOW
      digitalWrite(LED_BUILTIN, LOW);

      delay(300);
    }  

  delay(5000);
}