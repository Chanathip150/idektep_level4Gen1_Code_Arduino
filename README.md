# idektep_level4Gen1_Code_Arduino
## install Libraries 
download from folder Libraries or download zip. file form [link](https://drive.google.com/drive/folders/1YRXJ12_nRA4-XXKJdmbj5KnLPPElclSH?usp=sharing)
  1.Adafruit_NeoPixel  
  2.LiquidCrystal_I2C  
  3.Servo  
  4.VoiceRecognitionV3  
  
## Circuit
Wiring diagram.pdf

## LED RGB  
Libraries -> Adafruit_NeoPixel    
PIN for Arduino R3  
PIN 6     
PIN 7    
```
function : 
  1.  theaterChase(strip.Color(255, 0, 0), 50) ;      colorWipe(strip.Color(R, G, B), 50) edit R G B =  255 0 0 -> Red
  2.  rainbow(30);                                    // RGB show rainbow 
  3.  rainbowCycle(30);                               // RGB show rainbow Cycle 
  4.  theaterChase(strip.Color(255, 255, 15),50);     //color  blinker -> theaterChase(strip.Color(R, G, B),50); edit R G B =  255 255 15 -> Yellow 
  5.  theaterChaseRainbow(30);                        //color  blinker
```

## LCD module 
Libraries -> LiquidCrystal_I2C   
PIN for Arduino R3  
SDA -> PIN A4  
SCL -> PIN A5  

```
function : 
lcd_print(1,"idektepLevel 4",1,"Graphics");  //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
```
## Servo motor
Libraries -> Servo  
PIN for Arduino R3  
Sevro Head PIN 10     
Servo arm left PIN 11  
Servo arm Right PIN 12    

```
function : 
head_shake(x,y);                //ส่ายหัว  x คือ หันไปทางซ้าย เท่าไหร่ ได้ตั้งแต่ 0 - 100  y คือ หันไปทางซ้ายเท่าไหร่ ได้ตั้งแต่ 100 - 180 
begin_head();                   //หันหน้าตรง
head_turnleft(x);               //ส่ายหัว ไปทางซ้าย  x คือค่าองศา ตั้งแต่ 0-100
head_turnright(x)               //ส่ายหัว ไปทางซ้าย  x คือค่าองศา ตั้งแต่ 100 - 180
lift_twohand();                 //ยกมือขึ้น 2 มือ 
lift_righthand();               //ยกมือ ซ้าย ขึ้น
lift_lefthand();                //ยกมือ ขวา ขึ้น
begin_twohand();                //มือสอง มืออยู่ในท่าปกติ 
begin_righthand();              // มือ ซ้าย อยู่ในท่าปกติ
begin_lefthand();               // มือ ขวา อยู่ในท่าปกติ
```

## Voice recognition module v3  
RXD -> PIN 3  
TXD -> PIN 2  
Libraries ->  VoiceRecognitionV3  
Train speech   
Open Libraries ->VoiceRecognitionV3 -> examples -> vr_sample_train   
Open file   vr_sample_train   upload and Open serial Monitor  
Video examples Train 
https://youtu.be/tzp4MtapnT4

## integration code
Voice recognition module v3   -> LCD + RGB + Servo  
Download Integration_master 
Open file Name Integration_master  
Description Integration_master 
link -> https://youtu.be/VBlgh3psJ4Q  

## ESp 32 Cam 
Select Bord -> AI Thinker ESP32-CAM
Require -> esp version 1.0.6
Serial Monitor -> 250000 Baud


