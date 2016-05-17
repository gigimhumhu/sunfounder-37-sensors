int sensorPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int val = digitalRead(sensorPin);
  Serial.println(val);
  delay(100);
}
