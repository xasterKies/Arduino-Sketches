//Program to light on LED when push button is pressed

int switchPin = 8; //define switch pin
int LEDpin = 4;    //define LED pin
int reading;      //define reading as an integer

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  reading = digitalRead(switchPin);  //read switch pin
  digitalWrite(LEDpin, reading);     //turn LED on if switch is HIGH
}                                    //turn LED off if switch is LOW
