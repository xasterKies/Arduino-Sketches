//Program to light on LED when push button is pressed

int switchPin = 8; //define switch pin
int LEDpin = 4;    //define LED pin
int reading;   //define reading as an integer
int switchState = LOW;
int LEDState = LOW;
unsigned long switchTime;
int lastSwitch = LOW;
int debounceTime = 50;

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  reading = digitalRead(switchPin);  //read switch pin
  
  if(reading != lastSwitch)
  {
  switchTime = millis();
  lastSwitch = reading;
  reading = digitalRead(switchPin);
  }
  if((millis() - switchTime) > debounceTime)
  {
    if(reading == HIGH && switchState == LOW) LEDState = !LEDState;
    digitalWrite(LEDpin, reading);     //turn LED on if switch is HIGH
    switchState = reading;
  }
  
}                                    //turn LED off if switch is LOW
