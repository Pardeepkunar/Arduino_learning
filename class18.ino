#include<LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
const int trigPin = 10;
const int echoPin = 11;
long duration;
int distanceCm, distanceInch;

void setup(){
  Serial.begin(9600);
  Serial.println("****************LCD-Distance*******************");
  lcd.begin(16,2);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
distanceCm= duration*0.034/2;
distanceInch= duration*0.0133/2;

lcd.setCursor(0,0);
lcd.print("distance");
lcd.print(distanceCm);
lcd.print("cm");
delay(10);
lcd.setCursor(0,1);
lcd.print("distance");
lcd.print(distanceInch);
lcd.print("inch");
delay(10);  
}

