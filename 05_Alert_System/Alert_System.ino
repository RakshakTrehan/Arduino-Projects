/*
 * Project : Alert System using Arduino Uno
 * Author  : Rakshak Trehan
 * Board   : Arduino Uno
 *
 * Description:
 * This project demonstrates a simple alert system where an LED and
 * a piezo buzzer blink together at a fixed interval.
 */

// Pin Definitions
const int BUZZER_PIN = 9;
const int LED_PIN = 13;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {

  // Activate alert
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, HIGH);
  delay(500);

  // Deactivate alert
  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);
  delay(500);
}