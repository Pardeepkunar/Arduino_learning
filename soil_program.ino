int relay=11;
int soil=10;
int val;
void setup()
{
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
}
void loop()
{
  val=digitalRead(10);
  if(val==LOW)
  {
    Serial.println("***********start**********");
    digitalWrite(relay,LOW);
  }
  else
  {
    Serial.println("***********Stop******");
    digitalWrite(relay,HIGH);
  }
}
