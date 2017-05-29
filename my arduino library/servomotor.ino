#include <Servo.h> /* servo kütüphanesi dahil edildi*/
Servo servomotor;
int pot = A0;
int potdeger;
int servoderece=0;
void setup() {
  // put your setup code here, to run once:
servomotor.attach(11);/* servo motoru ilteşim ettirmek için*/
}

void loop() {
  // put your main code here, to run repeatedly:
potdeger=analogRead(pot);
servoderece=map(potdeger,0,1023,0,179);/* 180 derece döndüğü için */
servomotor.write(servoderece);
delay(15);
}
