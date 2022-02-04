#define DIG 11
#define ANALOG A3
int dig = 0;
int encoder = 0;
#include <Servo.h>
Servo servo;
Servo motor;

int motorSpeed = 800;
int motSP = 0;
void setup() {
  pinMode(DIG, INPUT);
  pinMode(ANALOG, INPUT);
  Serial.begin(9600);
  servo.attach(2);
  motor.writeMicroseconds(2300);
  delay(500);
  motor.attach(3);
  delay(100);
  delay(5000);
  motor.writeMicroseconds(800);
  delay(11000);
  
}

void Encoder(){
  if(digitalRead(DIG) == 1) {
    delay(10);
    if(digitalRead(DIG) == 0)encoder++;

  }
  }
  
void loop() {


  //Serial.println(encoder);
  Sbor();
  /*if(encoder < 20){
    servo.write(180);
    motor.writeMicroseconds(800);
  } 
  else {  
    servo.write(90);
    motor.writeMicroseconds(800);
    
    motor.writeMicroseconds(1300);
   
      }*/
    
  
  }


void Sbor(){
   Encoder();
   
  if(encoder < 20){
    servo.write(180);
    motor.writeMicroseconds(2200);
  } 
  else {  
    servo.write(90);
    motor.writeMicroseconds(800);
    delay(5000);
    motor.writeMicroseconds(1600);
    delay(2000);
    Serial.println(encoder);
    encoder = 0;
    Encoder();
    if(encoder < 40){
      Serial.println(encoder);
      servo.write(0);
      motor.writeMicroseconds(1200);
      }
    else{
      motor.writeMicroseconds(800);
      }
    }    
  }
  
void Rasbor(){
  
  
  }
