/*
  created on Mar 2025
  by yoochan Han
  This program controls a servo motor
*/

#include <Servo.h>

Servo servoNumber1;

void setup()
{
  // setup servo pins
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop()
{ 
  // put the main code here, to run repeatedly
  servoNumber1.write(180);
  delay(2000);
  servoNumber1.write(0);
  delay(2000);
}
