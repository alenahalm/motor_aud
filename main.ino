#include <Servo.h>

#define motor_pin 10
#define motor_pin2 9

Servo servo;

void setup() {

  pinMode(motor_pin, OUTPUT);
  pinMode(motor_pin2, OUTPUT);
  servo.attach(11);


}

void loop() {

  for (int i = 0; i <= 180; i++) {
    servo.write(i);
    delay(10);
  }

  for (int i = 180; i >= 0; i--) {
    servo.write(i);
    delay(10);
  }

  for (int vel = 0; vel <= 255; vel++) {
    analogWrite(motor_pin, vel);
    analogWrite(motor_pin2, vel);
    delay(20);
  }
}
