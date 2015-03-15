
int redPin = 9; int greenPin = 10; int bluePin = 11;
//uncomment this line if using a Common Anode LED //#define COMMON_ANODE
void setup() {
  //white, blue (anode), green, orange
 //red, anode, green, blue
pinMode(redPin, OUTPUT); pinMode(greenPin, OUTPUT); pinMode(bluePin, OUTPUT);
}
void loop() {
//setColor(255, 0, 0); //r
//setColor(0, 255, 0); //g
//setColor(0, 0, 255); //b
setColor(255, 0, 255); //rb
//setColor(0, 0, 0); //b
//setColor(255, 255, 255); //fail
//setColor(0, 0, 255); //b
//setColor(0, 255, 0); //b
//setColor(255, 0, 0); //r
//setColor(255, 255, 0); //b
//setColor(225, 0, 255); //b
//setColor(0, 255, 255); //fail
//setColor(255, 255, 0); //r
//setColor(255, 0, 0); //r
//setColor(0, 255, 0); //r
}

void setColor(int red, int green, int blue) {
analogWrite(redPin, red); analogWrite(greenPin, green); analogWrite(bluePin, blue);
}
