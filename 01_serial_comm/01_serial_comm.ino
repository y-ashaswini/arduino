int baud_rate = 9600;
int led_pin_blue = 7;
int led_pin_yellow = 2;
void setup() {
  Serial.begin(baud_rate);
  pinMode(led_pin_blue, INPUT);  
  pinMode(led_pin_yellow, INPUT);  
}

void loop() {
  digitalWrite(led_pin_blue, HIGH);
  digitalWrite(led_pin_yellow, LOW);
  Serial.println("switch");
  delay(500);
  digitalWrite(led_pin_blue, LOW);
  digitalWrite(led_pin_yellow, HIGH);
  Serial.println("switch");
  delay(500);  
}
