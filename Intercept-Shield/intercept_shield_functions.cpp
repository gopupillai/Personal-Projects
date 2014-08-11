#include "intercept_shield.h"

void inputDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<patriot> &patriots){
	int num_batteries, id;
	coordinate location, direction;
	double speed;
	std::cin >> safe->location.x >> safe->location.y >> safe->radius;
	std::cin >> location.x >> location.y >> direction.x >> direction.y >> speed;
	incoming_rocket->adjustDetails(location, direction, speed);
	std::cin >> num_batteries;
	for (int i=0; i < num_batteries; i++) {
		std::cin >> id;
		std::cin >> location.x >> location.y;
		patriot temp(location, id);
		patriots.push_back(temp);
	}
	return;
}

void printDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<patriot> patriots) {
	std::cout << "Intercept Shield Details\n------------------------------------------------------------\n";
	safe->print();
	incoming_rocket->printIncomingDetails();
	std::cout << "Patriot Battery Locations\n";
	for (std::vector<patriot>::iterator it = patriots.begin(); it != patriots.end(); ++it) {
		(*it).printPatriotDetails();
	}
	std::cout << "------------------------------------------------------------\n";
	return;
}

