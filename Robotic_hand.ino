#include<Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
//****************Pardeep:->Sandeep,Kartik,Yogesh,Harish*********************
int sandeep=0;
int kartik=0;
int yogesh=0;
void setup()
{
  myservo1.attach(2);
  myservo2.attach(3);
  myservo3.attach(4);
}
void loop()
{
  for(sandeep=0;sandeep<180;sandeep++) // sandeep is int variable
  {
    myservo1.write(sandeep);
    delay(100);
  }
  for(kartik=0;kartik<90;kartik++)     // kartik is int variable
  {
    myservo2.write(kartik);
    delay(100);
  }
  for(yogesh=0;yogesh<90;yogesh++)      // yogesh is int variable
  {
    myservo3.write(yogesh);
    delay(100);
  }
  for(kartik=90;kartik<0;kartik--)
  {
    myservo2.write(kartik);
    delay(100);
  }
   for(sandeep=180;sandeep<0;sandeep--)
  {
    myservo1.write(sandeep);
    delay(100);
  }
  for(yogesh=90;yogesh<0;yogesh--)
  {
    myservo3.write(yogesh);
    delay(100);
  }

  //*********************************Thanks a lot pardeep************************************
}
