#pragma config(Sensor, in1,    pot1,           sensorNone)
#pragma config(Sensor, in2,    pot2,           sensorNone)
#pragma config(Sensor, dgtl1,  qua11,          sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  qua21,          sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  qua31,          sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  qua41,          sensorNone)
#pragma config(Sensor, dgtl8,  AutoSF,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl9,  quaGancho,      sensorNone)
#pragma config(Sensor, dgtl10, AutoUser,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, Finaldown,      sensorTouch)
#pragma config(Sensor, dgtl12, Finalup,        sensorTouch)
#pragma config(Motor,  port1,           cata12,        tmotorNone, openLoop)
#pragma config(Motor,  port4,           palaR,         tmotorNone, openLoop)
#pragma config(Motor,  port8,           palaL,         tmotorNone, openLoop)
#pragma config(Motor,  port2,           rueda5,        tmotorNone, openLoop)
#pragma config(Motor,  port3,           rueda6,        tmotorNone, openLoop)
#pragma config(Motor,  port6,           rueda7,        tmotorNone, openLoop)
#pragma config(Motor,  port7,           rueda8,        tmotorNone, openLoop)
#pragma config(Motor,  port5,           cata9,         tmotorNone, openLoop)
#pragma config(Motor,  port9,           cata10,        tmotorNone, openLoop)
#pragma config(Motor,  port10,          cata11,        tmotorNone, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//* Initialized array values for motors ports and sensor ports *//

#include "Functions.c"
#include "Autonomous.c"
#include "UserTaskPart.c"

task main()
{
	entrenaments();
}
