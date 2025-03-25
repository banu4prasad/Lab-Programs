const int ldrPin = A0;

void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
}

void loop() {
    int ldr = analogRead(ldrPin);

    if (ldr <= 1017) {
        Serial.print("It's Night Time: ");
        Serial.println(ldr);
    } else {
        Serial.print("It's Daytime: ");
        Serial.println(ldr);
    }

    delay(500); // Small delay to prevent excessive printing
}
