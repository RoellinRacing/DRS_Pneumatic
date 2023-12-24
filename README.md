# DRS_Pneumatic
DRS System for rear wing with pneumatic actuators

# Project developed by @carbon_GTV  support me on instagram, also donators are welcome!

# Check out the video of such a setup, you can add as much zylinders as you need. Also check out the pressure reducers, they are important for fine tune!
# There are alot of cylinders in all lenght and thicknes available.
# https://www.instagram.com/reel/C0_A3zPI9OU/?utm_source=ig_web_copy_link&igsh=MzRlODBiNWFlZA==






### Parts List
1. **Arduino Uno**: Control unit of the system.
2. **Pneumatic Cylinder**: For actuating the rear spoiler.
3. **3/2-Way Valve**: To control the airflow to the cylinder.
4. **Compressed Air Source**: Compressor or compressed air tank.
5. **Hoses and Connectors**: For connecting the valve, cylinder, and compressed air source.
6. **Pushbuttons**: Two pieces, one for opening and one for closing the DRS.
7. **LED**: For indicating the DRS status.
8. **Resistor for the LED**: Typically 220 Ohms.
9. **Relay Module**: For controlling the electropneumatic valve.

### Connection Plan
- **Pneumatic Valve**:
  - Controlled by a relay, connected to an Arduino pin (e.g., Pin 2 for opening, Pin 3 for closing).
- **Pushbuttons**:
  - Open button to Pin 4 of the Arduino.
  - Close button to Pin 5 of the Arduino. (Here you can connect brakelight and/or a button)
- **LED**:
  - Anode (longer leg) to Pin 6 of the Arduino.
  - Cathode (shorter leg) to a 220-Ohm resistor connected to GND.
- **Relay Module**:
  - Connect to the respective pins on the Arduino and to the valve.

### Installing and Setting Up the Arduino IDE
The steps for installing and setting up the Arduino IDE are identical to those of the previous system. You do not need any additional libraries for this project.

1. **Download and Install Arduino IDE**: Visit the [official Arduino website](https://www.arduino.cc/en/software) and download the Arduino IDE for your operating system. Follow the installation instructions.

2. **Connect Arduino Uno**: Connect the Arduino Uno to your computer using a USB cable.

3. **Select Board and Port**: Under `Tools` -> `Board`, select your Arduino Uno. Then, under `Tools` -> `Port`, choose the port to which your Arduino is connected.

4. **Upload Code**: Copy the provided code into the Arduino IDE. Click the Upload button to transfer the code to your Arduino Uno.

With this guide, you should be able to install and operate your pneumatic DRS system.
