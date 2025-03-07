const int led = 9;     // LED pin
const int sensor = 4;  // PIR sensor pin
int state = LOW;       // Initial state of LED
int val = 0;           // Variable to store sensor value

void setup() {
  pinMode(led, OUTPUT);    // Set the LED pin as output
  pinMode(sensor, INPUT);  // Set the sensor pin as input
  Serial.begin(9600);      // Start serial communication at 9600 baud
}

void loop() {
  val = digitalRead(sensor);  // Read the state of the PIR sensor
  if (val == HIGH) {          // If motion is detected
    digitalWrite(led, HIGH);  // Turn on the LED
    delay(500);               // Wait for 500 milliseconds

    if (state == LOW) {  // If the LED was off before
      Serial.println("Motion Detected");
      state = HIGH;  // Update the state
    }
  } else {
    digitalWrite(led, LOW);  // Turn off the LED when no motion is detected
    delay(500);              // Reset the state

    if (state == HIGH) {
      Serial.println("The action/motion has stopped");
      state = LOW;
    }
  }
}
