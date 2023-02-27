int user = 0;
int led_port = 8;
// programme to control your LED BULB through keystrokes
// WRITES "HELLO" IN MORSE CODE, when you type that on your keyboard

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_port, OUTPUT);
}

// void blink_once() {
//   digitalWrite(led_port, HIGH);
//   delay(500);
//   digitalWrite(led_port, LOW);
//   delay(500);
// }
// void blink_twice() {
//   digitalWrite(led_port, HIGH);
//   delay(250);
//   digitalWrite(led_port, LOW);
//   delay(250);
//   digitalWrite(led_port, HIGH);
//   delay(250);
//   digitalWrite(led_port, LOW);
//   delay(500);
// }

void h() {
  digitalWrite(led_port, HIGH);
  delay(150);
  digitalWrite(led_port, LOW);
  delay(150);
  digitalWrite(led_port, HIGH);
  delay(150);
  digitalWrite(led_port, LOW);
  delay(150);
  digitalWrite(led_port, HIGH);
  delay(150);
  digitalWrite(led_port, LOW);
  delay(150);
  digitalWrite(led_port, HIGH);
  delay(150);
  digitalWrite(led_port, LOW);    
  delay(800);  
}

void e() {
  digitalWrite(led_port, HIGH);
  delay(150);
  digitalWrite(led_port, LOW);    
  delay(800);    
}

void l() {
  digitalWrite(led_port, HIGH);
  delay(150);
  digitalWrite(led_port, LOW);    
  delay(150);
  digitalWrite(led_port, HIGH);
  delay(350);
  digitalWrite(led_port, LOW);
  delay(150);
  digitalWrite(led_port, HIGH);    
  delay(150);  
  digitalWrite(led_port, LOW); 
  delay(150);
  digitalWrite(led_port, HIGH);   
  delay(150);  
  digitalWrite(led_port, LOW);  
  delay(800);    
}

void o() {
  digitalWrite(led_port, HIGH);
  delay(350);
  digitalWrite(led_port, LOW);
  delay(150);
  digitalWrite(led_port, HIGH);
  delay(350);
  digitalWrite(led_port, LOW);
  delay(150);
  digitalWrite(led_port, HIGH);
  delay(350);
  digitalWrite(led_port, LOW);
  delay(800);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    user = Serial.read();
    Serial.println(user);    
    if(user == 'H' || user == 'h') {
      h();
    } else if(user == 'E' || user == 'e') {
      e();
    } else if(user == 'L' || user == 'l') {
      l();
    } else if(user == 'o' || user == 'O') {
      o();
    }

  } 
}
