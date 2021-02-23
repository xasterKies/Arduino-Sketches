int switchPin = 8;
int LEDpin = 4;
int reading;

void setup() 
{
  pinMode(LEDpin, OUTPUT);
}

void loop() 
{
  reading = digitalRead(switchPin);
  if(reading == LOW) digitalWrite(LEDpin, HIGH);
  
  else digitWrite(LEDpin, LOW);
}
