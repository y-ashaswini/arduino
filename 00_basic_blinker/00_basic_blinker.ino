//// BLINKER

// void setup() {
//   // put your setup code here, to run once:
//   pinMode(7, OUTPUT);
//   pinMode(10, OUTPUT);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   digitalWrite(7, HIGH);
//   digitalWrite(10, LOW);w

//   delay(1000);      
//   digitalWrite(7, LOW);
//   digitalWrite(10, HIGH);  
//   delay(1000);      
// }

// ----------------------------------------------------------------------------------------------------------------------------------
//// TRIED FADING, I GUESS OUR CURRENT LEDS DON'T FADE LOL

// int baud_rate = 9600;
// int led_pin = 7;
// int brightness = 0;
// int fade_amount = 5;
// void setup() {
//   Serial.begin(baud_rate);
//   pinMode(led_pin, INPUT);  
// }

// void loop() {
//   for(brightness=50; brightness < 255; brightness += fade_amount) {
//     Serial.println(brightness);
//     analogWrite(led_pin, brightness);
//     delay(100);
//   }
//   for(brightness=255; brightness>= 0; brightness -= fade_amount) {
//     Serial.println(brightness);
//     analogWrite(led_pin, brightness);
//     delay(100);
//   }
// }

// ----------------------------------------------------------------------------------------------------------------------------------
//// SWITCHES BETWEEN TWO LEDs

// int baud_rate = 9600;
// int led_pin_blue = 7;
// int led_pin_yellow = 2;
// void setup() {
//   Serial.begin(baud_rate);
//   pinMode(led_pin_blue, INPUT);  
//   pinMode(led_pin_yellow, INPUT);  
// }

// void loop() {
//   digitalWrite(led_pin_blue, HIGH);
//   digitalWrite(led_pin_yellow, LOW);
//   Serial.println("switch");
//   delay(500);
//   digitalWrite(led_pin_blue, LOW);
//   digitalWrite(led_pin_yellow, HIGH);
//   Serial.println("switch");
//   delay(500);  
// }

// ----------------------------------------------------------------------------------------------------------------------------------
//// SOMETHING


