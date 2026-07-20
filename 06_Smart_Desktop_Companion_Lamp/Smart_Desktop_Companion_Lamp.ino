const int LDR_PIN = A0;
const int LAMP_LED = 9;

const int DARKNESS_LIMIT = 500;

void setup() {
  Serial.begin(9600);
  pinMode(LAMP_LED, OUTPUT);
}

void loop() {
  int ambientLight = analogRead(LDR_PIN);

  Serial.println(ambientLight);

  if (ambientLight < DARKNESS_LIMIT) {
    digitalWrite(LAMP_LED, HIGH);
  } else {
    digitalWrite(LAMP_LED, LOW);
  }

  delay(100);
}