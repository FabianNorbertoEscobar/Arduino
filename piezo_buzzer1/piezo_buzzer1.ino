byte piezo = 3;

void setup()
{
  pinMode(piezo, OUTPUT);
}

void loop()
{
  tone(piezo, 440, 200);
  delay(20);
  noTone(piezo);
  delay(20);
}
