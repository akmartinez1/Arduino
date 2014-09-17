/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledRed = 13;
int ledGreen = 12;
int ledBlue = 11;
int timewarp=1;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  timewarp=timewarp+1;
  if(timewarp==350)
    timewarp=1;
    else;
  if(timewarp<100)
  {
    digitalWrite(ledRed, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(timewarp);               // wait for a second
    digitalWrite(ledRed, LOW);    // turn the LED off by making the voltage LOW
    delay(timewarp);               // wait for a second
  }
  else if(timewarp<200)
  {
    digitalWrite(ledRed, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(ledGreen,HIGH);
    delay(timewarp);               // wait for a second
    digitalWrite(ledRed, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(ledGreen,LOW);
    delay(timewarp);               // wait for a second
  }
  else 
  {
    digitalWrite(ledRed, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(ledGreen,HIGH);
    digitalWrite(ledBlue,HIGH);
    delay(timewarp);               // wait for a second
    digitalWrite(ledRed, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(ledGreen,LOW);
    digitalWrite(ledBlue,LOW);
    delay(timewarp);               // wait for a second
  }
}
