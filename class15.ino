int red =10;
int yellow =9;
int green = 8;
void setup()
{
  Serial.begin(9600);
  Serial.println("**************Traffic light***************");
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}
void loop()
{
 
  delay(500);
   digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
 digitalWrite(red,HIGH); 
 delay(5000);
   
 digitalWrite(yellow,HIGH);
 digitalWrite(red,LOW); 
  digitalWrite(green,LOW);
 delay(5000);
   
digitalWrite(yellow,LOW);
 digitalWrite(red,LOW); 
  digitalWrite(green,HIGH);
 delay(5000);
  
 }

