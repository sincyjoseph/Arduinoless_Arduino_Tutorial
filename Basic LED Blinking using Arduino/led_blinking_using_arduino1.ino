// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  // Set pin 2 to High
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // Set pin 2 to Low
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}