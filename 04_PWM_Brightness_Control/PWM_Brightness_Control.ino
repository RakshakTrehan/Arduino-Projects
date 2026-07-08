//RAKSHAK TREHAN
// PWM LED Brightness Control using Potentiometer

const int potPin = A0;      // Potentiometer connected to A0
const int ledPin = 11;      // PWM pin

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // Read potentiometer value (0 - 1023)
  int potValue = analogRead(potPin);

  // Convert it to PWM value (0 - 255)
  int pwmValue = map(potValue, 0, 1023, 0, 255);

  // Set LED brightness
  analogWrite(ledPin, pwmValue);

  // Print values to Serial Monitor
  Serial.print("Potentiometer: ");
  Serial.print(potValue);

  Serial.print("    PWM: ");
  Serial.println(pwmValue);

  delay(10);
}