
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int switch1 = 11;
int switch2 = 12;
int start =10;
int Rod =8;
int val=0;
int sum=0;

void setup()
{
  lcd.begin();
  lcd.backlight();
  Serial.begin(9600);
  pinMode(Rod,OUTPUT);
  Serial.println("*************** Welcome to new Idea************"); 
  lcd.print("Welcome to new Idea");
}
void loop()
{
     lcd.clear();
//   lcd.print("Pardeep");
//   lcd.setCursor (0,1); 
//   lcd.print("Mandeep");
//   delay(2000);
  digitalWrite(Rod,LOW);
  int a1 = digitalRead(switch1);
  int b1 = digitalRead(switch2);
  int b2 =analogRead(A0);
   int b3 = analogRead(A1);
  //Serial.println(b2);  //0
  Serial.println(b3); //
   delay(500);
lcd.print("New Idea");
 //Switch 1 for increment time
if(b3>1000)
    {
       val++;
       sum = val;  
       Serial.println(sum);
       lcd.setCursor(0,1);
        lcd.print(sum);
       delay(1000);
     }

// Switch 2 for decrement time

else if(b3==0)
    {
        val--;
        sum = val;
        Serial.println(sum);
        lcd.setCursor(0,1);
        lcd.print(sum);
        delay(1000);
    }

// 1000->1 second
// 60,000->1 m
// 300,000->5 m
// 600,000->10 m
// 900,000->15 m


// if time is == 5 next ask for press start button
//
else if(sum == 1)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 1 Min..");
            Serial.println("Activate wait 1 Min..");
            digitalWrite(Rod,HIGH);
            int del1 = 1;
            delay(60000*del1);
         }
      
    }
    
else if(sum == 2)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 2 Min..");
            Serial.println("Activate wait 2 Min..");
            digitalWrite(Rod,HIGH);
            int del2 = 2;
            delay(60000*del2);
         }
      
    }

else if(sum == 3)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 3 Min..");
            Serial.println("Activate wait 3 Min..");
            digitalWrite(Rod,HIGH);
            int del3 = 3;
            delay(60000*del3);
         }
      
    } 
 
 else if(sum == 4)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 4 Min..");
            Serial.println("Activate wait 4 Min..");
            digitalWrite(Rod,HIGH);
            int del4 = 4;
            delay(60000*del4);
         }
      
    }   
    

else if(sum == 5)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 5 Min..");
            Serial.println("Activate wait 5 Min..");
            digitalWrite(Rod,HIGH);
            int del5 = 5;
            delay(60000*del5);
         }
      
    }
    

else if(sum == 6)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 6 Min..");
            Serial.println("Activate wait 6 Min..");
            digitalWrite(Rod,HIGH);
            int del6 = 6;
            delay(60000*del6);
         }
      
    }


else if(sum == 7)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 7 Min..");
            Serial.println("Activate wait 7 Min..");
            digitalWrite(Rod,HIGH);
            int del7 = 7;
            delay(60000*del7);
         }
      
    }

else if(sum == 8)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 8 Min..");
            Serial.println("Activate wait 8 Min..");
            digitalWrite(Rod,HIGH);
            int del8 = 8;
            delay(60000*del8);
         }
      
    }

else if(sum == 9)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 9 Min..");
            Serial.println("Activate wait 9 Min..");
            digitalWrite(Rod,HIGH);
            int del9 = 9;
            delay(60000*del9);
         }
      
    }
    
else if(sum == 1)
    {
       // press switch for start
         lcd.setCursor(0,1); 
         lcd.print("Press ok button");
         Serial.println("Press ok button");
         delay(500);
         int c1 = digitalRead(start);
         if (c1== LOW)
         {
            lcd.setCursor (0,1); 
            lcd.print("Activate wait 10 Min..");
            Serial.println("Activate wait 10 Min..");
            digitalWrite(Rod,HIGH);
            int del10 = 10;
            delay(60000*del10);
         }
      
    }    

}






