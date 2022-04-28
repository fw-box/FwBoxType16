//
// Copyright (c) 2020 Fw-Box (https://fw-box.com)
// Author: Hartman Hsieh
//
// Description :
//   None
//
// Connections :
//
// Required Library :
//

#include "FwBox.h"


#define DEVICE_TYPE 16
#define FIRMWARE_VERSION "1.1.14"


//
// Global variable
//

void setup()
{
  Serial.begin(115200);

  //
  // Initialize the fw-box core (early stage)
  //
  fbEarlyBegin(DEVICE_TYPE, FIRMWARE_VERSION);

  //
  // Initialize the fw-box core
  //
  fbBegin(DEVICE_TYPE, FIRMWARE_VERSION);

} // void setup()

void loop()
{
  //
  // Run the handle
  //
  fbHandle();

} // END OF "void loop()"
