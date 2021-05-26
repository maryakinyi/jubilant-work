
#include <Servo.h>
int trigPin=4;
int echoPin=3;
Servo myServo;
long duration;
long distance;
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, OUTPUT);
}

void loop() 
{
  Ultra();
  myServo.attach(7);
  if(distance<200){
    myServo.write(60);
  }
  else{
    myServo.write(0);
  }
}
 void Ultra(){
  digitalWrite(trigPin, LOW);
  delay(1000); 
  digitalWrite(trigPin, HIGH);
  delay(1000);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0343/2;
  }
