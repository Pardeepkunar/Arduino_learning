void setup()
{
   pinMode(2,OUTPUT);
   pinMode(4,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(8,OUTPUT);
   
  Serial.begin(9600);
   
  Serial.print("***************class_2 input to Serialmonitor************"); 
}

void loop()
{
  
  if(Serial.available()>0)
  {
    int a=Serial.parseInt();
    switch(a)
    {
      case 1:
      Serial.println("1");
      digitalWrite(8,HIGH);
       
      delay(1000);
      break;
      case 2:
      Serial.println("2");
      digitalWrite(8,LOW);
     
      
      break;
     case 3:
      Serial.println("");
      digitalWrite(7,LOW);
       break;
      case 4:
      Serial.println("");
      digitalWrite(8,LOW);
      break;
      default:
      Serial.println("bye");
      digitalWrite(2,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      break;
    }
    }
}

