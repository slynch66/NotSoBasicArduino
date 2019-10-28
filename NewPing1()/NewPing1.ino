#include <NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200

NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

int ButtonState = 0;
int ServoPin = 9; 

void setup() {
 Serial.begin(9600);
 pinMode(12,INPUT);
 pinMode(11,OUTPUT);
 pinMode(ServoPin,OUTPUT);
 pinMode(5,INPUT);
}

void loop() {
     if(ButtonState == 1){
     val = analogRead(potPin);
     Serial.println(myHCSR04.ping_cm());
     }
     delay(150); 
     digitalWrite(9,180);
}