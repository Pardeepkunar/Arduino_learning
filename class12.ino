int a;
int p;

int c=0;
int sen=A0;
int sen1=A1;
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
 
}
void loop()
{
a=analogRead(A0);
p=analogRead(A1);
if(a>100 && p<100)
{
  c++;
 Serial.print(" persen");
 Serial.println(c);
 delay(1000);
}

else if(a<100 && p>100)
{
  c--;
 Serial.println(c);
 delay(1000);
}

}










 
