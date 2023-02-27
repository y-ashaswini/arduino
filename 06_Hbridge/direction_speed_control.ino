// Motor A connections
int enA = 5; // -- enable
int in1 = 2;
int in2 = 3;

// Motor B connections
int enB = 10; // -- enable
int in3 = 7;
int in4 = 8;
// tip: the ports of L293D directly opposite must both be
// enable1 / enable2 of each motor resp.
// this is to ensure that they rotate in the same direction
// together

void setup() {
	// Set all the motor control pins to outputs
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT); // motor 1
	pinMode(in2, OUTPUT); // motor 1
	pinMode(in3, OUTPUT); // motor 2
	pinMode(in4, OUTPUT); // motor 2
	
	// Turn off the motors - Initial state
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}

void loop() {
	directionControl();
	delay(1000);
	speedControl();
	delay(1000);
}

// This function lets you control spinning direction of motors
void directionControl() {
	// Set motors to maximum speed
	// For PWM, the possible values range from 0 to 255
	analogWrite(enA, 255);
	analogWrite(enB, 255);

	// Turn on motor A & B -- 1010
	digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
	delay(2000);
	
	// Now CHANGE motor DIRECTIONS -- 0101
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	delay(2000);
	
	// Turn off motors -- 0000
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}

// This function lets you control speed of the motors
void speedControl() {
	// Turn on motors in REVERSE DIRECTION -- 0101
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	
	// Accelerate from zero to maximum speed
  	// Earlier, during ON, you'd simply given +255 power to each motor.
  	// Now, you have the choice to vary that from 0 to 256 (exclusive)
	for (int i = 0; i < 256; i++) {
		analogWrite(enA, i);
		analogWrite(enB, i);
		delay(20);
	}
	
	// Decelerate from maximum speed to zero
	for (int i = 255; i >= 0; --i) {
		analogWrite(enA, i);
		analogWrite(enB, i);
		delay(20);
	}
	
	// Now turn off motors -- 0000
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}




// link - https://www.tinkercad.com/things/3w99qPf62iY?sharecode=Vzno-CUyJ3bjtF7SNw80kDdFl2crwZiVRyvuzK7qjhY
