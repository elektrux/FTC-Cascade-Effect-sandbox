#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTMotor)
#pragma config(Hubs,  S2, HTServo,  none,     none,     none)
#pragma config(Sensor, S3,     touch1,         sensorTouch)
#pragma config(Sensor, S4,     touch2,         sensorTouch)
#pragma config(Motor,  mtr_S1_C1_1,     motorA,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorB,        tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_1,     motorC,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorD,        tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     armA,          tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     armB,          tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_1,     collector,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     motorK,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S2_C1_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S2_C1_2,    servo2,               tServoStandard)
#pragma config(Servo,  srvo_S2_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S2_C1_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
/*
* teleop.c proivdes autonouse control of the robot.  It should NEVER reference
* any motors, sensors, or joystics directly.  Rather, it should call functions in
* drivebase.c, arm.c, and OI.c
*
* TO-DOs
*   o When you accomplish a task below, change the first character from 'o' to 'x'
*   o Replace joystick.joy1_y1 and joystick.joy1_y2 with calls to OI.c's,
*     tankDriveLeftThrottle(), tankDriveRightThrottle()
*   o Replace the joy1Btn calls with calls to OI.c's, isTankMode()
*   o Replace the joy1Btn calls with calls to OI.c's, isMecanumMode()
*/

#include "JoystickDriver.c"
#include "drivebase.c"
#include "OI.c"

task main()
{
	while (true)
	{
		getJoystickSettings(joystick);

		if (OI_is_in_tank_drive(joystick))
		{
			tankdrive (OI_get_left_throttle(joystick) / 5,(OI_get_right_throttle(joystick)  / 5);
		}
		if (OI_is_in_translate_drive(joystick))
		{
			translatedrive (OI_get_sideways_throttle(joystick) / 5);
		}

	}

}
