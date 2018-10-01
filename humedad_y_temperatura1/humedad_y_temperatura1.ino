#include<DHT11.h>

byte pinS = 7;
DHT11 dht11(pinS);

void setup()
{
  Serial.begin(9600);
  pinMode(pinS, OUTPUT);
}

void loop()
{
  float h, t;
  int val = dht11.read(h, t);
  
  Serial.println("temperatura: %f", t);
  Serial.println("humedad: %f", h);
  delay(1000);
}
