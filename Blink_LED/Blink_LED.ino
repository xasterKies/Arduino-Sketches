//Program to blink LED
int LEDpin = 11; Declaring the LED input
 
 // The Setup Routine
void setup() {
  pinMode(LEDpin, OUTPUT);
}

// The Loop routine runs over and over given a given condition in the delay
void loop() {
  digitalWrite(LEDpin, HIGH);
  delay(1000);
  digitalWrite(LEDpin, LOW);
  delay(1000);
}
