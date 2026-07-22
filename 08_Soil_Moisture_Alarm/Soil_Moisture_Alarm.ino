// Soil Moisture Alarm using Arduino

const int MOISTURE_SENSOR_PIN = A0;
const int GREEN_LED = 8;
const int RED_LED = 9;
const int BUZZER_PIN = 10;

const int DRY_THRESHOLD = 400;

void setup() {
  Serial.begin(9600);

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // Read soil moisture value
  int soilMoisture = analogRead(MOISTURE_SENSOR_PIN);

  // Display sensor value on Serial Monitor
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoisture);

  // Dry soil detected
  if (soilMoisture < DRY_THRESHOLD) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    tone(BUZZER_PIN, 1000);
  }
  // Moisture level is adequate
  else {
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, LOW);
    noTone(BUZZER_PIN);
  }

  delay(250);
}