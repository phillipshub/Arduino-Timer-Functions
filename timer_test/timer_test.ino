/*
Program: Timer Test
Author: Phillip
Date: 2/3/2024
// ----------------------------------------------------------------------------
This program is for testing timer functions. After a delay the builtin LED will
begin to blink. 
*/// --------------------------------------------------------------------------

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
} 

void loop() {

  timer(0,0,10);

  while(true) {
    digitalWrite(LED_BUILTIN, HIGH);  
    delay(500);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(500);  
  }

} // --------------------------------------------------------------------------

void seconds(unsigned int seconds) {
  delay(seconds * 1000);
}

void minutes(unsigned int minutes) {
  delay(minutes * 60000);
}

void hours(unsigned int hours) {
  delay(hours * 3600000);
}

// ----------------------------------------------------------------------------
void timer(unsigned int h, unsigned int m, unsigned int s) {
  hours(h);
  minutes(m);
  seconds(s);
} // --------------------------------------------------------------------------
