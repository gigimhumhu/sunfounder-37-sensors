/**
 * Simple sketch to show the functionality of the Keyes RGB LED.
 * It repeatedly blinks each color (red, green, blue) in succession.
 */

// define the pins
int red = 9;
int green = 10;
int blue = 11;

void setup() {
  // set pin mode to output
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // blink each color for one second with no delay in between
  blinkLED(red, 1000, 0);
  blinkLED(green, 1000, 0);
  blinkLED(blue, 1000, 0);
}

/**
 * Blinks an LED for a specified duration. 
 * 
 * color - pin of LED to blink
 * onDur - duration of blink 
 * offDur - duration off
 */
void blinkLED(int color, int onDur, int offDur) {
  digitalWrite(color, HIGH);
  delay(onDur);
  digitalWrite(color, LOW);
  delay(offDur);  
}

