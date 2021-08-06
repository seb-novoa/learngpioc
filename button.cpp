/*
 * scrip que reacciona al presionar un switch conectado al pin fisico 31, wp 22
 * 
 */

#include <stdio.h>
#include <wiringPi.h>

int main(void)
{
	const int button = 22;

	wiringPiSetup();
	pinMode(button, INPUT);

	while(1)
	{
		if(digitalRead(button) == LOW) { fprintf(stderr, "Switch is pressed\n"); }
		else { fprintf(stderr, "Switch is released\n"); }
		delay(1000);
	}

	return 0;

}
