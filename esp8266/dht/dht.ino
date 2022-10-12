// Import required libraries
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <Hash.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 5     // Digital pin connected to the DHT sensor

// Uncomment the type of sensor in use:
#define DHTTYPE    DHT11     // DHT 11
//#define DHTTYPE    DHT22     // DHT 22 (AM2302)
//#define DHTTYPE    DHT21     // DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  // Serial port for debugging purposes
  Serial.begin(115200);
  dht.begin();
  
}
 
void loop(){  
    float newT = dht.readTemperature();
    
    // Read Humidity
    float newH = dht.readHumidity();

    Serial.print("Temperature = ");
    Serial.println(newT);

    Serial.print("Humidity = ");
    Serial.println(newH);

    delay(500);
    
}
