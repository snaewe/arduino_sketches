#include <LiquidCrystal.h>
LiquidCrystal lcd(5,6,7,8,9,10);

void setup()
{
  //pinMode(13, OUTPUT);
  lcd.begin(16,1);
}

void loop()
{
  //digitalWrite(13, HIGH);
  lcd.print("Hello World ! :-)");
  delay(3000);
  lcd.clear();
  lcd.print("Good Bye !s");
  delay(3000);
  lcd.clear();
  //digitalWrite(13, LOW);
}

