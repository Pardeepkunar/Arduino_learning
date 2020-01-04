//int led=13;
int a=4;
int c=5;
int d=6;
int e=7;
int m1f=10;
int m1r=11;
int m2f=12;
int m2r=13;
void setup() 
{
Serial.begin(9600);  
//pinMode(led,OUTPUT);
pinMode(a,INPUT);
pinMode(c,INPUT);
pinMode(d,INPUT);
pinMode(e,INPUT);
pinMode(m1f,OUTPUT);
pinMode(m1r,OUTPUT);
pinMode(m2f,OUTPUT);
pinMode(m2r,OUTPUT);
}

void loop() 
{
  int deep1 = digitalRead(a);
  int deep2 = digitalRead(c);
  int deep3 = digitalRead(d);
  int deep4 = digitalRead(e);
  //Serial.println(deep1);
  //Serial.println(deep2);
  //Serial.println(deep3);
  //Serial.println(deep4);
  //delay(2000);

  if(deep2 ==HIGH && deep1==LOW && deep3 ==LOW && deep4==LOW) //2 Forward
  {
    digitalWrite(m1f,HIGH);
    digitalWrite(m1r,LOW);
    digitalWrite(m2f,HIGH);
    digitalWrite(m2r,LOW);
   
   }
  else if(deep2 ==LOW && deep1==LOW && deep3 ==LOW && deep4==HIGH) //8 Reverse
  {
     digitalWrite(m1f,LOW);
    digitalWrite(m1r,HIGH);
    digitalWrite(m2f,LOW);
    digitalWrite(m2r,HIGH);
  }
  else if(deep2 ==LOW && deep1==LOW && deep3 ==HIGH && deep4==LOW)//4 Left
  {
    digitalWrite(m1f,LOW);
    digitalWrite(m1r,HIGH);
    digitalWrite(m2f,HIGH);
    digitalWrite(m2r,LOW);
  }
 else if(deep2 ==HIGH && deep1==LOW && deep3 ==HIGH && deep4==LOW) //6 Right
 {
  digitalWrite(m1f,HIGH);
    digitalWrite(m1r,LOW);
    digitalWrite(m2f,LOW);
    digitalWrite(m2r,HIGH);
 }
 else if(deep2 ==LOW && deep1==HIGH && deep3 ==HIGH && deep4==LOW) // 5 Stop
 {
   digitalWrite(m1f,LOW);
    digitalWrite(m1r,LOW);
    digitalWrite(m2f,LOW);
    digitalWrite(m2r,LOW);
 }
 
}
