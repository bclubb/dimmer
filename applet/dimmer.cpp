// Fade the LED like it is snoring

#define LED 9
#include "WProgram.h"
void setup();
void loop();
int i = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for(i = 0; i < 255; i++)
  {
    analogWrite(LED, i);
    delay(10);
  }
  
  for(i = 255; i > 0; i--)
  {
    analogWrite(LED, i);
    delay(10);
  }
}
int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

