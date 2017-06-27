# Arduino-LEGO_car
Controlling a car made of LEGO via Android app.

Components:
Arduino UNO board.
4 - 3-6v DC motors.
4 - plastic wheels.
L298N Driver module.
HC-05 Bluetooth module.
Jumper Wires: Male-female, Male-male.
Battaries (to power the arduino and the Motors) - about 9v.

I used MIT App Inventor 2 to build the Android app - you can download, see how I built it and edit it here:
ai2.appinventor.mit.edu/?galleryId=6008569739345920


Wiring:

L298N:          Arduino:
in1             8
in2             7
in3             5
in4             4

L298N:
GND -> Arduino ground
+12v -> Power supply (battery)
+5v -> Arduino-Vin (if you use the same power supply for the arduino and the driver module)


Motors:

right side motors:
Motor 1:  Higher connection -> OUT3
          Lower connection -> OUT4
Motor 2:  Higher connection -> OUT4
          Lower connection -> OUT3

left side motors:
Motor 3:  Higher connection -> OUT1
          Lower connection -> OUT2
Motor 4:  Higher connection -> OUT2
          Lower connection -> OUT1
          

Bluetooth:

HC-05:          Arduino:
Rx              Tx
Tx              Rx
Gnd             ground
+5v             +5v
