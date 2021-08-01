#include <DHT.h>

#define DHTPIN 5 // D1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {

  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (isnan(t) || isnan(h))
  {
    Serial.println("Failed to read from DHT");
  }
  else
  {
    Serial.println("Temperature:");
    Serial.println(t);
    Serial.print("Humidity:");
    Serial.println(h);
    delay(1000);
  }

}