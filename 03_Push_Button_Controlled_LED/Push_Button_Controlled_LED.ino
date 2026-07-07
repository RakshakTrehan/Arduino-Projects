int btnPin = 2;    // button
int ledPin = 3;   // LED
int btnState = 0;  // stores reading

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(btnPin, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop() {
    btnState = digitalRead(btnPin);

    if (btnState == LOW) {   // pressed!
        digitalWrite(ledPin, HIGH);
        Serial.println("Button Pressed!");
    }
    else {
        digitalWrite(ledPin, LOW);
    }
}