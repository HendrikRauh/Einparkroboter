// Gyroskop Test
// Two images taken to get the model right (folder: images) 
// >> ("Gyroskop[MpuSide].jpg" & "Gyroskop[PinSide].jpg")

// Model: GY-521
// Website for reference: 

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