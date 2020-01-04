void setup() {
 Serial.begin(9600);
 Serial.print("**************class_3 Switch statement in user *************");
}

void loop() 
{
 if(Serial.available()>0)
  {
   int b= Serial.parseInt();
   switch(b)
   {
     case 1:
      Serial.println("hey pardeep");
      break;
      case 2:
      Serial.println("himanshi");
      break;
      
      
      

   }
  }
}


