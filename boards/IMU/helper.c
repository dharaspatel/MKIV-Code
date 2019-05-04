/*
This c file defines all the functions for the accelerometer. It is imported by the BmiAccel class,
*/


//Functions for the accelerometer
int begin(){
  //setting the CS pin (AND DIGITAL WRITE?)
  pinModeInt();

  //start communication with SPI

  //check for errors (devide ID and self test)
  isError();
  selfTest();

  //begin softReset
  softReset();

  //enable accel
  setPower();
  setMode(active);

  //soft reset again
  softReset();

  //delay time by 50

  //set range to 24G
  setRange();

  //set odr
  setOdr();

  //check for errors again
  isError();
}






bool setOdr(){
  value = 0x08;
  writeToRegister(ACC_CONFIG,[3:0],value);
  //delay by 1
  readRegisters();
  //return true or false depending on whether or not read equals the value

}

bool setRange(){

}

bool pinModeInt(){

}

bool mapDrdyInt(){

}

bool getDrdyStatus(){

}

void readSensor(){

}

float getAccel(){

}

bool selfTest(){

}

bool setMode(){

}

bool setPower(){

}

void softReset(){

}

bool isError(){
  //for config and fatal errors and for ID
}

void writeToRegister(){

}

void writeToRegisters(uint8_t reg, const uint8_t data, uint8_t length){
//writes the bit (data) of length len to given register reg
}

int8_t readRegisters(uint8_t reg, const uint8_t data, uint8_t length){

}

struct BmiAccel{

}
