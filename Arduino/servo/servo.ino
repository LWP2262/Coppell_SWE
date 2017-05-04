#include <SoftwareSerial.h>
SoftwareSerial BLE_Shield(10, 11);
#include <Servo.h>5 
 Servo myservo;  
void setup() {

  myservo.attach(9);        // Attach the servo object to pin 9
  myservo.write(0);
  Serial.begin(57600);
  BLE_Shield.begin(57600);
}
void loop()  // Continuous loop
{
  // See if new position data is available
  if (BLE_Shield.available()) {
    myservo.write(BLE_Shield.read());  // Write position to servo
Serial.print(BLE_Shield.read());

  }
}
