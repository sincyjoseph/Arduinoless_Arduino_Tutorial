// C++ code
//
int intensity = 0;

int i = 0;

int unnamed = 0;

int j = 0;

void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  for (intensity = 0; intensity <= 255; intensity += 5) {
    analogWrite(6, intensity);
    delay(10); // Wait for 10 millisecond(s)
  }
  for (intensity = 255; intensity <= 0; intensity += 5) {
    analogWrite(6, intensity);
    delay(10); // Wait for 10 millisecond(s)
  }
}