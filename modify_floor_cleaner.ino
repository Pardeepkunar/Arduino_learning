    const int mt1 =  2;    
    const int mt2 =  3;   
    const int mt3 =  4;  
    const int mt4 =  5; 
    const int relay= 8;
    const int trigPin = 12;
    const int echoPin = 11;
    long duration;
    int distanceCm, distanceInch;
    float vout;
    void setup() 
    {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(mt1,OUTPUT);
    pinMode(mt2,OUTPUT);
    pinMode(mt3,OUTPUT); 
    pinMode(mt4,OUTPUT);
    pinMode(relay,OUTPUT);
    digitalWrite(mt1,HIGH);
    digitalWrite(mt2,HIGH);
    digitalWrite(mt3,HIGH);
    digitalWrite(mt4,HIGH);
   
     Serial.begin(9600);
    }
    void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distanceCm= duration*0.034/2;
    distanceInch = duration*0.0133/2;
    vout=distanceCm;
   Serial.println(" motor forward ");
   delay(50);
       
       digitalWrite(mt1,LOW);
       digitalWrite(mt2,HIGH);
       digitalWrite(mt3,LOW);
       digitalWrite(mt4,HIGH);
       digitalWrite(relay,HIGH);
    if((vout<=120)&&(vout>=1))
    {
        Serial.println(" motor Forward");
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
     
     digitalWrite(mt1,LOW);
    digitalWrite(mt2,LOW);
    digitalWrite(mt3,LOW);
    digitalWrite(mt4,HIGH);
     digitalWrite(relay,LOW);
    delay(2200);
       }
     
    }

