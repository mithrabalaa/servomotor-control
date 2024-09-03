#include <Servo.h> 
int servopos = 165; 
Servo myServo; 

void setup() {
  Serial.begin(9600); 
  myServo.attach(9); 
}

void loop() {
  Serial.println("Enter the angle for the servo (0-180):");

  
  while (Serial.available() == 0) {
    
  }

  servopos = Serial.parseInt(); 

  
  if (servopos >= 0 && servopos <= 180) {
    myServo.write(servopos); 
  } else {
    Serial.println("Invalid angle! Please enter a value between 0 and 180.");
  }
}
