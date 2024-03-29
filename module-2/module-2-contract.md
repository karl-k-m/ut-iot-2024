# Module 2 contract 1

## (M) The Kit - Arduino IDE and the ESP8266 - OK
### Components:
- Dual socket triple base shield for WebMos D1 Mini
- ESP8266 MCU - 3pcs
- ESP32s - 2pcs
- 5V Relay shield
- D1 Mini Button shield
- RFID-RC522 card reader with 2 NFC tags
- 12V Solenoid door lock
- Two color LEDs
- RGB LED
- Multiple 200 and 330 OHM resistors
- D1 Mini OLED display shield - 2pcs
- Dupont jumper cables
- 12V power supply into multiple USB-A ports
- Breadboard

## (O) Recompile from class - OK

## (O) Low level buses - OK
### RS232
- History: Intro in 1960s, one of the oldest serial communication protocols, originally designed for data exchange between teletypewriters and modems;
- Length: Effective up to 15 meters (50 feet), though longer distances can be achieved at lower speeds or with high-quality cables;
- Speed: Typically up to 115.2 Kbps, but can be higher with modern equipment;
- Wiring: Simple point-to-point configuration with various pinouts; most common is the DB9 connector.

### RS485
- History: Intro in 1980s as an improvement over RS232, RS485 supports longer cable lengths and higher speeds;
- Length: Up to 1200 meters;
- Speed: Can reach up to 10 Mbps at shorter distances;
- Wiring: Uses a differential signaling method with twisted pair cables, allowing for multi-point connections, up to 32 devices.

### I2C
- History: Dev by Philips in the 1980s for communication between chips on a circuit board;
- Length: Designed for short distances, typically within a single device or circuit board;
- Speed: Standard mode up to 100 Kbps, Fast mode up to 400 Kbps, and High-speed mode up to 3.4 Mbps;
- Wiring: Two-wire bus (Serial Data Line (SDA) and Serial Clock Line (SCL)) and supports multiple masters and slaves.

### SPI
- History: Dev by Motorola in the 1980s, primarily for short-distance communication in embedded systems;
- Length: Intended for short distances, typically a few centimeters to a meter.
- Speed: Can go up to several Mbps, depending on the specific implementation and system constraints;
- Wiring: Uses a master-slave architecture with four lines: Master Out Slave In (MOSI), Master In Slave Out (MISO), Clock (SCK), and Slave Select (SS).

### OneWire
- History: Developed by Dallas Semiconductor in the 1990s for low-speed communication with minimal wiring;
- Length: Can be used for distances up to 100 meters, depending on the configuration and environment;
- Speed: Standard speed up to 16.3 Kbps, with Overdrive mode allowing speeds up to 142 Kbps;
- Wiring: Unique in that it requires only a single wire for data transmission, with the ground serving as a reference. Some devices also include a separate power line.

## (O) IoT Protocols - OK
- MQTT - lightweight, publish-subscribe, machine to machine network protocol for message queue/message queuing service. Meant for remote devices which have limited opreational resources (processing power, bandwidth etc.).
- CoAp - Constrained Application Protocol is a specialized Internet application protocol for constrained devices, as defined in RFC 7252. It enables those constrained devices called "nodes" to communicate with the wider Internet using similar protocols.
- HTTP - Hypertext Transfer Protocol. Used for all kinds of web services, e.g. sending web pages, REST API-s, etc.


## (M) Basic electronics prototyping - OK
- ”Hello breadboard”
- RGB LED color mixer (the led has some issues with blue)
- https://github.com/karl-k-m/ut-iot-2024/blob/main/module-2/rgb_mixer_0.jpg
- https://github.com/karl-k-m/ut-iot-2024/blob/main/module-2/rgb_mixer_1.jpg
- https://github.com/karl-k-m/ut-iot-2024/blob/main/module-2/rgb_mixer_2.jpg
- See: sketch_feb26a_rgb.ino

## (M) “Hello world”/Blink in C++ - TODO: lisa pilt
- Blink video. (https://youtu.be/2nN_ZVyWLzg?si=EkluhBUelc4Rdhbg )
- Variation(s) of blink with button.
- https://github.com/karl-k-m/ut-iot-2024/blob/main/module-2/blink.gif


