// C++ code
//
int StateButton = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  StateButton = digitalRead(2);
  if (StateButton == 1) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}