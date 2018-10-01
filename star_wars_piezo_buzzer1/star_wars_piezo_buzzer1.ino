byte piezo = 3;

// notas musicales star wars
int a = 440;
int f = 349;
int ch = 523;

void setup()
{
  pinMode(piezo, OUTPUT);
}

void loop()
{
  tone(piezo, a);
  delay(500);
  
  stepPause();
  
  tone(piezo, a);
  delay(500);
  
  stepPause();
  
  tone(piezo, a);
  delay(500);
  
  stepPause();
  
  tone(piezo, f);
  delay(350);
  
  tone(piezo, ch);
  delay(150);

  tone(piezo, a);
  delay(500);
  
  tone(piezo, f);
  delay(350);
  
  tone(piezo, ch);
  delay(150);
  
  tone(piezo, a);
  delay(650);
  
  stepPause();
}

void stepPause(){
  noTone(piezo);
  delay(30);
}
