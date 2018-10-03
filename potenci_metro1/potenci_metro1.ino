int valorSensado = 0;
byte ledP = 13;
byte servoP = A0;

void setup()
{
  pinMode(ledP, OUTPUT);
  pinMode(servoP, INPUT);
  Serial.begin(9600);
}

void loop()
{
  valorSensado = analogRead(servoP);
  digitalWrite(ledP, HIGH);
  Serial.println(valorSensado);
  delay(valorSensado);
  digitalWrite(ledP, LOW);
  delay(valorSensado);
}
