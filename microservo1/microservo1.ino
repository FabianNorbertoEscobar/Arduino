#include <Servo.h>

Servo ms;

void setup()
{
  ms.attach(2);
}

void loop()
{
  for(int i = 0; i < 180; i++){
  	ms.write(i);
    delay(10);
  }
  
  for(int i = 180; i >= 0; i--){
   	ms.write(i);
    delay(10);
  }
}
