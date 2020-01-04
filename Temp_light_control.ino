#include<dht.h>
dht DHT;
int load1=10;
int load2=11;
void setup()
{
  Serial.begin(9600);
pinMode(load1,OUTPUT);
pinMode(load2,OUTPUT);
  }
void loop()
{
  int tempdata = DHT.read11(9);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  delay(2000);
   
  if(DHT.temperature>34)
  {
    Serial.println("****Temperature high");
    digitalWrite(load1,HIGH);
    digitalWrite(load2,HIGH);
    delay(2000);
  }
  else
  {
    Serial.println("****Temperature Normal");
    digitalWrite(load1,LOW);
    digitalWrite(load2,LOW);
    delay(2000);
  }
     
}
