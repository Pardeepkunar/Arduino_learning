#include<Servo.h>
Servo myservo;
Servo myservo1;
Servo myservo2;

int t=A0;
int c=0;
void setup()
{
  Serial.begin(9600);
  Serial.println("****************LDR-Servo***************");
  myservo.attach(2);
   myservo1.attach(3);
    myservo2.attach(4);
     pinMode(t,INPUT);  
}
void loop()
{
c=analogRead(A0);
if(c<300)
{
  myservo.write(90);
   myservo1.write(90);
    myservo2.write(90);
    Serial.println(c);
   delay(2000);
}
else
{
  myservo.write(0);
   myservo1.write(0);
    myservo2.write(0);
   Serial.println(c);
  delay(2000);
}
  }

