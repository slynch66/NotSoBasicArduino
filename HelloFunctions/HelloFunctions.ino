

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 5;
long duration;
int distance;
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
	
	if (cm < 15)
	{
	digitalWrite(ledPin,HIGH);
	}
	else if (cm > 15)
		{
		digitalWrite(ledPin,LOW);
		}
}





int getDistance()
{
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);
	duration = pulseIn(echoPin, HIGH);
	distance = duration * 0.034/2;
	return distance;
}
