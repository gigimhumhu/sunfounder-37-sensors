int sensorPin = 8 ; 
boolean magnetDetected = false;
 
void setup ()
{
  Serial.begin(9600);
  pinMode (sensorPin, INPUT) ;
}
 
void loop ()
{
  int val = digitalRead(sensorPin) ;
  if (!magnetDetected && val == 0) {
    magnetDetected = true;  
    Serial.println("MAGNET DETECTED");
  } else if (magnetDetected && val == 1) {
    magnetDetected = false;
    Serial.println("MAGNET NOT DETECTED");
  }
  delay(100);
}
