// Gyroskop Test
// Two images taken to get the model right (folder: images) 
// >> ("Gyroskop[MpuSide].jpg" & "Gyroskop[PinSide].jpg")

// Model: GY-521 | MPU-6050 

// Websites for reference: 
// > https://www.makershop.de/sensoren/bewegung/gy-521/
// > https://mschoeffler.com/2017/10/05/tutorial-how-to-use-the-gy-521-module-mpu-6050-breakout-board-with-the-arduino-uno/

// -- Description of the pins --
// VCC: 5V
// GND: GND
// SCL: SCL
// SDA: SDA
// XCL:
// XDA:
// AD0:
// INT:

// Serial connection (SCL and SDA) should be enough to read out the values

void setPinModes() {
    // "pinMode" for all used pins

}

void readGyroskop() {
    // code to read the gyro and print the values

}

void setup() {
    setPinModes();
}

void loop() {
    readGyroskop();
    delay(100);
}