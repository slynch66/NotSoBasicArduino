//Hello Functions
//Sean Lynch
// This will take a distance manually, and control an LED based on distance.
// This code uses functions (for the first time) to do these actions.

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 5;
long duration;
int distance;  //this is the variable to store a distance in cm
int cm = 0;

void setup()     
{
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
}

void loop()
{
	cm = getDistance();
	
	if (cm < 15)     //if the distance is less than 15cm, light up the LED
	{
	digitalWrite(ledPin,HIGH);
	}
	else if (cm > 15)     //if the distance is more than 15cm, turn off the LED
		{
		digitalWrite(ledPin,LOW);
		}
}

int getDistance()   //new function I made to compact the code up top, put this
                    //command in up top and it does what the code down here says
{
	digitalWrite(trigPin, LOW);        //Echolocation
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distance = duration * 0.034/2;
	return distance;   //Returning the new number for distance
}
