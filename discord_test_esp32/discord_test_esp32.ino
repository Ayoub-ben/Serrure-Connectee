#include "arduino_secrets.h"
/*
  Discord WebHook Example for ESP32
*/
#include "discord.h"

void setup() {
  Serial.begin(9600);
  connectWIFI();
  sendDiscord("1012");
}

void loop() {
}
