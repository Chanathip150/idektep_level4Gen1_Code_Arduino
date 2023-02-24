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
      
      case Hello:    //command 0 
        colorWipe(strip.Color(255, 0, 255), 50);  //RGB Color pink edit colorWipe(strip.Color(R, G, B), 50);
        head_shake(80,90); //สายหัว
        lift_twohand(); //ยกสองมือ 
        lcd_print(1,"Hello...",1," How are you?"); //print ข้อความ ลง LCD Lcd_print(ตำแหน่งแถว 0 , ข้อความ แถว0 , ตำแหน่งแถว 1 , ข้อความ แถว 1) 
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
