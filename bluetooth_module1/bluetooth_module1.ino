#include<SoftwareSerial.h>

byte ledP = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledP, OUTPUT);
}

void loop() {
  if(Serial.available()){
    char letra = Serial.read();
    if(letra == 'a'){
      digitalWrite(ledP, HIGH);
      Serial.println("luz encendida");
    }else if(letra == 'b'){
      digitalWrite(ledP, LOW);
      Serial.println("luz apagada");
    }
  }
}
