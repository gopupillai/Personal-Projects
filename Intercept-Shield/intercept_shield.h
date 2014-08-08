#ifndef INTERCEPT_SHIELD_H_
#define INTERCEPT_SHIELD_H_

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

#include "coordinate.h"
#include "safe_zone.h"
#include "rocket.h"
#include "intercept_shield_functions.cpp"

void inputDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<rocket> &patriots);
/*	Inputs the details of safe zone & incoming rocket & patriot batteries
	Later can incorporate to handle a combination of incoming rockets through use of a vector
	Currently use cin for details then adjust to ifstream
	Input is as follows:

	x y radius -> Safe-Zone parameters
	x y x y speed -> Incoming Rocket: Location, direction, speed
	num_batteries -> Number of available patriot batteries
	x y -> Location of batteries

	Note: The number of locations of batteries must correspond to the number of batteries
*/



void printDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<rocket> patriots);
// Outputs the details of the safe zone, incoming rocket and patriot batteries




#endif
