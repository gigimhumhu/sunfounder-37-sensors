int red = 9;
int green = 10;
int blue = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  blinkLED(red, 1000, 0);
  blinkLED(green, 1000, 0);
  blinkLED(blue, 1000, 0);
}

void blinkLED(int color, int onDur, int offDur) {
  digitalWrite(color, HIGH);
  delay(onDur);
  digitalWrite(color, LOW);
  delay(offDur);  
}

