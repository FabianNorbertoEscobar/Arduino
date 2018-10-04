byte lampara = 13;
byte pir = 2;
byte fotoR = A0;

int pirValor = 0;
int fotoRValor;

void setup()
{
  pinMode(lampara, OUTPUT);
  pinMode(pir, INPUT);
  pinMode(fotoR, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  pirValor = digitalRead(pir);
  fotoRValor = analogRead(fotoR);
  
  if(fotoRValor < 600){
    if(pirValor == HIGH){
      Serial.println("movimiento sensado");
      digitalWrite(lampara, HIGH);
      delay(2000);
    }else{
      digitalWrite(lampara, LOW);
      delay(300);
    }
  }else{
    digitalWrite(lampara, LOW);
    Serial.println("mucha luz");
    Serial.println(fotoRValor);
    delay(500);
  }
}
