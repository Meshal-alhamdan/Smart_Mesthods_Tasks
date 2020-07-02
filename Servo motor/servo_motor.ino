#include <Servo.h>

int POSITION = 0;

Servo servo_6;

Servo servo_9;

void setup()
{
  servo_6.attach(6);

  servo_9.attach(9);

  
}

void loop()
{
  POSITION = 0;
    for (POSITION = 1; POSITION <= 179; POSITION += 1) {
    servo_6.write(POSITION);
    servo_9.write(POSITION);
    delay(20); // Wait for 20 millisecond(s)
  }

  for (POSITION = 179; POSITION >= 1; POSITION -= 1) {
    servo_6.write(POSITION);
    servo_9.write(POSITION);
    delay(20);
  }

 
}