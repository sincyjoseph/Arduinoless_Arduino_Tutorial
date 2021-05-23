// C++ code
//
int PotValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  PotValue = map(analogRead(A0), 0, 1023, 0, 255);
  analogWrite(6, PotValue);
  delay(10); // Delay a little bit to improve simulation performance
}