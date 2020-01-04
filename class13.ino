int a=13;
void setup()
{
  Serial.begin(9600);
  pinMode(a,OUTPUT);
  pinMode(A1,INPUT);
}
void loop()
{
 int x=analogRead(A1);
 delay(500);
 if(x>100)
 {
  Serial.println("larger then 100");
 }
 else if(x<50)
 {
   Serial.println("less then 50");
 }
else
{
  Serial.println(x);
}
 
 
}

