#include <Wire.h>

#define I2C_SLAVE_ADDR 0x08 //temp address
#define LED_PIN 2

volatile bool blinkFlag = false;

void onReceive(int len)
{
  while (Wire.available())
  {
    if (Wire.read() == 1)
      blinkFlag = true;
  }
}

void setup()
{
  pinMode(LED_PIN, OUTPUT);

  Wire.begin(I2C_SLAVE_ADDR);   // Start as I2C slave
  Wire.onReceive(onReceive);
}

void loop()
{
  if (blinkFlag)
  {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
    blinkFlag = false;
  }
}
