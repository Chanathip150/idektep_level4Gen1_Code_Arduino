# idektep_level4Gen1_Code_Arduino
## install Libraries 
download from folder Libraries or download zip. file form [link](https://drive.google.com/drive/folders/1YRXJ12_nRA4-XXKJdmbj5KnLPPElclSH?usp=sharing)
  1.Adafruit_NeoPixel  
  2.LiquidCrystal_I2C  
  3.Servo  
  4.VoiceRecognitionV3  
  
## Circuit
Wiring diagram.pdf

## RGB 
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
