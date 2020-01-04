

void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
 }
void loop()
{
  while(Serial.available())
  {
    char deep = Serial.read();
    if(deep=='1')
    {
    digitalWrite(12,HIGH);
    }
    if(deep=='2')
    {
      digitalWrite(12,LOW);
    }
     if(deep=='3')
    {
    digitalWrite(11,HIGH);
    }
    if(deep=='4')
    {
      digitalWrite(11,LOW);
    }
  }
}
