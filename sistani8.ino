#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  lcd.begin(16, 2);//print a message to the lcd
}
void loop() {
  float temp = analogRead(A0);//read analog volt from sensor and save to variable temp
  float temp1 = temp * 0.48828125;//convert the analog volt to its temperature equivalent
  lcd.setCursor(0, 0);//set the cursor to column 0,line 1
  lcd.print("temp=");//write "temp=" on the lcd
  lcd.print(temp1);// write the value of temp1 on the lcd
  lcd.print("*C");//write "*c" on the lcd
  delay(2000);//waits for 2 second
  lcd.clear();// 
}
