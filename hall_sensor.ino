int hallSensorPin = 2;
int state = 0;
int led=12;

void setup() 
{
  Serial.begin(9600);
  pinMode(hallSensorPin, INPUT);
}

void loop() 
{
 state = digitalRead(hallSensorPin);
 if(state == LOW)
 {
   Serial.println("Activate");
   digitalWrite(led,HIGH);
   delay(100);
 }
 else
 {
  Serial.println("..........");
  digitalWrite(led,LOW);
  delay(100);
 }
}
