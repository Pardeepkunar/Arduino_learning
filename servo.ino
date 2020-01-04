#include<Servo.h>
Servo myservo;
int pos=180;
int sensor = 8; 
int val; 
void setup() 
{
  Serial.begin(9600);
  Serial.println("**************IR-Servo***************");
  myservo.attach(5);
  pinMode(8,INPUT); 
}

void loop() 
{ 
  val = digitalRead(8);  
  if(val == LOW) 
  {
    myservo.write(90);
    delay(15);
  }
  else
  {
   myservo.write(0);
   delay(15);
  }
}

