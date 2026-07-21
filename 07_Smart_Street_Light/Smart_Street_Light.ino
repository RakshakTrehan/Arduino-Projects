// Smart Street Light using Arduino and LDR

const int LDR_PIN = A0;      // LDR connected to Analog Pin A0
const int LIGHT_PIN = 9;     // Transistor control pin / Street Light

int ldrValue = 0;
const int THRESHOLD = 500;   // Adjust according to ambient light

void setup() {
  pinMode(LIGHT_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read ambient light level
  ldrValue = analogRead(LDR_PIN);

  // Display sensor value
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // Turn street light ON at night
  if (ldrValue < THRESHOLD) {
    digitalWrite(LIGHT_PIN, HIGH);
  }
  // Turn street light OFF during daytime
  else {
    digitalWrite(LIGHT_PIN, LOW);
  }

  delay(100);
}