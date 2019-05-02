#include <Servo.h>



Servo serrure;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 180;    // variable to store the servo position
int key = 1;
void setup() {
  serrure.attach(5);  // attaches the servo on pin 13 to the servo object
}

void loop() {
  if (key==1) {
    openserrure();
    key = 0;
  }
}

void openserrure(){

  serrure.write(pos);
  delay(2000);
  pos = 90;
  serrure.write(pos);
  delay(2000);
}
  
//   for (pos = 0; pos <= 180; pos += 1) { 
//   serrure.write(pos);             
//   delay(15);                       
//}
