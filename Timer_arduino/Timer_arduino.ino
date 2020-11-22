#define a1 2
#define a2 3
#define a3 4
#define a4 5
#define b1 6
#define b2 7
#define b3 8
#define b4 9

void setup() {
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
  pinMode(a4, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(b4, OUTPUT);
}

void loop() {
  static int ctr = 0;

  digitalWrite(a1, LOW);
  digitalWrite(a2, LOW);
  digitalWrite(a3, LOW);
  digitalWrite(a4, LOW);
  digitalWrite(b1, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(b3, LOW);
  digitalWrite(b4, LOW);

  switch(ctr){
    case 0:
      digitalWrite(a4, HIGH);
      digitalWrite(b3, HIGH);
      break;
    case 1:
      digitalWrite(a3, HIGH);
      digitalWrite(a4, HIGH);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(b2, HIGH);
      break;
    case 2:
      digitalWrite(a3, HIGH);
      digitalWrite(a4, HIGH);
      digitalWrite(a1, HIGH);
      digitalWrite(b3, HIGH);
      digitalWrite(b2, HIGH);
      break;
    case 3:
      digitalWrite(a2, HIGH);
      digitalWrite(a1, HIGH);
      digitalWrite(a4, HIGH);
      digitalWrite(b3, HIGH);
      break;
    case 4:
      digitalWrite(a3, HIGH);
      digitalWrite(a2, HIGH);
      digitalWrite(a1, HIGH);
      digitalWrite(b3, HIGH);
      digitalWrite(b2, HIGH);
      break;
    case 5:
      digitalWrite(a3, HIGH);
      digitalWrite(a2, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(b2, HIGH);
      digitalWrite(b3, HIGH);
      digitalWrite(a1, HIGH);
      break;
    case 6:
      digitalWrite(a4, HIGH);
      digitalWrite(b3, HIGH);
      digitalWrite(a3, HIGH);
      break;
    case 7:
      digitalWrite(a1, HIGH);
      digitalWrite(a2, HIGH);
      digitalWrite(a3, HIGH);
      digitalWrite(a4, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(b2, HIGH);
      digitalWrite(b3, HIGH);
      break;
    case 8:
      digitalWrite(a1, HIGH);
      digitalWrite(a2, HIGH);
      digitalWrite(a3, HIGH);
      digitalWrite(a4, HIGH);
      digitalWrite(b2, HIGH);
      digitalWrite(b3, HIGH);
      break;
  }

  ctr += 1;
  ctr %= 9;
  

  delay(1000);
}
