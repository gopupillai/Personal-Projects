#ifndef FIRST_DAYS_H_
#define FIRST_DAYS_H_

#include <iostream>
#include <string>
#include <cmath>
#include "first_days_functions.cpp"


int daysInMonth(int month, int year);
// Returns the number of days in a month
// Note: Includes year for leap years

int numberOfFirstDays(int startYear, int endYear, int day);
/*	Returns the number of times day falls on the first of the month in the years between startYear and endYear
	day conversion:
	Monday		0
	Tuesday		1
	Wednesday	2
	Thursday	3
	Friday 		4
	Saturday	5
	Sunday 		6
*/

void run();
// Runs the program

#endif
