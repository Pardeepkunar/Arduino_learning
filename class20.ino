
int gas_din=2;
int gas_ain=A0;
int led_pin=13;
int ad_value;
void setup()
{
  pinMode(led_pin,OUTPUT);
  pinMode(gas_din,INPUT);
   pinMode(gas_ain,INPUT);
   Serial.begin(9600);
  
}
void loop()
{
ad_value=analogRead(gas_ain);
if(digitalRead(gas_din)==LOW)
{
  Serial.println("gas likage");
}
else
{
  Serial.println("GAS NOT LIKAGE");
}
if(ad_value>700)
{
  digitalWrite(led_pin,HIGH);
delay(10);
}

}












  
  


