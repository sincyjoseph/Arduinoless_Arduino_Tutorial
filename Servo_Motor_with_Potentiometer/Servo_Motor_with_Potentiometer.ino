#include<Servo.h>
int red = 4;
int green = 3;
int blue = 2;

Servo myservo;
int value; //digital value of potentiometer
double angle;

void setup(){

  Serial.begin(9600);
  myservo.attach(9);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000);
}

void loop(){
  value = analogRead(A0);
  angle = map(value, 0, 1024,0, 180);
  Serial.println(angle);
  myservo.write(angle);
  delay(15);
  
  if(angle >= 0 && angle < 60){
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
  }
  else if(angle >= 60 && angle < 120){
    digitalWrite(blue, LOW); 
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }
  else if(angle >= 120 && angle < 180){
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  }
}