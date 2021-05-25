const int hot = 87; //set hot parameter
const int cold = 75; //set cold parameter
const int BlueLED = 2;
const int GreenLED = 3;
const int RedLED = 4;

void setup(){
  pinMode(A2, INPUT); //LM35 sensor 
  pinMode(2, OUTPUT); //Blue for Low Temperature
  pinMode(3, OUTPUT); //Green for High Temperature
  pinMode(4, OUTPUT); //Red for Moderate Temperature /Normal Temperaure
  Serial.begin(9600);
}

void loop(){
  int sensor = analogRead(A2);
  float voltage = (sensor / 1024.0) * 5.0;
  float tempC = (voltage - .5) * 100;
  float tempF = (tempC * 1.8) + 32;
  Serial.print("temp: ");
  Serial.print(tempF);
  if(tempF < cold){ //cold
    digitalWrite(BlueLED, HIGH);
    digitalWrite(GreenLED, LOW);
    digitalWrite(RedLED, LOW);
    Serial.println("LOW Temperature");
  }
  else if(tempF >= hot){ //hot
    digitalWrite(BlueLED, LOW);
    digitalWrite(GreenLED, HIGH);
    digitalWrite(RedLED, LOW);
    Serial.println("HIGH Temperature");
  }
  else{ //normal
    digitalWrite(BlueLED, LOW);
    digitalWrite(GreenLED, LOW);
    digitalWrite(RedLED, HIGH);
    Serial.println("NORMAL Temperature");
  }
  delay(10);
}
