#include<Servo.h>

Servo servo1; //Object of servomotor

int i = 0;

void setup(){
  servo1.attach(3);
}

void loop(){
  for(i = 0; i <= 180; i++){
    servo1.write(i);
    delay(10);
  }
  delay(500);
  for(i = 180; i >= 0; i--) {
    servo1.write(i);
    delay(10);
  } 
  delay(500);
}