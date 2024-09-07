#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor LF = motor(PORT19, ratio6_1, true);
motor LM = motor(PORT20, ratio6_1, false);
motor RF = motor(PORT9, ratio6_1, false);
motor RM = motor(PORT10, ratio6_1, true);
motor LB = motor(PORT18, ratio6_1, true);
motor RB = motor(PORT8, ratio6_1, false);
motor Roller = motor(PORT16, ratio6_1, false);
digital_out Pistake = digital_out(Brain.ThreeWirePort.D);
digital_out Clamp = digital_out(Brain.ThreeWirePort.A);
digital_out Clamp2 = digital_out(Brain.ThreeWirePort.B);
inertial Gyro = inertial(PORT2);
//Naming convention: 
// Important variables
const double wheelDiam = 3.25;
const double wheelToMotorRatio = 36.0/60;

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}