# -SMS-BASED-REMOTE-ENVIRONMENTAL-MONITORING-SYSTEM-USING-ARDUINO-AND-DHT11-SENSOR-
A prototype where through DHT11 sensor we will get the temperature data and if it goes beyond a limit it will get intimated to us through the SMS


#  Temperature & Humidity Monitoring System with GSM Alert (SIM800L)

This project implements a real-time temperature and humidity monitoring system using a DHT11 sensor and sends SMS alerts via SIM800L GSM module when the readings exceed predefined threshold values.

# Components Used
- Arduino Uno
- DHT11 Temperature & Humidity Sensor
- SIM800L GSM
- External Power Supply for SIM800L
- Jumper Wires
- Breadboard
  ![Environment monitoring(3)](https://github.com/user-attachments/assets/7924f274-8a71-4d2f-ace2-4348798c12dc)


# System Working
1. Arduino reads **temperature and humidity** from the DHT11 sensor.
2. Values are displayed on the **Serial Monitor**.
3. Predefined threshold values are checked:
   - Temperature > **30°C**
   - Humidity > **70%**
4. If any threshold is exceeded:
   - An **alert SMS** is sent via SIM800L.
5. A delay is applied to prevent SMS spamming.


<img width="316" height="410" alt="image" src="https://github.com/user-attachments/assets/d55650f2-b512-4dfa-b3cc-579160272016" />

![Environment monitoring using GSM (2)](https://github.com/user-attachments/assets/47a581fe-675d-4d1e-8bf9-5ed094c02e20)


# Alert Conditions
- Temperature exceeds **30°C**
- Humidity exceeds **70%**
- 
# SMS Alert Format
Alert! Temp: 32.5C, Humidity: 75%


# Serial Monitor Output
- Temperature (°C)
- Humidity (%)
- GSM signal check
- SMS transmission status
  ![Environment monitoring(5)](https://github.com/user-attachments/assets/7b7eeaac-25dc-4bb0-91a2-c9843839f624)


# Features
- Real-time environmental monitoring
- Automatic SMS alert system
- GSM-based remote notification
- Simple and low-cost design

# Future Enhancements
- IoT cloud integration (ThingSpeak / Firebase)
- LCD or OLED display
- Mobile app notification
- Multiple phone number alerts
- Data logging to SD card

# Author
ARCHANA DEVI P M

