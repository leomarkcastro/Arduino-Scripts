#define clk 2
#define ltc 3
#define dat 4

#define a1 6
#define a2 7
#define a3 8
#define a4 9

void clockit(String i, int del = 0){
  for (char da: i){
    digitalWrite(clk,1);

    switch(da){
      case '1':
        digitalWrite(dat, 1);
        break;
      default:
        digitalWrite(dat,0);
        break;
    }
    
    digitalWrite(clk,0);
    
    digitalWrite(ltc,1);
    digitalWrite(ltc,0);
    delay(del);
  }
}

void select_place(int digit){
  digitalWrite(a1, 0);
  digitalWrite(a2, 0);
  digitalWrite(a3, 0);
  digitalWrite(a4, 0);

  switch (digit){
    case 1:
      digitalWrite(a1, 1);
      break;
    case 2:
      digitalWrite(a2, 1);
      break;
    case 3:
      digitalWrite(a3, 1);
      break;
    case 4:
      digitalWrite(a4, 1);
      break;
    
  }
  
}

void rawnum_clock(int inp, int place = 4, bool pt = false){

  select_place(place);
  
  String dec;
  String num;
  String to_disp;
  
  switch (inp){
    case 0:
      dec = (pt ? "0" : "1");
      num = "10000000";
      to_disp = dec + num;
      break;
    case 1:
      dec = (pt ? "0" : "1");
      num = "11110010";
      to_disp = dec + num;
      break;
    case 2:
      dec = (pt ? "0" : "1");
      num = "01001000";
      to_disp = dec + num;
      break;
    case 3:
      dec = (pt ? "0" : "1");
      num = "01100000";
      to_disp = dec + num;
      break;
    case 4:
      dec = (pt ? "0" : "1");
      num = "00110010";
      to_disp = dec + num;
      break;
    case 5:
      dec = (pt ? "0" : "1");
      num = "00100100";
      to_disp = dec + num;
      break;
    case 6:
      dec = (pt ? "0" : "1");
      num = "00000100";
      to_disp = dec + num;
      break;
    case 7:
      dec = (pt ? "0" : "1");
      num = "11110000";
      to_disp = dec + num;
      break;
    case 8:
      dec = (pt ? "0" : "1");
      num = "00000000";
      to_disp = dec + num;
      break;
    case 9:
      dec = (pt ? "0" : "1");
      num = "100100000";
      to_disp = dec + num;
      break;    
  }

  clockit(to_disp);
}

/*

    8
   ---
3 |   | 7
  | 2 |
   ---
4 |   | 6
  |   |
   ---  . 1  
    5

*/

void setup(){
  pinMode(clk, OUTPUT);
  pinMode(ltc, OUTPUT);
  pinMode(dat, OUTPUT);
  Serial.begin(9600);

  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(a4, OUTPUT);

  //1, 

  

}

void loop(){
  select_place(1);
  clockit("00000011");
  delay(500);
  select_place(2);
  clockit("00011011");
  delay(500);

}
