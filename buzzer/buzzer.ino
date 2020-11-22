#define piezo 9
#define duration 100

void setup() {
  pinMode(piezo, OUTPUT);
}

void loop() {
  tone(piezo, 440, duration);
  tone(piezo, 460, duration);
  tone(piezo, 659.26, duration);
  tone(piezo, 698.46, duration);
  tone(piezo, 783.99, duration);
  tone(piezo, 880, duration);
  tone(piezo, 987.77, duration);
  tone(piezo, 1046.50, duration);
}
