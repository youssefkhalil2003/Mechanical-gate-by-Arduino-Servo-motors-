#include <Servo.h>
#include <NewPing.h>
#define trig 3
#define echo 4
#define Max 200 
NewPing us1(3,4,200);

Servo S1 ;
int r2 ;
int reading ;

void setup() {
  // put your setup code here, to run once:
Serial.begin (115200);
S1.attach (11);

}

void loop() {
  // put your main code here, to run repeatedly:
reading= us1.ping_cm() ;
Serial.println (reading);
r2=map(reading,0.0001,200,0,180);
S1.write(r2);
delay (100);


}
