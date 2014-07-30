#include "sundays.h"

int daysInMonth(int month, int year) {
	if ((month == 3) || (month == 5) || (month == 8) || (month == 10)) {
		return 30;
	}
	if (month == 1) {
		if (year % 4 == 0) {
			if (year % 100 == 0) {
				if (year % 400 == 0) {
					return 29;
				} else {
					return 28;
				}
			}
			return 29;
		} else {
			return 28;
		}
	}
	return 31;
}

int numberOfFirstDays(int startYear, int endYear, int day) {
	int year = startYear;
	int currentDay = 0;
	double findStartDay = floor((startYear-1900)*365.25);
	currentDay = findStartDay;
	currentDay = currentDay % 7;
	int numberOfFirsts = 0;
	int month = 0;
	int limit = endYear;

	while (year <= limit) {
		currentDay = (currentDay + daysInMonth(month, year)) % 7;
		if (currentDay == 6) {
			numberOfFirsts++;
		}
		month++;
		if (month == 12) {
			month = 0;
			year++;
		}
	}
	return numberOfFirsts;
}