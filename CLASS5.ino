int led=13;
int sensor=12;
int a;
void setup() 
{
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(sensor,INPUT); 
Serial.println("***************IR-Sensor*****************");
}
void loop() 
{
 a=digitalRead(12);
 if(a==LOW)
  {
   digitalWrite(a,HIGH);
  }
  else
  {
   digitalWrite(a,LOW);
  }
  }

