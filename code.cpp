const int pins[] = {5, 6, 7, 8, 9, 10, 11, 12};
const int notes[] = {440, 494, 523, 587, 659, 698, 784, 880}; // You can change tones if desired.
void setup() {
 for (int i = 0; i < 8; i++) {
  pinMode(pins[i], OUTPUT);
 }
}
void loop() {
 for (int i = 0; i < 8; i++) {
  playNote(pins[i], notes[i]);
 }
}
void playNote(int pin, int frequency) {
 tone(pin, frequency);
 delay(0); 
 noTone(pin);
}