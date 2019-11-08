

const int photoPin = 3;
const int ledPin = 9;
int Number = 0;


void setup() {
pinMode(ledPin, 9);
pinMode(photoPin, INPUT_PULLUP);

}
void loop() {
attachInterrupt(digitalPinToInterrupt(1), ++Number, LOW);
Serial.println(Number);
	
}


