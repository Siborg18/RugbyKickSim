#pragma once

#include "RugbyKickSim.h"

#include <assert.h>
#include <cassert>

void testingMathsFunctions()
{
	assert(angleOfTwoVectors(0.0, 20) == 0);
	assert(angleOfTwoVectors(15.0, 5) != 0);
	assert(distanceToGoal(50, 0) == 50);
	assert(playerPowerStatToDistanceInMetres(40) == 10);
	assert(playerPowerStatToDistanceInMetres(50) == 10);
	assert(playerPowerStatToDistanceInMetres(51) == 11);
	assert(playerPowerStatToDistanceInMetres(99) == 59);


}



