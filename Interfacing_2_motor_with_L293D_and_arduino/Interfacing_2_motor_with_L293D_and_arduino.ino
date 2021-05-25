// L293D

//MOTOR A
const int motorPin1 = 5; //Pin 14 of L293D
const int motorPin2 = 6; //Pin 10 of L293D

//MOTOR B
const int motorPin3 = 10; //Pin 7 of L293D
const int motorPin4 = 9; //Pin 2 of L293D

//This will run only one time
void setup(){
  
  //Set pin as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop(){
  digitalWrite(motorPin1, HIGH);  //Forward Direction
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  
  delay(2000);
  
  digitalWrite(motorPin1, LOW);  //Reverse Direction
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
   
  delay(2000);
  
  digitalWrite(motorPin1, HIGH); //Left Direction
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  
  delay(2000);
  
  digitalWrite(motorPin1, LOW); //Right Direction
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
}


