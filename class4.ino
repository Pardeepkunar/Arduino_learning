int f=6;
int g=12;
int e=11;
int d=10;
int c=9;
int b=8;
int a=7;
int led=13;

int de=1000;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(a,OUTPUT);
  Serial.println("******************Seven sigment**********************");
}
void loop()
{
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(a,1);
   digitalWrite(b,0);
    digitalWrite(c,0);
     digitalWrite(d,1);
      digitalWrite(e,1);
       digitalWrite(f,1);
        digitalWrite(g,1);
        delay(de);             //1
        


digitalWrite(a,0);
   digitalWrite(b,0);
    digitalWrite(c,1);
     digitalWrite(d,0);
      digitalWrite(e,0);
       digitalWrite(f,1);
        digitalWrite(g,0);
        delay(de);               //2

digitalWrite(a,0);
   digitalWrite(b,0);
    digitalWrite(c,0);
     digitalWrite(d,0);
      digitalWrite(e,1);
       digitalWrite(f,1);
        digitalWrite(g,0);
        delay(de);              //3

digitalWrite(a,1);
   digitalWrite(b,0);
    digitalWrite(c,0);
     digitalWrite(d,1);
      digitalWrite(e,1);
       digitalWrite(f,0);
        digitalWrite(g,0);
        delay(de);                  //4

digitalWrite(a,0);
   digitalWrite(b,1);
    digitalWrite(c,0);
     digitalWrite(d,0);
      digitalWrite(e,1);
       digitalWrite(f,0);
        digitalWrite(g,0);
        delay(de);                 //5
digitalWrite(led,LOW);
delay(1000);
}

