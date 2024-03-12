// GPIO 
const int redPin = 2;    // R
const int greenPin = 3;  // G
const int bluePin = 4;   // B

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // R
  setColor(255, 0, 0);
  delay(1000);

  // G
  setColor(0, 255, 0);
  delay(1000);

  // B
  setColor(0, 0, 255);
  delay(1000);
}

void setColor(int red, int green, int blue) {
  digitalWrite(redPin, red ? HIGH : LOW);
  digitalWrite(greenPin, green ? HIGH : LOW);
  digitalWrite(bluePin, blue ? HIGH : LOW);
}