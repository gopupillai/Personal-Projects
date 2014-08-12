#include "intercept_shield.h"


int main() {

	safe_zone *safe = new safe_zone;
	rocket *incoming_rocket = new rocket;
	std::vector<patriot> patriots;
	int launchID = 0;
	bool intercept = false;
	inputDetails(safe, incoming_rocket, patriots);
	printDetails(safe, incoming_rocket, patriots);
	for (std::vector<patriot>::iterator it = patriots.begin(); it != patriots.end(); ++it) {
		(*it).interception_time(incoming_rocket->entry_point(*safe));
		if ((*it).possible_interception(*incoming_rocket)) {
			if (patriots[launchID].return_time_to_entry() >= (*it).return_time_to_entry()) {
				launchID = (*it).returnID();
				intercept = true;
			}
		}
	}
	if (intercept == false) {
		std::cout << "WARNING: NOT POSSIBLE TO INTERCEPT\nEVACUATE AREA: ";
		incoming_rocket->entry_point(*safe).print();
		std::cout << '\n';
		return 0;
	}
	std::cout << "Launch Details\n";
	patriots[launchID].printLaunchDetails(*incoming_rocket);
	std::cout << "--------------------------------------------------------------------------------------------------\n";
	return 0;
}