
// LSR lowest value: 0 //LSR highest value: 1023
// write about the wiring setup up. also give a breif overview of the available light at different times and what color it is suppsosed
// edit all time lapse videos together - keep it at 2-3 minutes. 

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
  //RGB_color(0, 255, 0); // Green
  //RGB_color(0, 0, 255); // Blue //'dark blue"
  //RGB_color(255, 255, 125); // Raspberry // ends up looking like white bgecause all 3 have been activated highly
  //RGB_color(0, 255, 255); // Cyan // "light blue"
  //RGB_color(255, 0, 255); // Magenta // ''dark purple'
  //RGB_color(255, 255, 0); // Yellow // slightly green tinted
  // setColor(255, 200, 0); // True Yellow
  //RGB_color(255, 255, 255); // White
  //RGB_color(255, 50, 0) // Orange
  //RGB_color (80, 0, 80) // Purple // slightly dimmer magenta
  //setColor(255, 50, 10); // light peachy pink 
  //setColor(130, 0, 20); //pink


//night, least light // 7:30pm-7am // // LSR = 0-10
 if (sensorValue >= 0 && sensorValue < 10){
    setColor(0, 0, 255); //'dark blue"
 }


//if (sensorValue >= 10 && sensorValue < 15){
 // setColor(0, 0, 155); // "blue"
}


//twilight //7am-8am //LSR =  
 //if (sensorValue >= 25  && sensorValue < 30){
     //setColor(255, 50, 10); // light peachy pink
//}


// early morning - morning // 8am-10am // LSR =
 if (sensorValue >= 100 && sensorValue < 150 ){
   setColor(255, 200, 0); // True Yellow
}

//11am-12pm// LSR 165-220 // averaged around 170 to 200

//morning //10am-12pm// LSR = 
if (sensorValue >= 150 && sensorValue < 180){
  setColor(0, 255, 255); // Cyan // "light blue"
}


//early afternoon - noon, brightest part of the day //12pm-2pm //LSR = 300-356 //LSR IN CONTAINER = 260-301 
if (sensorValue >= 180 && sensorValue < 200){
  setColor(0, 127, 255); // Dim Cyan // "light blue"
 }


//mid-late afternoon // 2pm-3pm // LSR = 300-350; 200-250; 150-200; 100-150; 50(maybe70)-100 
if(sensorValue >= 200 && sensorValue < 250){
  setColor(0, 250, 100); //transition blue
}

//3pm-4pm // 37-50 (3:38 onward: 50-100; averaged around 60-100) 
if(sensorValue >= 250 && sensorValue < 300){
  setColor(100, 250, 20); //transition yellow
}

//4pm-5pm // 11-30 // might have to be >250 && <300 
//transition from afternoon to sunset 
if (sensorValue >= 300 && sensorValue < 400){
  setColor(255, 200, 0); // True Yellow
}


if (sensorValue >= 60 && sensorValue < 100){ 
    setColor(255, 50, 0); // Orange
}


// 5pm-6pm // 15-27 
if (sensorValue >= 45 && sensorValue < 60){
  setColor(255, 50, 10); // light peachy pink
 }


//6pm-6:35pm //16-21 
 if (sensorValue >= 25 && sensorValue < 45){
   setColor(170, 70, 120); // light peachy purple
 }

//late sunset/early night // 6:45pm-7:30pm 
if (sensorValue >= 20 && sensorValue < 25){
  setColor(80, 0, 80); // "light purple"
}


if (sensorValue >= 10 && sensorValue < 20){
  setColor(255, 0, 255); // Magenta // ''dark purple'
}


delay(2);
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
