int gasPin = A5;
int medicion = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(gasPin, INPUT);
}

void loop() 
{
  medicion = analogRead(gasPin);
  Serial.println("gas normal");
  if(medicion > 700){	
    Serial.println("GAS DETECTADO");
    tone(13, 1500);
    delay(500);
    noTone(13);
    delay(500);
  }
}
