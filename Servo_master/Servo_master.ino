#include <Servo.h>
#define servo_armRight_pin 10
#define servo_armleft_pin 11
#define servo_head_pin 12
Servo servo_armleft;
Servo servo_armRight;
Servo servo_head;
void setup() {
  // put your setup code here, to run once:
  servo_head.attach(servo_head_pin);
  servo_armRight.attach(servo_armRight_pin);
  servo_armleft.attach(servo_armleft_pin);


}

void loop() {
  // put your main code here, to run repeatedly:
  servo_head.write(100);
  servo_armleft.write(180); //arm right
  servo_armRight.write(0);
  delay(1000);
  servo_head.write(180);
  servo_armRight.write(0); //arm right
  servo_armleft.write(180);
  delay(1000);
}
