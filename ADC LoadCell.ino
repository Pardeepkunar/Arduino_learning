#include<HX711_ADC.h>
HX711_ADC LoadCell(4,5);
void setup()
{
  LoadCell.begin();
  LoadCell.start(2000);
  LoadCell.setCalFactor(2000.0);
  Serial.begin(9600);
}
void loop()
{
  LoadCell.update();
  float i = LoadCell.getData();
  Serial.println("weight[g]");
  delay(100);
  Serial.println(i);
}
