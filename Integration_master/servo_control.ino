void begin_head(){                  //หันหน้าตรง
   servo_head.write(100); 
}
void head_shake(int x,int y){        //สายหัว
   servo_head.write(x);
   delay(200);
   servo_head.write(100); 
   delay(200);
   servo_head.write(y); 
   delay(200);
}

void lift_twohand(){                  //ยกมือขึ้น 2 มือ 
   servo_armleft.write(0); //arm right
   servo_armRight.write(180);
   
}
void lift_righthand(){                //ยกมือ ซ้าย ขึ้น
   servo_armRight.write(180);
}
void lift_lefthand(){                  //ยกมือ ขวา ขึ้น
   servo_armleft.write(0); //arm right
}
void begin_twohand(){                  //มือสอง มืออยู่ในท่าปกติ
   servo_armleft.write(180); //arm right
   servo_armRight.write(0);
}
void begin_righthand(){                 // มือ ซ้าย อยู่ในท่าปกติ
   servo_armRight.write(0);
}
void begin_lefthand(){                   // มือ ขวา อยู่ในท่าปกติ
   servo_armleft.write(180); //arm right
}
