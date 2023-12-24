// Project by @carbon_gtv, support on instagram , donators are also welcome!

const int valveOpenPin = 2; // Pin for the opening valve
const int valveClosePin = 3; // Pin for the closing valve
const int buttonOpen = 4; // Pin for the open button
const int buttonClose = 5; // Pin for the close button
const int ledPin = 6; // Pin for the LED

void setup() {
  pinMode(valveOpenPin, OUTPUT);
  pinMode(valveClosePin, OUTPUT);
  pinMode(buttonOpen, INPUT_PULLUP);
  pinMode(buttonClose, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  // Initialize valves and LED in the off state
  digitalWrite(valveOpenPin, LOW);
  digitalWrite(valveClosePin, LOW);
  digitalWrite(ledPin, LOW);
}

void loop() {
  if (digitalRead(buttonOpen) == LOW) {
    // Open DRS
    digitalWrite(valveOpenPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(100); // Short pulse
    digitalWrite(valveOpenPin, LOW);
  }
  if (digitalRead(buttonClose) == LOW) {
    // Close DRS
    digitalWrite(valveClosePin, HIGH);
    digitalWrite(ledPin, LOW);
    delay(100); // Short pulse
    digitalWrite(valveClosePin, LOW);
  }
}
