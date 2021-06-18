#include <DHT.h>

#define DHTPIN 5 // D1
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(115200);
}

void loop(){
  Serial.println("Temperature:");
  Serial.println(dht.readTemperature());
  Serial.print("Humidity:");
  Serial.println(dht.readHumidity());
  delay(1000);
}
