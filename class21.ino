#include<Keypad.h>
const byte R = 4;
const byte C= 4;
String pass="12";
String temp="";
char a;
char arr[R][C]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte ROW[R]={3,4,5,6};
byte COL[C]={7,8,9,10};
Keypad deep=Keypad(makeKeymap(arr),ROW,COL,R,C);
 void setup()
 {
  Serial.begin(9600);
 }
void loop()
{
  a= deep.getKey();
  if(a)
  Serial.println(a);
  if(a!= NO_KEY)
  {
     if(a=='0'||a=='1'||a=='2'||a=='3')
      {
         temp += a;
      }
     if(a=='*')
      {
          if(pass==temp)
          {
            Serial.println("welcome pardeep");
          }
          else
          {
             Serial.println(" please try again");
          }
      }
    if(a=='#')
      {
         temp = "";  
       }

    
  }
}





