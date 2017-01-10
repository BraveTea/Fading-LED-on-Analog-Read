int photoPin = A0;
int blueLed = 3;


void setup()
{
  Serial.begin(9600);
  pinMode(blueLed, OUTPUT);
}

void loop()
{
  int lightValue = analogRead(photoPin);
  int newBrightness = lightValue / 8;
  Serial.println(lightValue);
  Serial.println(newBrightness);
  analogWrite(blueLed, newBrightness);
  delay(30);
}

