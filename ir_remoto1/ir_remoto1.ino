#include <IRremote.h>

int ledRojo = 5;
int ledAmarillo = 4;
int ledVerde = 3;
int ledAzul = 2;
int irrecvPin = 11;
unsigned int valor = 0;

IRrecv irrecv(irrecvPin);
decode_results resultados;

void setup()
{
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); 
}

void loop()
{
  if(irrecv.decode(&resultados)) {
    valor = resultados.value;
    Serial.println(valor);
    switch(valor) {
      case 2295: 
      	digitalWrite(ledRojo, HIGH);
      	delay(500);
      	digitalWrite(ledRojo, LOW);
      	break;
      
      case 34935:
      	digitalWrite(ledAmarillo, HIGH);
      	delay(500);
      	digitalWrite(ledAmarillo, LOW);
      	break;
      
      case 18615:
      	digitalWrite(ledVerde, HIGH);
      	delay(500);
      	digitalWrite(ledVerde, LOW);
      	break;
      
      case 10455:
      	digitalWrite(ledAzul, HIGH);
      	delay(500);
      	digitalWrite(ledAzul, LOW);
    }
    irrecv.resume();
  }
}