#pragma once
#include <iostream>
#include <random>
#include <math.h>

const double pi = 3.14159265358979323846;

std::mt19937 mt{std::random_device{}()};

int diceRoll()
{
	std::uniform_int_distribution<> die6{ 1, 6 };
	return die6(mt);
}


double angleOfTwoVectors(double distanceFromCentre, double distanceFromGoalLine)
{
	double angle{};
	double a{distanceFromCentre}; // adjacent
	double b{distanceFromGoalLine}; // opposite
	double c{ a / b};
	angle = std::atan(c);

	return angle * 180 / pi;

}

double distanceToGoal(double distanceFromCentre, double distanceFromGoalLine)
{
	double distance{};
	double a {std::pow(distanceFromCentre, 2)};
	double b {std::pow(distanceFromGoalLine, 2)};
	double c {a + b};
	distance = std::sqrt(c);
	return distance;
}

int playerPowerStatToDistanceInMetres(int kickPower)
{
	if (kickPower < 50)
	{
		return 10;
	}
	else if (kickPower >= 50 && kickPower < 100)
	{
		return kickPower - 40;
	}
	else
	{
		return 0;
	}

}

int longDistanceKickAccuracyReduction(double distance, int kickAccuracy)
{
	double distanceModifier{0.5};
	double adjustedAccuracy{};
	adjustedAccuracy = kickAccuracy - (distance * distanceModifier);
	std::cout << "Adjusted accuracy: " << adjustedAccuracy;
	return adjustedAccuracy;
}
