
#include "RugbyKickSim.h"
#include <iostream>

int main(int argc, char **argv) {

	PlayerStruct Simon;
		Simon.kickPower = 90;
		Simon.kickAccuracy = 50;
		Simon.composure = 90;


	for (int i{}; i < 100; i++)
	{
		int rollIn{diceRoll()};
		// std::cout << "Roll: " << rollIn << ' ';
		std::cout << bigBootModifier(Simon.kickPower, rollIn);
	}

	double distanceFromCentre {32.2};
	double distanceFromGoalLine {22};
	std::cout << "Angle of two vectors: " << angleOfTwoVectors(distanceFromCentre, distanceFromGoalLine) << std::endl;
	std::cout << "Distance to goal: " << distanceToGoal(distanceFromCentre, distanceFromGoalLine) << std::endl;

	// playerChoosesToKick(Simon.kickPower, Simon.kickAccuracy);

	// rollIn = 5;

	std::cout << "Simon's stats: " << "Power: " << Simon.kickPower << " Accuracy: " << Simon.kickAccuracy << std::endl;
	longDistanceKickAccuracyReduction(50.0, 99);
	testingMathsFunctions();
	return 0;
}
