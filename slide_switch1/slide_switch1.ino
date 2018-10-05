int ledRojo = 13;
int ledVerde = 12;
int ledAzul = 11;
int switchPin = 0; 
int estado = LOW;
int estadoAnterior = LOW;

void setup(){
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop(){
  estado = digitalRead(switchPin);
  if(estado != estadoAnterior){
    digitalWrite(ledVerde, HIGH);
    delay(100);
  }
  if(estado == LOW){ 
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledAzul, LOW);
    delay(200); 
  }else{
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledAzul, HIGH);
    delay(200); 
  }
  if(estado != estadoAnterior){
    digitalWrite(ledVerde, LOW);
    delay(100);
  }
  estadoAnterior = estado;
}
