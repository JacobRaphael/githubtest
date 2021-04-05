#include <Servo.h>
int IRpin = A0;               // IR photodiode on analog pin A0
int IRemitter = 2;            // IR emitter LED on digital pin 2
int ambientIR;                // variable to store the IR coming from the ambient
int obstacleIR;               // variable to store the IR coming from the object
int value[10];                // variable to store the IR values
int distance;                 // variable that will tell if there is an obstacle or not
int val;
Servo myservo;
void setup(){
  Serial.begin(9600);         // initializing Serial monitor
  pinMode(IRemitter,OUTPUT);  // IR emitter LED on digital pin 2
  digitalWrite(IRemitter,LOW);// setup IR LED as off
  pinMode(11,OUTPUT);         // buzzer in digital pin 11
    myservo.attach(9);
      myservo.write(100);
}

void loop(){
  distance = analogRead(0); 
  delay(100);// calling the function that will read the distance and passing the "accuracy" to it
  Serial.println(distance);   // writing the read value on Serial monitor
  // buzzer();  
 if (distance <= 500)
 {
  myservo.write (76);// uncomment to activate the buzzer function
  delay (500);
  myservo.write(100);
  delay(10000);
 }

 }



