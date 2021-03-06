#include <Servo.h>

Servo esc;  // create servo object to control a servo

int throttlePin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  esc.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(throttlePin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  esc.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
