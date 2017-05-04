#include <SoftwareSerial.h>
int TxValue;
//SoftwareSerial Rxd(RxPin, 3); //recieves data from zigbee Rxd and transmits to pin 3
SoftwareSerial Txd(8, 9); 
void setup() {
 
  Serial.begin(57600);
  // Rxd.begin(57600);
  Txd.begin(57600);
}

void loop() {
  //  Rxd.listen();
  //  Rxd.read();
  //  Txd.listen();
  //  Txd.read();
  TxValue = Serial.read();  
 Serial.print(TxValue);
 Serial.println();
  Txd.write(TxValue);

}
