#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("Hello World");
}

void loop()
{
  Serial.println("he he");
  delay(1000);
}
