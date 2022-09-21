#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);

  digitalWrite(PIN_LED, 0);
  Serial.println("on");
  delay(1000);
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 1);
    Serial.println("off");
    delay(100);
    digitalWrite(PIN_LED, 0);
    Serial.println("on");
    delay(100);
  }
  digitalWrite(PIN_LED, 1);
  Serial.println("off");
}
void loop() {
  // put your main code here, to run repeatedly:
}