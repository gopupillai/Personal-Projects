#ifndef ROCKET_H_
#define ROCKET_H_

class rocket {

	public:

		rocket();
		// Basic constructor
		rocket(coordinate location, coordinate incoming_direction, double speed);
		// Constructor for incoming rocket
		void adjustDetails(coordinate location, coordinate incoming_direction, double speed);
		// Adjusts the details of rocket -> Used for incoming rocket
		coordinate entry_point(safe_zone safe);
		// Returns the point of entry of rocket into safe zone		
		void printIncomingDetails(safe_zone safe);
		// Outputs the details of incoming rocket
		double return_time_to_entry();
		// Returns the time to entry
		


	protected:

		coordinate coords;
		coordinate direction;
		double velocity; // In meters per second
		double time_to_entry;
};

rocket::rocket() {
	coords.x = 0;
	coords.y = 0;
	coords.z = 0;
	direction.x = 0;
	direction.y = 0;
	direction.z = 0;
	velocity = 0;
	time_to_entry = 0;
}

rocket::rocket(coordinate location, coordinate incoming_direction, double speed) {
	coords = location;
	direction = incoming_direction;
	velocity = speed;
	time_to_entry = 0;
}

void rocket::adjustDetails(coordinate location, coordinate incoming_direction, double speed) {
	coords = location;
	direction = incoming_direction;
	velocity = speed;
}

coordinate rocket::entry_point(safe_zone safe) {
	coordinate entry;
	double a, b, c;
	a = (direction.x*direction.x) + (direction.y*direction.y) + (direction.z*direction.z);
	b = (2*coords.x*direction.x) + (2*direction.y*coords.y) + (2*direction.z*coords.z) - (2*direction.x*safe.location.x) - (2*direction.y*safe.location.y) - (2*direction.z*safe.location.z);
	c = (coords.x*coords.x) + (coords.y*coords.y) + (coords.z*coords.z) - (2*direction.x*safe.location.x) - (2*direction.y*safe.location.y) - (2*direction.z*safe.location.z);
	c = c + (safe.location.x*safe.location.x) + (safe.location.y*safe.location.y) + (safe.location.z*safe.location.z) - (safe.radius*safe.radius);
	if ((b*b) - (4*a*c) < 0) {
		std::cout << "Incoming rocket does not enter safe zone\n";
		return entry;
	}
	if ((-b+sqrt((b*b)-(4*a*c)))/(2*a) <= ((-b-sqrt((b*b)-(4*a*c)))/(2*a))) {
		entry.x = coords.x + ((-b+sqrt((b*b)-(4*a*c)))/(2*a)*direction.x);
		entry.y = coords.y + ((-b+sqrt((b*b)-(4*a*c)))/(2*a)*direction.y);
		entry.z = coords.z + ((-b+sqrt((b*b)-(4*a*c)))/(2*a)*direction.z);
	} else {
		entry.x = coords.x + ((-b-sqrt((b*b)-(4*a*c)))/(2*a)*direction.x);
		entry.y = coords.y + ((-b-sqrt((b*b)-(4*a*c)))/(2*a)*direction.y);
		entry.z = coords.z + ((-b-sqrt((b*b)-(4*a*c)))/(2*a)*direction.z);
	}
	time_to_entry = sqrt(((coords.x - entry.x)*(coords.x - entry.x) + (coords.y - entry.y)*(coords.y - entry.y) + (coords.z - entry.z)*(coords.z - entry.z)))/velocity;
	return entry;
}

void rocket::printIncomingDetails(safe_zone safe) {
	std::cout << "Incoming Rocket\nLocation: (" << coords.x << ", " << coords.y << ", " << coords.z << ")	Direction: (" << direction.x;
	std::cout << ", " << direction.y << ", " << direction.z << ")	Speed: " << velocity << "m/s\n";
	std::cout << "Entry Point: ";
	this->entry_point(safe).print();
	std::cout << "\n--------------------------------------------------------------------------------------------------\n";
}

double rocket::return_time_to_entry() {
	return time_to_entry;
}




#endif