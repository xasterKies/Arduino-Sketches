//Program to light on LED when push button is pressed

int switchPin = 8; //define switch pin
int LEDpin = 4;    //define LED pin
int reading;   //define reading as an integer
int switchState = LOW;
int LEDState = LOW;

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  reading = digitalRead(switchPin);  //read switch pin
  if(reading == HIGH && switchState == LOW) LEDState = !LEDState;
  digitalWrite(LEDpin, reading);     //turn LED on if switch is HIGH
  switchState = reading;
  
}                                    //turn LED off if switch is LOW
