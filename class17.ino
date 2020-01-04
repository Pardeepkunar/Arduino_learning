const int RMF =3;// Right Motor Forward IN1
const int RMB =4;// Right Motor Backward IN2
const int LMF =5;// Left Motor Forward IN3
const int LMB =6;// Left Motor Backward IN4


void setup() {
  Serial.begin(9600);
  Serial.println("*****************Motor-Driver*******************");
  pinMode(13, OUTPUT);
 pinMode (RMF, OUTPUT);
 pinMode (RMB, OUTPUT);
 pinMode (LMF, OUTPUT);
 pinMode (LMB, OUTPUT);
}

void loop() {
  delay(3000);
  
// Running Robot Forward
digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)    
digitalWrite(RMF, HIGH);
digitalWrite(RMB, LOW);
digitalWrite(LMF, HIGH);
digitalWrite(LMB, LOW);

delay(3000);

// Running Robot Backward
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
digitalWrite(RMF,LOW);
digitalWrite(RMB,HIGH);
digitalWrite(LMF,LOW);
digitalWrite(LMB,HIGH);

delay(3000);

// Taking Right Turn

digitalWrite(RMF, LOW);
digitalWrite(RMB, LOW);
digitalWrite(LMF, HIGH);
digitalWrite(LMB, LOW);

delay(3000);

// Taking Left Turn

digitalWrite(RMF, HIGH);
digitalWrite(RMB, LOW);
digitalWrite(LMF, LOW);
digitalWrite(LMB, LOW);

delay(3000);

// Stop The Robot

digitalWrite(RMF, LOW);
digitalWrite(RMB, LOW);
digitalWrite(LMF, LOW);
digitalWrite(LMB, LOW);
}



















