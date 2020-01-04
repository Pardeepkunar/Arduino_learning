
const int trigPin = 11;
const int echoPin = 12;
void setup()
{
  Serial.begin(9600);
  Serial.println("********************Ultrasonic sensor********************");
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
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
    delay(4000);
    Serial.println("****************************************");
   
  }
  else
  {
    Serial.println("*****Motor move *****");
    
  }
}
