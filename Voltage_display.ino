
int sen=A0;
int led1 = D1;
int led2 = D2;
void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

}
void loop()
{
int a=analogRead(A0);
//Serial.println(a);




if(a<=34)
{
  Serial.println("0V");
  
//  if (a<=2)
//  {
//    Serial.println("1%");
//  }
//  else if (a<=4)
//  {
//    Serial.println("2%");
//  }
//  else if (a<=6)
//  {
//    Serial.println("3%");
//  }
//  else if (a<=8)
//  {
//    Serial.println("4%");
//  }
//  else if (a<=10)
//  {
//    Serial.println("5%");
//  }
//  else if (a<=11)
//  {
//    Serial.println("6%");
//  }
//  else if (a<=13)
//  {
//    Serial.println("7%");
//  }
//  else if (a<=15)
//  {
//    Serial.println("8%");
//  }
//  else if (a<=17)
//  {
//    Serial.println("9%");
//  }
//  else if (a<=19)
//  {
//    Serial.println("10%");
//  }
//  else if (a<=21)
//  {
//    Serial.println("11%");
//  }
//  else if (a<=24)
//  {
//    Serial.println("12%");
//  }
//  else if (a<=26)
//  {
//    Serial.println("13%");
//  }
//  else if (a<=28)
//  {
//    Serial.println("14%");
//  }
//  else if (a<=29)
//  {
//    Serial.println("15%");
//  }
}




// 1v 
else if(a<=74)
{
  Serial.println("1V");
  digitalWrite(led1,HIGH);
//  if (a<=30)
//  {
//    Serial.println("16%");
//  }
//  else if (a<=31)
//  {
//    Serial.println("17%");
//  }
//  else if (a<=32)
//  {
//    Serial.println("18%");
//  }
//  else if (a<=33)
//  {
//    Serial.println("19%");
//  }
//  else if (a<=34)
//  {
//    Serial.println("20%");
//  }
//  else if (a<=35)
//  {
//    Serial.println("21%");
//  }
//  else if (a<=36)
//  {
//    Serial.println("22%");
//  }
//  else if (a<=37)
//  {
//    Serial.println("23%");
//  }
//  else if (a<=38)
//  {
//    Serial.println("24%");
//  }
//  else if (a<=39)
//  {
//    Serial.println("25%");
//  }
//  else if (a<=40)
//  {
//    Serial.println("26%");
//  }
//  else if (a<=41)
//  {
//    Serial.println("27%");
//  }
//  else if (a<=42)
//  {
//    Serial.println("28%");
//  }
//  else if (a<=43)
//  {
//    Serial.println("29%");
//  }
//  else if (a<=44)
//  {
//    Serial.println("30%");
//  }
//  else if (a<=45)
//  {
//    Serial.println("31%");
//  }
//  else if (a<=46)
//  {
//    Serial.println("32%");
//  }
  
}



// 2v
else if(a<=119)
{
  digitalWrite(led2,HIGH);
  Serial.println("2V");
}




//3v
else if(a<=158)
{
  Serial.println("3V");
}


//4
else if(a<=186)
{
  Serial.println("4V");
}


//5
else if(a<=187)
{
  
  Serial.println("4.6V");
}



delay(1000);
} 
