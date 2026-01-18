#include <DHT.h>
#include <SoftwareSerial.h>
#define DHTPIN 7 
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);
SoftwareSerial sim800l(2, 3); 


float tempThreshold = 30.0;
float humidityThreshold = 70.0;
void setup() {
Serial.begin(9600);
sim800l.begin(9600); 
dht.begin();
delay(1000); 
sendSMS("System Initialized. Monitoring started.");
sim800l.println("AT+CSQ");
}
void loop() {

float h = dht.readHumidity();
float t = dht.readTemperature();
if (isnan(h) || isnan(t)) {
Serial.println("Failed to read from DHT sensor!");
return;
}
Serial.print("Humidity: ");
Serial.print(h);
Serial.print(" %\t");
Serial.print("Temperature: ");
Serial.print(t);
Serial.println(" *C");

if (t > tempThreshold || h > humidityThreshold) {
String alertMsg = "Alert! Temp: " + String(t) + "C, Humidity: " + String(h) + "%";
sendSMS(alertMsg);
delay(30000); 
}
delay(2000);
}

void sendSMS(String message) {
sim800l.println("AT+CMGF=1"); 
delay(100);
sim800l.println("AT+CMGS=\"+911009876809\""); 
delay(100);
sim800l.println(message); 
delay(100);
sim800l.write(26); 
delay(1000);
Serial.println("SMS Sent: " + message);
}
