// ref: https://www.arduino.cc/en/Reference/analogRead
// ref: http://www.egr.msu.edu/classes/ece480/capstone/spring14/group01/docs/appnote/Wirsing-SendingAndReceivingDataViaBluetoothWithAnAndroidDevice.pdf
#include <SoftwareSerial.h>

SoftwareSerial serial(RX_PIN, TX_PIN);

const int RX_PIN = 2;
const int TX_PIN = 3;
const int ANALOG_PIN = 1;     // potentiometer wiper (middle terminal) connected to analog pin 0
                              // outside leads to ground and +5V
int val = 0;                  // variable to store the value read

void setup()

{

  Serial.begin(9600);          //  setup serial

}


unsigned long time;

void loop()
{
  val = analogRead(ANALOG_PIN);    // read the input pin
  Serial.println(val);             // debug value
  time=micros();
  Serial.print("Current time: ");
  Serial.println(time);
//  Current time: 5336596 - 5309556 = 27040
//  1000 * (1 / 27040) = 37hz
  
}
