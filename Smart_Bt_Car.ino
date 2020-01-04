int led = 8;        //led

int outPin1 = 5;     //motor1
int outPin2 = 6;    //motor1

int outPin4 = 11;   //motor2
int outPin3 = 12;   //motor2

char bt = 0;       //BT 
/*-----------------------------------------------------------------------------------------------------*/

void setup()
{
  Serial.begin(9600);
  
  pinMode(outPin1,OUTPUT);
  pinMode(outPin2,OUTPUT);
  pinMode(outPin3,OUTPUT);
  pinMode(outPin4,OUTPUT);
  
  pinMode(led,OUTPUT);
}
void loop()
{
  if (Serial.available() > 0)
  {
    bt = Serial.read();
    Serial.println(bt);
    //digitalWrite(led, 1);
    /*_________________________________________________________________________________________________*/
    
    if(bt == '3')        //move forwards
    {
      digitalWrite(outPin1,HIGH);
      digitalWrite(outPin2,LOW);
      digitalWrite(outPin3,HIGH);
      digitalWrite(outPin4,LOW);
      digitalWrite(outPin4,LOW);
      digitalWrite(led,LOW);
      Serial.println("****************");
    }
     else if (bt == '2')     //stop!!
    {   
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,LOW);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,LOW);
    }
    else if (bt == '1')       //move backwards
    {
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,HIGH);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,HIGH);
      digitalWrite(led,HIGH);
    }
   
    else if (bt == '4')     //stop!!
    {   
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,LOW);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,LOW);
    }
    else if (bt == '5')    //right
    {
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,HIGH);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,LOW);
    }
     else if (bt == '8')     //stop!!
    {   
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,LOW);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,LOW);
    }
    else if (bt == '7')     //left
    {
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,LOW);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,HIGH);
    }
     else if (bt == '6')     //stop!!
    {   
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,LOW);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,LOW);
    }
    else if (bt == 'I')    //forward right
    {
      digitalWrite(outPin1,HIGH);
      digitalWrite(outPin2,LOW);
      digitalWrite(outPin3,LOW);
      digitalWrite(outPin4,HIGH);
    }
    else if (bt == 'G')    //forward left
    {
      digitalWrite(outPin1,LOW);
      digitalWrite(outPin2,HIGH);
      digitalWrite(outPin3,HIGH);
      digitalWrite(outPin4,LOW);
    }//arduino//

       
    }
  
  }
 
