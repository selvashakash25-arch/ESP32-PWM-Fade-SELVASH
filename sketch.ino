const int potPin = 34;
const int ledPin = 5;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  int brightness = map(potValue, 0, 4095, 0, 255);

  analogWrite(ledPin, brightness);

  Serial.print("Potentiometer: ");
  Serial.print(potValue);

  Serial.print("  Brightness: ");
  Serial.println(brightness);

  delay(100);
}
