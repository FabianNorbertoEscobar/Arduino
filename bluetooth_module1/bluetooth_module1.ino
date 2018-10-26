#include<SoftwareSerial.h>

byte ledP = 13;
byte Rx = 0;
byte Tx = 1;

SoftwareSerial BT1(Rx, Tx);

void setup() {
  pinMode(ledP, OUTPUT);
  Serial.begin(9600);
  Serial.println("Levantando el modulo Bluetooth");
  Serial.println("Esperando comandos AT:");
  BT1.begin(38400);
}

void loop() {
  if(BT1.available()){
    Serial.write(BT1.read());
    digitalWrite(ledP, HIGH);
  }else{
    digitalWrite(ledP, LOW);
  }
  if(Serial.available()){
    BT1.write(Serial.read());
  }
}
