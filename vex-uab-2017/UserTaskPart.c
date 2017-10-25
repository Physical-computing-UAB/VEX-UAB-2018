//* User task part *//


void aidaControl ()
//* ------------------------------------------------------------------ *//
//* Get params from Remote Control to answer with a especific movement selected by user. *//
//* The robot moves, throw stars and get up or get down the shovel *//
//* params: none. *//
//* changes: array motor values equal global variables with MOV_XXX or OFF. *//
//* return: this function do not return anything. *//
//* ------------------------------------------------------------------ *//



{
	//* Get next movement of three north (forward, northest, northwest) *//

	movement();

	//* Giro sobre si mismo right *//
	if(vexRT[Btn8L] == 1)
		{
			rotateLeft();
		}

	//* Giro sobre si mismo left *//
	if(vexRT[Btn8R] == 1)
		{
			rotateRight();
		}

	//* Shovel go up *//
	if(vexRT[Btn5U] == 1 && vexRT[Btn6U] == 0)
		{
			shovelUp();
		}

	//* Shovel go down *//
	if(vexRT[Btn6U] == 1 && vexRT[Btn5U] == 0)
		{
			shovelDown();
		}

	//* Thrower Down*//
	if(vexRT[Btn8D] == 1)
		{
			thrower();
		}
	else
		{
			throwerInOff();
		}

	//* Shovel Held *//
	if(vexRT[Btn5D] == 1)
		{
			shovelHeld();
		}
	//*  Robot gets up *//
	if(vexRT[Btn6D] == 1)
		{
			getUp();
		}


if(vexRT[Btn5U] == 0 && vexRT[Btn5D] == 0 && vexRT[Btn6D] == 0 && vexRT[Btn6U] == 0 && vexRT[Btn8R] == 0 && vexRT[Btn8L] == 0 && vexRT[Btn8D] == 0)
	{
		throwerInOff();
		shovelInOff();
	}
}
