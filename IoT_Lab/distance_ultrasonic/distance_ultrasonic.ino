#define echoPin 2          // Attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3          // Attach pin D3 Arduino to pin Trig of HC-SR04
#define ledPin 13          // Pin for the LED (usually built-in LED on pin 13)

long duration;            // Variable to store the time taken for the pulse to reach the receiver
int distance;             // Variable to store the distance calculated using the formula

void setup() {
    pinMode(trigPin, OUTPUT);    // Sets the trigPin as an OUTPUT
    pinMode(echoPin, INPUT);     // Sets the echoPin as an INPUT
    pinMode(ledPin, OUTPUT);     // Sets the ledPin as an OUTPUT

    Serial.begin(9600);         // Start Serial communication at 9600 baud rate
    Serial.println("Distance measurement using Arduino Uno.");
    delay(500);                 // Initial delay
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);        // Wait for 2 ms to avoid collision in the serial monitor

    digitalWrite(trigPin, HIGH);  // Turn on the Trigger to generate pulse
    delayMicroseconds(10);        // Keep the trigger "ON" for 10 ms to generate pulse
    digitalWrite(trigPin, LOW);   // Turn off the pulse trigger to stop pulse generation

    // Measure the duration of the pulse
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.0344 / 2;  // Calculate the distance using the time

    Serial.print("Distance: ");
    Serial.print(distance);  // Print the distance in the serial monitor
    Serial.println(" cm");

    // If distance is less than a threshold (e.g., 10 cm), turn on the LED
    if (distance < 5) {
        digitalWrite(ledPin, HIGH);  // Turn on the LED
    } else {
        digitalWrite(ledPin, LOW);   // Turn off the LED
    }

    delay(100);  // Small delay before the next measurement
}
