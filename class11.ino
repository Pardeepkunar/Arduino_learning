int val;
int led=13;
void setup()
{
  Serial.begin(9600);
  Serial.println("**************BLUTOOTH******************"); 
  pinMode(led,OUTPUT);
}
void loop()
{
  if(Serial.available())
{
  val=Serial.read();
  Serial.println(val);  
  if(val==50)
  digitalWrite(led,HIGH);
  
  else if(val==49)
  digitalWrite(led,LOW);
}
}


