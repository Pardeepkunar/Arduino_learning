#include<Servo.h>
Servo myservo;
int pos=0;
void setup()
{
  Serial.begin(9600);
  myservo.attach(9);
}
void loop()
{
  if(Serial.available()>0)
  {
    int a=Serial.parseInt();
    switch(a)
    {
      case 1:
      {
        Serial.println("pardeep");
        myservo.write(180);
        delay(100);
      }
      break;
      case 2:
      {
        Serial.println("himanshi");
        myservo.write(0);
        delay(100);
      }
      break;
    }
  }
}

