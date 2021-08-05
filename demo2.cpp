#include <wiringPi.h>
#include <stdio.h>

int main(void)
{
	const int led = 1;

	wiringPiSetup();
	pinMode(led, OUTPUT);

	fprintf(stderr, "Running\n");

	while(1){
		digitalWrite(led, HIGH);
		delay(50);
		digitalWrite(led, LOW);
		delay(50);
	}

	return 0;
}
