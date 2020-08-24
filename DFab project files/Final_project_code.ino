
const int buttonPin = 3;

int rVal = 254;
int gVal = 1;
int bVal = 127;

int rDir = -1;
int gDir = 1;
int bDir = -1;

int counter = 0;


const int rPin = 11;
const int gPin = 10;
const int bPin = 9;

void setup() {

  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);

}

void loop() {

  int buttonState;
  buttonState = digitalRead(buttonPin);
  
if (buttonState == LOW) {
    counter++;
    delay(150);
  }
  
   else if (counter == 0) {
analogWrite(rPin, rVal);
  analogWrite(gPin, gVal);
  analogWrite(bPin, bVal);


  rVal = rVal + rDir;
  gVal = gVal + gDir;
  bVal = bVal + bDir;

  if (rVal >= 255 || rVal <= 0) {
    rDir = rDir * -1;
  }

  if (gVal >= 255 || gVal <= 0) {
    gDir = gDir * -1;
  }

  if (bVal >= 255 || bVal <= 0) {
    bDir = bDir * -1;
  }

 
  delay(33);

  }
  
  else if (counter == 1) {
    RGB_color(255, 0, 0);
  }
  
  else if (counter == 2) {
    RGB_color(0, 255, 0);
  }
    else if (counter == 3) {
   RGB_color(0, 0, 255);
  }
  else if (counter == 4) {
   RGB_color(255, 255, 125);
  }
   else if (counter == 5) {
   RGB_color(0, 255, 255);
  }
else if (counter == 6) {
    RGB_color(255, 255, 0); 
  }
  else if (counter == 7) {
    RGB_color(255, 0, 255); 
  }
   else if (counter == 8) {
    RGB_color(255,255, 255); 
  }
  else if (counter >=9) {
    counter = 0;
  }
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(rPin, red_light_value);
  analogWrite(gPin, green_light_value);
  analogWrite(bPin, blue_light_value);
}
