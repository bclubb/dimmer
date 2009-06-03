// Fade the LED like it is snoring

#define LED 9

#include "WProgram.h"
void setup();
void loop();
int val = 0;
int old_val = 0;
int state = 0;

int brightness = 128;
unsigned long startTime = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  val = analogRead(0);
  analogWrite(LED, val/4);
}
int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

