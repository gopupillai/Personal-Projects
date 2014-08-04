#include "first_days.h"

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
		if (currentDay == day) {
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

void run() {
	int start, end, day;
	std::cout << "Enter the start year: ";
	std::cin >> start;
	while (start < 1900) {
		std::cout << "Enter a start year after or on 1900: ";
		std::cin >> start;
	}
	std::cout << "Enter the end year: ";
	std::cin >> end;
	while (end < start) {
		std::cout << "Enter an end year that occurs after or on the start year: ";
		std::cin >> end;
	}
	std::cout << "0: Monday. 1: Tuesday. 2: Wednesday. 3: Thursday. 4: Friday. 5: Saturday. 6: Sunday\n";
	std::cout << "Enter the day you want to find: ";
	std::cin >> day;
	while ((day <0) || (day >6)) {
		std::cout << "0: Monday. 1: Tuesday. 2: Wednesday. 3: Thursday. 4: Friday. 5: Saturday. 6: Sunday\n";
		std::cout << "Enter the number for the day you want to find: ";
	}
	std::cout << numberOfFirstDays(start, end, day) << '\n';
}