int trigger_pin = 7;
int echo_pin = 8;
int duration;
int distance;
int led_pin = 6; // using conversion
int dist_to_brightness;

void setup()
{
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}

void loop()
{
    pinMode(trigger_pin, OUTPUT);
    digitalWrite(trigger_pin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigger_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger_pin, LOW);
    pinMode(echo_pin, INPUT);

  	duration = pulseIn(echo_pin, HIGH);
  	distance = microsecondsToCentimeters(duration);
  	Serial.print("distance: ");
  	Serial.println(distance);

  	dist_to_brightness = constrain(distance, 0, 255);
  	analogWrite(led_pin, dist_to_brightness);
 	
}

