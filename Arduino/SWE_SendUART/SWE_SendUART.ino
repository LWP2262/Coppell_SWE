#include <SoftwareSerial.h>
int relayPin = 3;
int RcValue = -1;
const uint8_t  StopValue[6] = {255, 85, 0, 255, 0, 255};
const uint8_t  UpValue[6] = {255, 85, 1, 254, 0, 255};
const uint8_t  DownValue[6] = {255, 85, 2, 253, 0, 255};
const uint8_t  LeftValue[6] = {255, 85, 4, 251, 0, 255};
const uint8_t  RightValue[6] = {255, 85, 8, 247, 0, 255};
const uint8_t* Up_ptr = UpValue;
const uint8_t* Down_ptr = DownValue;
const uint8_t* Right_ptr = RightValue;
const uint8_t* Left_ptr = LeftValue;
const uint8_t* Stop_ptr = StopValue;
SoftwareSerial SWEBot(9, 8); //RX, TX
SoftwareSerial BTModule(10, 11); // RX, TX

void setup() {
  pinMode(relayPin, OUTPUT);
  SWEBot.begin(56700);
  BTModule.begin(57600);
  Serial.begin(56700);
  digitalWrite(relayPin, HIGH);
  delay(4000);
  digitalWrite(relayPin, LOW);
}

void loop() {
  if (BTModule.available()) {
    RcValue = BTModule.read();
  } else {
    RcValue = -1;
  }
  if (RcValue != 1) {
    Up();
  } else {
    Stop();
  }
}



