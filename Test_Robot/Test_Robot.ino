// LCD Library 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // Address >> 0x27 (GREEN) หรือ 0x3F (BLUE) 

// RGB Library 
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN 6
#define PIN2 7
Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(12, PIN2, NEO_GRB + NEO_KHZ800);
//servo head and arm 
#include <Servo.h>
#define servo_armRight_pin 10
#define servo_armleft_pin 11
#define servo_head_pin 12
Servo servo_armleft;
Servo servo_armRight;
Servo servo_head;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'
  strip2.begin();
  strip2.setBrightness(50);
  strip2.show(); // Initialize all pixels to 'off'
  servo_head.attach(servo_head_pin);
  servo_armRight.attach(servo_armRight_pin);
  servo_armleft.attach(servo_armleft_pin);
  lcd.begin();
  lcd.backlight();
//  function 
  rainbowCycle(30);
  lcd_print(1,"Robot Head",1,"Test Robot");  //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
  head_shake(80, 120); 
}

void loop() {
  lift_twohand();
  delay(800);
  begin_twohand(); 
  delay(800);

}
