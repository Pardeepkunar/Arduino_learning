#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{
  Serial.begin(9600);
  Serial.println("************LCD-display******************");
  lcd.begin(16,2);                   // lcd band
  lcd.print("pardeep ");             // lcd print name
  lcd.setCursor(0,1);                 // next line  
  lcd.print(" nain");                 // next line print line
  delay(500);
  lcd.clear();
}
void loop()
{
  
}

