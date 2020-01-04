#include<Servo.h>
Servo myservo;


void setup()
{
  Serial.begin(9600);
  myservo.attach(5);
   myservo.write(0);
  
  Serial.print("***************class_2 input to Serialmonitor************"); 
}

void loop()
{
  if(Serial.available()>0)
  {
    int a=Serial.parseInt();
    switch(a)
    {
      case 1:
      Serial.println("0");
      myservo.write(0);
      delay(50);
      break;
      case 2:
      Serial.println("45");
      myservo.write(45);
      delay(50);
      break;
     
      default:
      Serial.println("bye");
      myservo.write(0);
      delay(0);
      break;
    }
    }
}

