#include "intercept_shield.h"


int main() {

	coordinate safe_location(0,0), rocket_coord(5, 5), rocket_direction(5, 4), entry;
	safe_zone safe(safe_location, 1);
	rocket incoming_rocket(rocket_coord, rocket_direction, 100);
	entry = incoming_rocket.entry_point(safe);
	entry.print();
	std::cout << '\n';

	return 0;
}