## Bluetooth control for Arduino car

This sketch allows you to control Arduino-based cars with your mobile phone.

## Requirments & Tests

Modules, cars, libraries, tests and other required stuff.

**CARS**

- Quant
- Leo4
- Leo6

[Here](https://robocode.ua/impro-ru) you can find information about each of this cars. 
Also this was tested with custom car using Arduino Nano & HC-06 Bluetooth module.

### Libraries
- [SoftwareSerial](https://github.com/arduino/ArduinoCore-avr/blob/master/libraries/SoftwareSerial/src/SoftwareSerial.h)

### Bluetooth Modules

All tests was completed with the next Bluetooth modules:
- HC-04
- HC-05
- HC-06

### Apps

- My own Android mobile app
- Bluetooth RC Controller

[More about applications](#step-2-mobile-app)

## Installation

### Step 1. Sketch & Lib

Download the sketch and [SoftwareSerial](https://github.com/arduino/ArduinoCore-avr/blob/master/libraries/SoftwareSerial/src/SoftwareSerial.h) library if you dont have it yet.

After downloading you should change the number of pins in setup() and each of movement function.Also you should read the comments.

### Step 2. Mobile App

1. My own Android mobile app based on App Inventor ==> [Download](https://drive.google.com/file/d/1WTVsC42M9ilam6YLVxg9i5ML4oHJ7Vpj/view?usp=sharing)
2. Bluetooth RC Controller | Not available on Google Play now ==> [Download](https://bluetooth-rc-car.en.softonic.com/android)

When you will start it first time - dont forget to allow access to bluetooth on your device. "Connect to bluetooth" buttons display only bluetooth to which your device is connected.

### Step 3. Enjoy

You may have to slightly adjust the values ​​indicated in the sketch for comfortable use, but it does not require major changes.

