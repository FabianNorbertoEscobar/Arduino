#include <Adafruit_NeoPixel.h>

byte neoPixelPin = 2;
byte pixs = 12;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(pixs, neoPixelPin, NEO_GRB + NEO_KHZ800);

int retardo = 100;
int rojo = 0;
int verde = 0;
int azul = 0;

void setup()
{
  pixels.begin();
  Serial.begin(9600);
}

void loop()
{
  setColor();
  for(int i = 0; i < pixs; i++){
    pixels.setPixelColor(i, pixels.Color(rojo, verde, azul));
    pixels.show();
    delay(retardo);
    Serial.println(i);
  }
}

void setColor()
{
  rojo = random(0, 255);
  verde = random(0,255);
  azul = random(0, 255);
  Serial.print("rojo: ");
  Serial.println(rojo);
  Serial.print("verde: ");
  Serial.println(verde);
  Serial.print("azul: ");
  Serial.println(azul);
}
