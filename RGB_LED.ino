
int redPin = 11; int greenPin = 10; int bluePin = 9;
//uncomment this line if using a Common Anode LED //#define COMMON_ANODE
void setup() {
pinMode(redPin, OUTPUT); pinMode(greenPin, OUTPUT); pinMode(bluePin, OUTPUT);
}
void loop() {
//setColor(0, 0, 0); //b
//setColor(255, 0, 0); //gb
//setColor(0, 255, 0); //rb
//setColor(255, 255, 0); //rgb
//setColor(0, 0, 255); //fail
//setColor(0, 255, 255); //fail
//setColor(255, 0, 255); //fail
//setColor(255, 255, 255); //fail
}

void setColor(int red, int green, int blue) {
analogWrite(redPin, red); analogWrite(greenPin, green); analogWrite(bluePin, blue);
}
