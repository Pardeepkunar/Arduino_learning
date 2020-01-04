int ACWATERPUMP = 13;
int sensor = 8; 
int val; 
void setup() 
{
  Serial.begin(9600);
  Serial.println("*********************Waterpump automatic operate**********************");
  pinMode(13,OUTPUT); 
  pinMode(8,INPUT); 
}

void loop() { 
  val = digitalRead(8);  //Read data from soil moisture sensor  
  if(val == HIGH) 
  {
  digitalWrite(13,LOW); //if soil moisture sensor provides LOW value send LOW value to relay
  }
  else
  {
  digitalWrite(13,HIGH); //if soil moisture sensor provides HIGH value send HIGH value to relay
  }
  delay(400); //Wait for few second and then continue the loop.
}
