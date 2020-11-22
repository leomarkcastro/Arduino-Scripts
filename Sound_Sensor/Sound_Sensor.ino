int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if(detect()){
    count += 1;
    count %= 3;

    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);

    switch (count){
      case 0:
        digitalWrite(11, HIGH);
        break;
      case 1:
        digitalWrite(12, HIGH);
        break;
      case 2:
        digitalWrite(13, HIGH);
        break;
    }
  }

  delay(100);

  
  
}

bool detect(){

  int analRead = analogRead(A0);

  if (analRead > 25){

    return true;
  }

  return false;
  
}
