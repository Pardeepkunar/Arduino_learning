int data;

void setup() 
{
 Serial.begin(9600);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
 pinMode(12,OUTPUT);
 pinMode(8,OUTPUT);
 Serial.print("calibration sensor");
 for(int i=0;i<10;i++)
 {
  Serial.print(".");
  delay(1000);
 }
  Serial.print("Done");
  Serial.print("Sensor activate");
  digitalWrite(12,HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  delay(50);
  
}

void loop() 
{
  data=digitalRead(10);
  boolean lock=true;
  if(data==HIGH && lock==true)
  {
    lock=false;
    Serial.print("Sensor detect");
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    digitalWrite(8,HIGH);
    delay(30000);
    digitalWrite(8,LOW);
    delay(100);
    lock=true;
    
  }
  
}
