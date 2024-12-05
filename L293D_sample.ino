#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
int speed = 100; 
void setup() {
  motor1.run(RELEASE); //Stop
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void loop() {

  motor1.setSpeed(speed); //Set motor speed 0~255
  motor2.setSpeed(speed);
  motor3.setSpeed(speed);
  motor4.setSpeed(speed);
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
  delay(1000);

  motor1.setSpeed(speed);
  motor2.setSpeed(speed);
  motor3.setSpeed(speed);  
  motor4.setSpeed(speed);
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  delay(1000);
}