#include "intercept_shield.h"

void inputDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<patriot> &patriots){
	int num_batteries, id;
	coordinate location, direction;
	double speed;
	std::cin >> safe->location.x >> safe->location.y >> safe->location.z >> safe->radius;
	std::cin >> location.x >> location.y >> location.z >> direction.x >> direction.y >> direction.z >> speed;
	incoming_rocket->adjustDetails(location, direction, speed);
	std::cin >> num_batteries;
	for (int i=0; i < num_batteries; i++) {
		std::cin >> id;
		std::cin >> location.x >> location.y >> location.z;
		patriot temp(location, id);
		patriots.push_back(temp);
	}
	return;
}

void printDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<patriot> patriots) {
	std::cout << "Intercept Shield Details\n--------------------------------------------------------------------------------------------------\n";
	safe->print();
	incoming_rocket->printIncomingDetails(*safe);
	std::cout << "Patriot Battery Locations\n";
	for (std::vector<patriot>::iterator it = patriots.begin(); it != patriots.end(); ++it) {
		(*it).printPatriotDetails();
	}
	std::cout << "--------------------------------------------------------------------------------------------------\n";
	return;
}

void run() {
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
		return;
	}
	std::cout << "Launch Details\n";
	patriots[launchID].printLaunchDetails(*incoming_rocket);
	std::cout << "--------------------------------------------------------------------------------------------------\n";
	return;
}

