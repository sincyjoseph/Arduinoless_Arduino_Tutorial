// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  // Traffic Signal
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
}