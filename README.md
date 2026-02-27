 Overview
An advanced assistive technology system that combines Obstacle Avoidance with Active Indoor Navigation. Unlike passive canes, this device uses RFID tagging to help visually impaired users identify their location and "place orders" or set destinations via a button-and-voice interface.

Key Features
Active Navigation: Uses an MFRC522 RFID module to detect "waypoints" or "stations" (e.g., Room A, Kitchen, Exit).

Voice/Audio Interface: Provides real-time feedback and instructions to the user based on their inputs and location.

Interactive Input: Integrated push-buttons allow users to select destinations or confirm actions.

Safety Layer: A persistent ultrasonic sensor (HC-SR04) loop ensures the user is alerted to obstacles regardless of the navigation state.

🛠️ Hardware Stack
Microcontroller: Arduino Uno / Mega

Sensing: HC-SR04 Ultrasonic Sensor, MFRC522 RFID Reader

Interaction: Momentary Push Buttons, DFPlayer Mini (or similar Audio Module)

Indicators: Piezo Buzzer & LED Status Array

💻 Software Logic
The system operates on a state-machine logic:

Standby: Device waits for button input or RFID scan.

Request: User selects a "destination" or "order" via button press.

Guidance: System prompts the user to scan RFID cards at specific waypoints.

Safety: High-priority interrupts/loops monitor for obstacles within a 20cm range.
