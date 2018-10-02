long dist = 0;

byte ultraP = 7;
byte ledP = 2;
byte buzzerP = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(ledP, OUTPUT);
  pinMode(buzzerP, OUTPUT);
}

void loop()
{
  dist = distancia(ultraP, ultraP);
  
  if(dist >= 332 || dist <= 2){
    Serial.println("Fuera de rango");
  }else{
    Serial.print(dist);
  	Serial.println(" cm\t");
  }
  
  if(dist < 15){
    digitalWrite(ledP, LOW);
  	tone(buzzerP, 440, 300);
    delay(50);
  }else{
    digitalWrite(ledP, HIGH);
    noTone(buzzerP);
  }
  
  delay(200);
}

long distancia(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH)*0.017;
}
