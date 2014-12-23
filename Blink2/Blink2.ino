/*
  Blink2
  Turn on LED on pin 13, wait some time turn on LED on pin 12,
  wait some time, and turn the LEDs off, on after the other.
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.

 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(12, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
