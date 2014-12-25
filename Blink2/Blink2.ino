/*
  Blink2
  Turn on LED on pin 13, wait some time turn on LED on pin 12,
  wait some time, and turn the LEDs off, on after the other.
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.

 */

int led[] = { 13, 12 , 11};
int num_leds = sizeof(led) / sizeof(led[0]);
int interLedDelay = 200;
int toggleDelay = 500;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as an output.
  for(int i=0; i<num_leds; ++i)
    pinMode(led[i], OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i=0; i<num_leds; ++i)
  {
    digitalWrite(led[i], HIGH);
    delay(interLedDelay);
  }
  delay(toggleDelay);
  for(int i=0; i<num_leds; ++i)
  {
    digitalWrite(led[i], LOW);
    delay(interLedDelay);
  }
  delay(toggleDelay);
}
