#include "Servo.h"
Servo test8;
Servo test10;
Servo test12;
int pos = 75;
int d = 1000;
void setup() {
  // put your setup code here, to run once:
  //test8.attach(8);
  //pinMode(8,OUTPUT);
  //test10.attach(10);
  //test12.attach(12);

}

void loop() {

  // for(pos = 0; pos < 120; pos++){
  //   test8.write(pos);
  //   delay(5);
  // }
  // delay(10000);
  // for(pos = 0; pos < 120; pos++){
  //   test10.write(pos);
  //   delay(5);
  // }
  // delay(10000);
  // for(pos = 0; pos < 120; pos++){
  //   test12.write(pos);
  //   delay(5);
  // }
  // delay(10000);
  // for(pos = 120; pos > 0; pos--){
  //   test8.write(pos);
  //   delay(5);
  // }
  // delay(1000);
  // for(pos = 120; pos > 0; pos--){
  //   test10.write(pos);
  //   delay(5);
  // }
  // delay(10000);
  // for(pos = 120; pos > 0; pos--){
  //   test12.write(pos);
  //   delay(5);
  // }
  test8.attach(8);
  test8.write(65);
  delay(d);
  test8.detach();
  test8.attach(10);
  test8.write(65);
  delay(d);
  test8.detach();
  test8.attach(13);
  test8.write(65);
  delay(d);
  test8.detach();
  test8.attach(12);
  test8.write(65);
  delay(d);
  test8.detach();
}
