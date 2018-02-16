#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include "RobotMap.h"

class OI {
private:
	Joystick* leftStick;
	Joystick* rightStick;
	Joystick* operatorStick;
	Button* shootCrate;
	Button* getCrate;

public:
	OI();
	void catcherButtons();
	Joystick* getLeftStick();
	Joystick* getRightStick();
	Joystick* getOperatorStick();

};

#endif  // OI_H
