#ifndef INTERCEPT_SHIELD_H_
#define INTERCEPT_SHIELD_H_

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>

#include "coordinate.h"
#include "safe_zone.h"
#include "rocket.h"
#include "patriot.h"
#include "intercept_shield_functions.cpp"

/* Notes:
	- Rocket details needs to be input using public functions
	- Variables are all private -> Ensures functions do not adjust and maintain correct I/O
	- Set safe zone details private?
	- Possible split of rocket class into separate classes: Patriot (intercepting missile) and Rocket (incoming)
*/


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



void printDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<patriot> patriots);
// Outputs the details of the safe zone, incoming rocket and patriot batteries






#endif
