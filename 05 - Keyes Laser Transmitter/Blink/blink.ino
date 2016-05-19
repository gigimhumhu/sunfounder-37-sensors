int sensorPin = 8;

void setup() {
  pinMode(sensorPin, OUTPUT);
}

void loop() {
  digitalWrite(sensorPin, HIGH);
  delay(2000);
  digitalWrite(sensorPin, LOW);
  delay(2000);
}
