byte rojo = 11;
byte verde = 10;
byte azul = 9;

void setup()
{
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop()
{
  analogWrite(rojo, 255);
  analogWrite(verde, 204);
  analogWrite(azul, 102);
  
  delay(100);
  
  
  analogWrite(rojo, 51);
  analogWrite(verde, 204);
  analogWrite(azul, 255);
  
  delay(100);
  
  for(int i = 0; i < 10; i++){
   	
  analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 0);
   
  delay(100);
    
  
  analogWrite(rojo, 255);
  analogWrite(verde, 255);
  analogWrite(azul, 255);
  
  delay(100);
  }
}