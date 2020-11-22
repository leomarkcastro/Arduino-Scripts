#define clk 2
#define ltc 3
#define dat 4

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

#define dlya 500

void setup(){
  pinMode(clk, OUTPUT);
  pinMode(ltc, OUTPUT);
  pinMode(dat, OUTPUT);
  Serial.begin(9600);

  for(int i=0; i <3; i++){
    clockit("000000010");
    delay(dlya);
    clockit("000000000");
    delay(dlya);
  }
  
}

#define dlyb 100

void show_a(){
  clockit("000100000");
  delay(dlyb);
  clockit("100000000");
  delay(dlyb);
  clockit("010000000");
  delay(dlyb);
  clockit("001000000");
  delay(dlyb);
  clockit("000100000");
  delay(dlyb);
  clockit("000000100");
  delay(dlyb);
  clockit("000001000");
  delay(dlyb);
  clockit("000010000");
  delay(dlyb);
}

void show_b(){
  clockit("100010000");
  delay(dlyb);
  clockit("010001000");
  delay(dlyb);
  clockit("001000100");
  delay(dlyb);
  clockit("000100000");
  delay(dlyb);
}

void show_c(){
  clockit("100000000");
  delay(dlyb);
  clockit("010000000");
  delay(dlyb);
  clockit("001000000");
  delay(dlyb);
  clockit("000010000");
  delay(dlyb);
  clockit("000001000");
  delay(dlyb);
  clockit("000000100");
  delay(dlyb);
}

void show_d(){
  clockit("010000000");
  delay(dlyb);
  clockit("010000000");
  delay(dlyb);
  clockit("010000000");
  delay(dlyb);
  clockit("000100000");
  delay(dlyb);
  clockit("000100000");
  delay(dlyb);
  clockit("000001000");
  delay(dlyb);
  clockit("000001000");
  delay(dlyb);
  clockit("000001000");
  delay(dlyb);
  clockit("000100000");
  delay(dlyb);
  clockit("000100000");
  delay(dlyb);
}

void loop(){
  for(int i=0; i < 15; i++){
    show_a();
  }
  for(int i=0; i < 30; i++){
    show_b();
  }
  for(int i=0; i < 15; i++){
    show_c();
  }
  for(int i=0; i < 10; i++){
    show_d();
  }
}
