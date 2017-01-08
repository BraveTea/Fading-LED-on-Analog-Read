int photoPin = 0;
#define lightValue analogRead(photoPin)
int obLed = 13;
int brightness = 0;
int newBrightness = lightValue / 4;

void setup()
{
  Serial.begin(9600);
  pinMode(obLed, OUTPUT);
}

void loop()
{
  Serial.println(lightValue);
  Serial.println(newBrightness);
  analogWrite(obLed, newBrightness);
  delay(1000);
}

