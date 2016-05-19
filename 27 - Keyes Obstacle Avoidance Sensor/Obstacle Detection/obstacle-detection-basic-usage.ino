int sensorPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int val = digitalRead(sensorPin);
  String printVal = val == 0 ? "Obstacle" : "No Obstacle";
  Serial.print(val);
  Serial.println(": " + printVal);
  delay(100);
}
