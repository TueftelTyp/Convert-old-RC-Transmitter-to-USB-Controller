# Convert old RC Transmitter to USB Controller
## Converting an old RC Flight Transmitter to use it in Simulators
 
Do you have an old analogue RC radio transmitter at home and would like to use it in the simulator? That's exactly what happened to me, who wanted to make his father happy by breathing new life into the dusty Transmitter. 
Since I couldn't find a script that worked for me, in which everything really worked, i created this one. 

It now includes the use of 4 axes and up to 6 buttons/switches as standard. 
If your project requires more, I've left an analog input and 6 other digital inputs open. 
 
 ![schematic](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Schematics.jpg?raw=true "schematic")
 
 This sketch file is for use with Arduino Leonardo and Arduino Micro only. 
 And uses Joystick 1.0 library from Matthew Heironimus [ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary/tree/version-1.0 "ArduinoJoystickLibrary")
 

 ## My Build
*Unfortunately, I forgot to take several pictures during the workflow, so here are just a few.*

#### 1. First, I connected the gimbals and 2 additional switches to the Arduino Pro Micro and tested them.
![Build1](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Build/Build%20(1).jpg?raw=true "Build1")

#### 2. Subsequently, 2 toggle switches were installed.
![Build2](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Build/Build%20(2).jpg?raw=true "Build2")

#### 3. In addition, there was another toggle switch, a push button and another potentiometer (pin 10). Currently, I have "installed" the USB connection cable somewhat provisionally (until a built-in socket is delivered). The Arduino board is located in the former battery slot.
![Build3](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Build/Build%20(3).jpg?raw=true "Build3")

#### 4. A light for the originally installed voltmeter, which I continue to use here via 5V USB, was soldered to the original power switch.
![Voltmeter-reuse](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Build/Voltmeter_reuse%20(2).jpg?raw=true "Voltmeter-reuse")

#### 5. To make the simulation perfect, the transmitter must be turned on to work correctly.
![on-off](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Build/on-off.gif?raw=true "on-off")

#### 6. All controls are easily accessible and work flawlessly.
![Top](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Build/Top.jpg?raw=true "Top")
![working](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/blob/main/Build/working.jpg?raw=true "working")

#### - All other pictures of the project can be found [HERE](https://github.com/TueftelTyp/Convert-old-RC-Transmitter-to-USB-Controller/tree/main/Build "HERE").