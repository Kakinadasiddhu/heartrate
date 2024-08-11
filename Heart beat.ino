#define PULSE_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int pulseValue = analogRead(PULSE_PIN);
  float heartRate = pulseValue; // Simplified for demonstration
  Serial.print("Heart Rate: ");
  Serial.println(heartRate);
  delay(1000);
}