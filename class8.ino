int a=3;
void setup()
{
  Serial.begin(9600);
  Serial.println("***************** Mukul PIR-Sensor*****************"); 
  pinMode(a,INPUT);
}
void loop()
{
  int b = digitalRead(3); 
  if(b==HIGH)
  {
   Serial.println("light on"); 
   delay(1000);
  }
  else
  {
     Serial.println("light off"); 
     delay(1000);
  }
}
