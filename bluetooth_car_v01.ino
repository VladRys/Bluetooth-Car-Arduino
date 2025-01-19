#include <SoftwareSerial.h>
SoftwareSerial bth(2,3);

int carSpeed = 100;
const int turnSpeed = 75;

char value;

void setup() {
  // PinMode
  for (int i = 5; i<=10; i++){
    pinMode(i, OUTPUT);
  }
  bth.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (bth.available() > 0){
    value = bth.read();
    Serial.println(value);
    
    if (value == '0'){
      carSpeed = 0;
      }

// -------- CONTROLS --------


// -------- SPEED --------
    switch(value){
      case '0':{carSpeed = 0;} break;
      case '1':{carSpeed = 30;} break;
      case '2':{carSpeed = 50;} break;
      case '3':{carSpeed = 70;} break;
      case '4':{carSpeed = 90;} break;
      case '5':{  carSpeed = 110;} break;
      case '6':{carSpeed = 130;} break;
      case '7':{carSpeed = 150;} break;
      case '8':{carSpeed = 170;} break;
      case '9':{carSpeed = 200;} break;
      case 'q':{carSpeed = 250;} break;
      }

// -------- MOVEMENT --------
    if (value == 'S'){Stop();}
    if (value == 'F'){Forward();}
    if (value == 'B'){Backward();}
    if (value == 'L'){Left();}
    if (value == 'R'){Right();}
    if (value == 'I'){ForwardLeft();}
    if (value == 'G'){ForwardRight();}
    }
    
}


void Forward(){
  digitalWrite(5, 0);
  analogWrite(6, carSpeed);
  analogWrite(9, carSpeed-10);
  digitalWrite(10, 0);
}

void ForwardLeft(){
  digitalWrite(5, 0);
  analogWrite(6, carSpeed/1.5); // All values ​​are individual
  analogWrite(9, carSpeed);
  digitalWrite(10, 0);
  }

void ForwardRight(){
  digitalWrite(5, 0);
  analogWrite(6, carSpeed);
  analogWrite(9, carSpeed/2);
  digitalWrite(10, 0);
  }

void Backward(){
  analogWrite(5, carSpeed);
  digitalWrite(6, 0);
  digitalWrite(9, 0);
  analogWrite(10, carSpeed-5);
}

void BackwardRight(){
  analogWrite(5, carSpeed/2);
  digitalWrite(6, 0);
  digitalWrite(9, 0);
  analogWrite(10, carSpeed);
  }


void BackwardLeft(){
  analogWrite(5, carSpeed);
  digitalWrite(6, 0);
  digitalWrite(9, 0);
  analogWrite(10, carSpeed/2);
  }

void Stop(){
  digitalWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  digitalWrite(10, 0);
}

void Left(){
  digitalWrite(5, 0);
  digitalWrite(9, 0);
  analogWrite(6, turnSpeed);
  analogWrite(10, turnSpeed);
  }

void Right(){
  analogWrite(5, turnSpeed);
  analogWrite(9, turnSpeed);
  digitalWrite(6, 0);
  digitalWrite(10, 0);
  }
