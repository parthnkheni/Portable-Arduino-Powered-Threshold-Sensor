# Room Temperature Monitor

This repository contains the design, code, and documentation for a Room Temperature Monitoring device, created as part of the EK131 course project.

## Overview

The **Room Temperature Monitor** is a compact, user-friendly device that measures ambient temperature and displays the readings in both Celsius and Fahrenheit. It provides real-time alerts via a buzzer and LED if the temperature deviates from a predefined range. The project integrates **mechanical, electrical engineering, and programming principles** to create a practical and functional solution.

---

## Features

- **Real-Time Temperature Display:** Readings displayed on a 16x2 I2C LCD in Celsius and Fahrenheit.
- **Temperature Alerts:** A piezo buzzer and red LED are triggered when the temperature falls outside the customizable range (default: 72°F–75°F).
- **Power Indication:** A green LED indicates when the device is active.
- **Portable Power:** Powered by a 9V battery, with an estimated runtime of ~6.25 hours.
- **Customizable Code:** Users can easily modify the alert temperature range via the Arduino code.

---

## Components

1. **Arduino Uno**: Core microcontroller for processing inputs and managing outputs.
2. **TMP36 Temperature Sensor**: Reads ambient temperature and converts it to a voltage output.
3. **16x2 I2C LCD**: Displays temperature readings.
4. **Piezo Buzzer**: Emits sound when the temperature is out of range.
5. **LEDs (Green & Red)**: Indicate power status and alerts.
6. **3D-Printed Enclosure**: Protects the internal components.
7. **Power Source**: 9V battery with a custom holder.
8. **Switch & Wiring**: 2-way rocker switch for circuit activation, and insulated wiring for connections.

---

## How It Works

1. The TMP36 sensor measures the room temperature.
2. The Arduino Uno processes the sensor data and calculates the temperature in Celsius and Fahrenheit.
3. If the temperature exceeds the defined range, the red LED flashes, and the buzzer sounds an alert.
4. The 16x2 I2C LCD continuously updates to display the current temperature.
5. The green LED provides visual confirmation that the system is active.

---

## Setup & Usage

### Hardware Assembly

1. Assemble the components as outlined in the circuit diagram.
2. Place all components in the 3D-printed ABS enclosure, ensuring secure connections.
3. Use the 2-way rocker switch for circuit activation.

### Software Installation

1. Download the `.ino` file from this repository.
2. Open the file in the Arduino IDE.
3. Connect the Arduino Uno to your computer via USB.
4. Upload the code to the Arduino.

### Customization

- The temperature range can be modified in the Arduino code:
   ```cpp
   const int lowerLimit = 72; // Set your lower limit in Fahrenheit
   const int upperLimit = 75; // Set your upper limit in Fahrenheit
   ```

---

## Performance

- **Accuracy:** Reliable temperature monitoring with a ±2°C margin.
- **Battery Life:** 9V battery provides up to 6.25 hours of operation.
- **Alert System:** Instant visual and audio feedback when temperature is outside the set range.

---

## Future Improvements

1. **Enhanced Sensor Accuracy:** Replace the TMP36 with a higher-precision sensor.
2. **Extended Battery Life:** Use a larger-capacity battery or low-power design.
3. **Compact Design:** Optimize the enclosure for portability.
4. **Additional Features:** Integrate Wi-Fi or Bluetooth for remote monitoring.
