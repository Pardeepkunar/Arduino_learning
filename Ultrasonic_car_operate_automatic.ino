

const int RMF = 3;
const int RMB = 4;
const int LMF = 5;
const int LMB = 6;
const int trigPin = 11;
const int echoPin = 12;
void setup()
{
  Serial.begin(9600);
  Serial.println("********************Ultrasonic sensor********************");
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 
  pinMode (RMF, OUTPUT);
  pinMode (RMB, OUTPUT);
  pinMode (LMF, OUTPUT);
  pinMode (LMB, OUTPUT);
 
}
long duration, distance;

void loop()
{
   digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;

  if(distance<60)
  {
    Serial.println("*************************no*******************");
   
     digitalWrite(RMF, LOW);
  digitalWrite(RMB, LOW);
  digitalWrite(LMF, LOW);
  digitalWrite(LMB, LOW);
  delay(4000);
      Serial.println("****************************************");

     digitalWrite(RMF, HIGH);
  digitalWrite(RMB, LOW);
  digitalWrite(LMF, LOW);
  digitalWrite(LMB, HIGH);
  delay(2000);
    
  }
  else
  {
Serial.println("*****Motor move *****");
  digitalWrite(RMF, LOW); 
  digitalWrite(RMB, HIGH);
  digitalWrite(LMF, LOW);
  digitalWrite(LMB, HIGH);
   delay(100);


    
      
  
  
 }
}
