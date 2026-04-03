#include <Servo.h>

Servo myServo;
int ldrPin = A0;
int servoPin = 8;
int light;
int pos;

void setup() {
  Serial.begin(9600);
  pinMode(ldrPin, INPUT);
  myServo.attach(servoPin);

}

void loop() {
  delay(10);
  light = analogRead(ldrPin);
  Serial.println(light);
  if (light < 810){
    myServo.write(0);
    delay(60);
    myServo.write(180);
    delay(60);
    myServo.write(90);
    delay(150);
  }
  
  else{
    myServo.write(90);
  }

}
