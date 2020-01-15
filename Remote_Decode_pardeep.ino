#include <IRremote.h>

int IRpin = 12; 
IRrecv irrecv(IRpin);
decode_results results;


void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
}  
void loop() 

{   
  if (irrecv.decode(&results)) 
    {
     Serial.println(results.value); // Print the Serial 'results.value'
      delay(10);

      if(results.value==16778245 ||results.value==33540151)
      {
        digitalWrite(11,HIGH);
      }
      else
      {
        digitalWrite(11,LOW);
      }
     irrecv.resume();   // Receive the next value
    }
}    
