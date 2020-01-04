#include<dht.h>
#define DHT11_PIN A0
dht DHT;

void setup()
{
  Serial.begin(9600);
  Serial.print("*****************Temperature***************");
}
void loop()
{
  int a=DHT.read11(DHT11_PIN);
   Serial.print("temp = ");
  Serial.println(DHT.temperature);
   Serial.print("H = ");
    Serial.println(DHT.humidity);
  delay(5000);
}

