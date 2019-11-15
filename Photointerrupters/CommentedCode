

const int photoPin = 3;
const int ledPin = 9;
int Number = 0;


void setup() {
pinMode(ledPin, 9);
pinMode(photoPin, INPUT_PULLUP);

}
void loop() {
attachInterrupt(digitalPinToInterrupt(1), ++Number, LOW);  
// This line fixes the timing problem and interrupts what 
// the photointerrupter is doing in order to catch the
// interrupt in the beam.
	
Serial.println(Number);
	
}


