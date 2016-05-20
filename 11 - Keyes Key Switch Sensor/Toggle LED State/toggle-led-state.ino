/**
 * Changes the state of a three-color LED from OFF -> red -> green -> blue each time the push button is pressed
 */

int pushButtonPin = 8;
int redPin = 11;
int greenPin = 10;
int bluePin = 9;

int ledState = 0;

void setup() {
 pinMode(pushButtonPin, INPUT);
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
}

void loop() {
  if (isButtonPushed()) {
    toggleLED(); 
  }
  delay(100);
}

boolean isButtonPushed() {
  return digitalRead(pushButtonPin) == LOW;
}

void toggleLED() {
  ledState++;

  if (ledState == 4) {
    ledState = 0;
  }

   switch(ledState) {
    case 0:
      digitalWrite(bluePin, LOW);
      break;
    case 1:
      digitalWrite(redPin, HIGH);
      break;
    case 2:
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      break;
    case 3:
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);
      break;
   }
}

