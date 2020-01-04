int RMF = 3;
int RMB = 4;
int LMF = 5;
int LMB = 6;




void setup() 
{
  Serial.begin(9600);

  pinMode (RMF, OUTPUT);
  pinMode (RMB, OUTPUT);
  pinMode (LMF, OUTPUT);
  pinMode (LMB, OUTPUT);
  
 
}

void loop()
{     
  
  
  
   
    
 
  
  digitalWrite(RMF, LOW);
  digitalWrite(RMB, HIGH);
  digitalWrite(LMF, LOW);
  digitalWrite(LMB, HIGH);
 
    
   
  
} 


