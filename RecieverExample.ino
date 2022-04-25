#include <Arduino.h>
#include "NRF204.h"
#include "Airplane.h"

using namespace Radio;
using namespace OnBoardController;

AircraftController aircraftController;
void setup()
{

  // put your setup code here, to run once:
  aircraftController = AircraftController(132, 133, 134, 135, 136, 137);
}

void loop()
{
  //Serial.println("Run");
  // put your main code here, to run repeatedly:
  aircraftController.run();
}
