#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTMotor)
#pragma config(Hubs,  S2, HTServo,  none,     none,     none)
#pragma config(Sensor, S3,     touch,          sensorTouch)
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
//!!Code automatically generated by 'ROBOTC' configuration wizard               !!

/*
* test_arm.c is a "test harness," basically a mini teleop.c that only controls the arm.  
* It DOES NOT directly reference any joystick buttons or axes (calls functions in OI.c isntead)
* It DOES NOT direclty reference any motors (calls functions in arm.c instead)
* The code within the while loop can be copied into a full teleop.c later.
*/

#include "JoystickDriver.c"
#include "OI.c"
#include "arm.c"
task main()
{
	while (true)
	{
		getJoystickSettings(joystick);
		if (lowerArm(joystick)) //for moving arm down
		{
			arm_lower();
		}
		else if (raiseArm(joystick)) //for moving arm up
		{
			arm_raise();
		}
		else
		{
			arm_stop();
		}
	}
}
