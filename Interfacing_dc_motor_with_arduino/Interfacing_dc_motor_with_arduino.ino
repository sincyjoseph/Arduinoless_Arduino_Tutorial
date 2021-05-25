// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(11, analogRead(A0));
  delay(10); // Delay a little bit to improve simulation performance
}