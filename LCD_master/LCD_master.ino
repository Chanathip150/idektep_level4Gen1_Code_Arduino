#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // Address >> 0x27 (GREEN) หรือ 0x3F (BLUE)

void setup() {
  
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรตำแหน่งที่0 แถวที่ 1 เตรียมพิมพ์ข้อความ
  lcd.print("iDektepLevel 4"); //พิมพ์ข้อความ "LCD1602 I2c Test"
  lcd.setCursor(2, 1); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรกำแหน่งที3 แถวที่ 2 เตรียมพิมพ์ข้อความ
  lcd.print("Garphics Fibo"); //พิมพ์ข้อความ "myarduino.net
//  lcd.clear();
//  lcd_print(1,"idektepLevel 4",1,"Graphics");  //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
}

void loop() {


}


void lcd_print(int r0,String s0,int r1,String s1){
    lcd.clear();
    lcd.setCursor(r0,0); 
    lcd.print(s0); 
    lcd.setCursor(r1,1); 
    lcd.print(s1); 
}
