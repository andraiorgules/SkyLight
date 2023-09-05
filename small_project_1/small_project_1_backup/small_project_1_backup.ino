//int LSR_Pin = A0;
//int sensorValue = 0;

int LSR_Pin = A0;
int sensorValue = 0;

float redPin = 11;
float greenPin = 10;
float bluePin = 9;

int duration = 0;



void setup() {
  
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
 Serial.begin(9600);

}

void loop() {
 sensorValue = analogRead(LSR_Pin);
 Serial.println(sensorValue);
 



  //RGB_color(255, 0, 0); // Red
  //delay(1000);
  //RGB_color(0, 255, 0); // Green // not needed
  //delay(1000);
  //RGB_color(0, 0, 255); // Blue // dark blue
  //delay(1000);
  //RGB_color(255, 255, 125); // Raspberry 
  //delay(1000);
  //RGB_color(0, 255, 255); // Cyan
  //delay(1000);
  //RGB_color(255, 0, 255); // Magenta 
  //delay(1000);
  //RGB_color(255, 255, 0); // Yellow
  //delay(1000);
  //RGB_color(255, 255, 255); // White
  //delay(1000);
  // RGB_color(255, 50, 0) // Orange
  // RGB_color(0, 255, 155) // Pink
  // RGB_color (80, 0, 80) // Purple


 //setColor(255, 50, 0);
setColor(0, 0, 255); // "dark blue"
 delay(1000);
 setColor(0, 0, 155); // "blue"
  delay(1000);
setColor(255, 50, 10); // light peachy pink
delay(1000);
setColor(170, 70, 120); // light peachy purple
delay(1000);
 setColor(0, 127, 255); // Dim Cyan // "light blue"
 delay(1000);
setColor(0, 255, 255); // Cyan // "light blue"
  delay(1000);
 setColor(0, 250, 100); //transition blue
 delay(1000);
 setColor(100, 250, 20); //transition yellow
  delay(1000);
setColor(255, 200, 0); // True Yellow
 delay(1000);
 setColor(255, 50, 0); // Orange
 delay(1000);
 setColor(255, 50, 10); // light peachy pink
  delay(1000);
//better transition
 setColor(130, 0, 20); //pink
  delay(1000);
  //setColor(255, 0, 0); //red
  //delay(1000);
setColor(80, 0, 80); // "light purple" 
delay(1000);
  setColor(255, 0, 255); // "dark purple"
  delay(1000);
  //setColor(0, 0, 255); // "dark blue"
  //delay(5000);
  //setColor(170, 70, 120); // light peachy pink
}
  

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
