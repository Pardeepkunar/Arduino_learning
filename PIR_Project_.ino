int relay1=10;
int relay2=11;

int c=0;
int sen=A0;
int sen1=A1;
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
 
}
void loop()
{
int a=analogRead(A0);
int p=analogRead(A1);
if(a>100 && p<100)
{
  c++;
 Serial.print("Enter please available only 5 person");
 Serial.println(c);
 delay(1000);
}

else if(a<100 && p>100)
{
  c--;
 Serial.println(c);
 delay(1000);
}

/*else if(c<0)
{
 c=0; 
 Serial.println(c);
 delay(1000);
}
*/
else if(c<=5)
{
 Serial.println("**********5 entery done**********");
 digitalWrite(relay1,HIGH);//GREEN LED
  digitalWrite(relay2,LOW);//RED LED
 delay(500);
}
else if(c>5)
{
 Serial.println("**********NO enterY**********");
 digitalWrite(relay2,HIGH);//RED LED
  digitalWrite(relay1,LOW);//GREEN LED
  delay(500);
}

else if(a<100 && p<100)
{
  Serial.println("****somthing wrong somone enter the room at that time somone cross the door****");
  delay(500);
}
else if(a>100 && p>100)
{
  Serial.println("****somthing wrong somone enter the room at that time somone cross the door****");
  delay(500);
}
}










 
