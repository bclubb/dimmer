// Fade the LED like it is snoring

#define RED 9
#define BLUE 10
#define GREEN 11

int red = 0;
int blue = 100;
int green = 200;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  delay(10);

  analogWrite(RED, red++ % 255);
  analogWrite(BLUE, blue++ % 255);
  analogWrite(GREEN, green++ % 255);
}
