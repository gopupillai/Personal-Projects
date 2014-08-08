#include "intercept_shield.h"

void inputDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<rocket> &patriots){
	int num_batteries;
	coordinate location, direction;
	double speed;
	std::cin >> safe->location.x >> safe->location.y >> safe->radius;
	std::cin >> location.x >> location.y >> direction.x >> direction.y >> speed;
	incoming_rocket->adjustDetails(location, direction, speed);
	std::cin >> num_batteries;
	for (int i=0; i < num_batteries; i++) {
		std::cin >> location.x >> location.y;
		rocket temp(location);
		patriots.push_back(temp);
	}
	return;
}

void printDetails(safe_zone *safe, rocket *incoming_rocket, std::vector<rocket> patriots) {
	std::cout << "Intercept Shield Details\n------------------------------------------------------------\n";
	safe->print();
	incoming_rocket->printIncomingDetails();
	std::cout << "Patriot Battery Locations\n";
	for (std::vector<rocket>::iterator it = patriots.begin(); it != patriots.end(); ++it) {
		(*it).printPatriotDetails();
	}
	std::cout << "------------------------------------------------------------\n";
	return;
}