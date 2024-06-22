// C++ code
//
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd_1(32, 16, 2);
int a=0;
int b=0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  lcd_1.init();

  lcd_1.setCursor(0, 0);
  lcd_1.backlight();
  lcd_1.display();
}

void loop()
{
  a=analogRead(A0);
  b=map(a,0,1023,0,255);
  lcd_1.setCursor(0, 0);
  if(b>100){
    lcd_1.print("Welcome To AFSCN!");
  }
  
  
}
