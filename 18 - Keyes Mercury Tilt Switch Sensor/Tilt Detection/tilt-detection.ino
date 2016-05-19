int sensorPin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int val = digitalRead(sensorPin);
  String mercuryDetected = val == LOW ? "TRUE" : "FALSE";
  Serial.println("mercury detected: " + mercuryDetected);
  delay(100);
}
