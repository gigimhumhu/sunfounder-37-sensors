/**
 * Reads and prints the joystick's XY values to the serial monitor
 */

int xPin = 1;
int yPin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int xVal = analogRead(xPin);
  int yVal = analogRead(yPin);

  Serial.print(xVal);
  Serial.print(",");
  Serial.println(yVal);
  delay(100);
}
