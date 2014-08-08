#include "intercept_shield.h"


int main() {

	safe_zone *safe = new safe_zone;
	rocket *incoming_rocket = new rocket;
	std::vector<rocket> patriots;
	inputDetails(safe, incoming_rocket, patriots);
	printDetails(safe, incoming_rocket, patriots);

	return 0;
}