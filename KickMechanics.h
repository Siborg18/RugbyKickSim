#pragma once
#include <iostream>

bool playerChoosesToKick(int kickPower, int kickAccuracy)
{
	std::cout << "Kick Power: " << kickPower << std::endl;
	std::cout << "Kick accuracy: " << kickAccuracy << std::endl;
	// if kick range > distance && kickAccuracy > kickAngle true
return false;
}

bool poorKickTechniqueModifier(int kickAccuracy)
{
	if (kickAccuracy < 50)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool ballStruckCleanly()
{
	if (diceRoll() == 1)
	{
		return false;
	}
	else
	{
		return true;
	}

	// modifier if kick struck clean + base stats

	return true;
}

int windModifier()
{
	// modifier if the weather is bad  - base power
	return 0;
}

bool playerKeptCool(int composure, int rollIn)
{
	int composureRoll{rollIn};
	if (composure < 50 && composureRoll < 6)
	{
		return false;
	}
	else if (composure >= 50 && composure < 70 && composureRoll < 5)
	{
		return false;
	}
	else if (composure >= 70 && composure < 80 && composureRoll < 4)
	{
		return false;
	}
	else if (composure >= 80 && composure < 90 && composureRoll < 3)
	{
		return false;
	}
	else if (composure >= 80 && composure < 90 && composureRoll < 2)
	{
		return false;
	}
	else if (composure >= 90 && composureRoll == 1)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool bigBootModifier(int kickPower, int rollIn)
{
	if (kickPower >= 90 && rollIn > 5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool kickSuccessful()
{
	// If the kick is successful but accuracy is only just good enough it will hit the post and go in
	// Same with power and the crossbar
	// If unsuccessful same rules apply as above
	return true;
}
