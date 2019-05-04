/*
This c file declares all the functions for the accelerometer. It is imported by the BmiAccel class,
*/

int begin();

bool setOdr(bit);

bool setRange();

bool pinModeInt();

bool mapDrdyInt();

bool getDrdyStatus();

void readSensor();

float getAccel();

bool selfTest();

bool setMode();

bool setPower();

void softReset();

bool isError();

void writeToRegister();

void writeToRegisters();

void readRegisters();
