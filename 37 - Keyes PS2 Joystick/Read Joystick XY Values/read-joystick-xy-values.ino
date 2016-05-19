/**
 * Reads and prints the joystick's XY values to the serial monitor
 */

int xPin = 0;
int yPin = 1;

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
