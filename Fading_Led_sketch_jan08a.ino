int obLed = 13;
int brightness = 0;
int fadeAmount = 5;

void setup()
{
  pinMode(obLed, OUTPUT);
}

void loop()
{
  analogWrite(obLed, brightness);

  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255)
  {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}

