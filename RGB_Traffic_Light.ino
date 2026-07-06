// RGB LED Traffic Light

const int redPin = 9;

const int greenPin = 7;

const int bluePin = 8;



void setup() {

  pinMode(redPin, OUTPUT);

  pinMode(greenPin, OUTPUT);

  pinMode(bluePin, OUTPUT);

}



void loop() {



  // RED - Stop

  digitalWrite(redPin, HIGH);

  digitalWrite(greenPin, LOW);

  digitalWrite(bluePin, LOW);

  delay(5000);



  // RED + GREEN = Yellow - Get Ready

  digitalWrite(redPin, HIGH);

  digitalWrite(greenPin, HIGH);

  digitalWrite(bluePin, LOW);

  delay(2000);



  // GREEN - Go

  digitalWrite(redPin, LOW);

  digitalWrite(greenPin, HIGH);

  digitalWrite(bluePin, LOW);

  delay(5000);

}