int fotoP = A0;
int val = 0;
byte ledP =13;

void setup()
{
  Serial.begin(9600);
  pinMode(ledP, OUTPUT);
}

void loop()
{
  val = analogRead(fotoP);
  Serial.println(val);
  delay(100);
  
  if(val < 500){
    digitalWrite(ledP, LOW);
  } else{
    digitalWrite(ledP, HIGH);
  }
}
