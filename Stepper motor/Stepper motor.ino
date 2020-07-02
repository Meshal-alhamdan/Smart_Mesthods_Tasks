#include <Stepper.h>
Stepper stepper=Stepper(100,2,3,4,5);

void setup() {


pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);

}

void loop() {
  
  
stepper.setSpeed(200);
stepper.step(100);

}