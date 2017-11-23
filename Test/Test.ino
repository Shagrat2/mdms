#define MY_OTA_FIRMWARE_FEATURE

#define MY_DEBUG

#define MY_RADIO_NRF24
//#define MY_RADIO_RFM69
#define MY_RFM69_FREQUENCY RF69_433MHZ

#define MY_CORE_ONLY // Not change
#define MY_SIGNING_ATSHA204

#include <SPI.h>
#include <MySensors.h>

void setup() {
  int Val;

  Serial.begin(115200);

  // CPU
  Serial.println("Test CPU: OK");

  // NRF24/RFM69
  if (transportInit()) { // transportSanityCheck
    Serial.println("Radio: OK");
  } else {
    Serial.println("Radio: ERROR");
  }
}

void loop() {

}

