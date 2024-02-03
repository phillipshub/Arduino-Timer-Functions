/*
Program: Timers
Author: Phillip
Date: 2/3/2024
// ----------------------------------------------------------------------------
This is a set of timer functions.
*/// --------------------------------------------------------------------------

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
