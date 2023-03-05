void setup_command(){
  begin_head(); //หัวอยู่ในท่าปกติ 
  begin_twohand(); //มืออยู่ในท่าปกติ 
  lcd_print(1,"idektepLevel 4",1,"Graphics");  //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
  colorWipe(strip.Color(160, 160, 160), 50); //RGB Color white  edit colorWipe(strip.Color(R, G, B), 50);
} 

void speech_command(){
  int state; 
  state = myVR.recognize(buf, 50);
  if(state>0){
    switch(buf[1]){
//*****************************use function ฟังก์ชั่นที่ทำงานได้*******************************************************
//  RGB 
//  colorWipe(strip.Color(205, 96, 144), 50);                   //RGB Color pink edit colorWipe(strip.Color(R, G, B), 50);
//  theaterChase(strip.Color(255, 0, 0), 50) ;               //colorWipe(strip.Color(R, G, B), 50) edit R G B =  255 0 0 -> Red
//  rainbow(30);                                             // RGB show rainbow 
//  rainbowCycle(30);                                        // RGB show rainbow Cycle
//  theaterChase(strip.Color(255, 255, 15),50);              //color  blinker -> theaterChase(strip.Color(R, G, B),50); edit R G B =  255 255 15 -> Yellow 
//  theaterChaseRainbow(30);                                 //color  blinker
//  Lcd print 
//  lcd_print(1,"Hello...",1," How are you?");    //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
//
//  hand and head
// 
//  begin_head();         //หันหน้าตรง   face origin
//  head_shake(80, 120);   //ส่ายหัว    turn left and turn right head input x is in the range 0-100 and input y is in the range 100-180
//  head_turnleft(80);    //ส่ายหัว ไปทางซ้าย  x คือค่าองศา ตั้งแต่ 0-100  turn left input x is in the range 0-100
//  head_turnright(150);   //ส่ายหัว ไปทางขวา  x คือค่าองศา ตั้งแต่ 100-180  turn Right input x is in the range 100-180
//  lift_twohand();       //ยกมือขึ้น 2 มือ  aise both hands
//  lift_righthand();     //ยกมือ ขาว ขึ้น  aise Right hand
//  lift_lefthand();      //ยกมือ ซ้าย ขึ้น  aise left hand
//  begin_twohand();      //มือสอง มืออยู่ในท่าปกติ origin hand
//  begin_righthand();    // มือ ซ้าย อยู่ในท่าปกติ origin Right hand
//  begin_lefthand();     // มือ ขวา อยู่ในท่าปกติ origin left hand

//*************************************************************************************************************
      case Hello:    //command 0 
        colorWipe(strip.Color(205,96,144), 50);  //RGB Color pink edit colorWipe(strip.Color(R, G, B), 50);
        head_shake(80,90); //สายหัว
        lift_twohand(); //ยกสองมือ 
        lcd_print(1,"Hello...",1," How are you?"); //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
        head_turnright(150);
        break;
        
      case show_: //command 1
        colorWipe(strip.Color(224, 0, 224), 50); //RGB Color purple edit colorWipe(strip.Color(R, G, B), 50);
        begin_twohand(); //มือลงในท่าปกติ 
        lcd_print(1,"command show ",0,"RGB Color purple");  //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
        break;
        
      case command2: 
      
        break;
        
      case command3:
      
        break;
        
      case command4:
      
        break;
        
      case command5:
      
        break;
        
      case command6 :
      
        break;
        
      default:
          lcd.clear();
          lcd.setCursor(2, 0); 
          lcd.print("Record function undefined"); 
        break;
    }
    printVR(buf);
  }

}
