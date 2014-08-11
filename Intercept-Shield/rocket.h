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
		void printIncomingDetails();
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
	direction.x = 0;
	direction.y = 0;
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
	double c, m, a_1, b_1, c_1, x_1, x_2;
	m = direction.x / direction.y;
	std::cout << "m: " << m << '\n';
	c = coords.y - (m * coords.x);
	a_1 = 1 + (m*m);
	b_1 = (-2*safe.location.x) + (2*c*m) - (2*m*safe.location.y);
	c_1 = (safe.location.x*safe.location.x) + (c*c) - (2*c*safe.location.y) + (safe.location.y*safe.location.y) - (safe.radius*safe.radius);
	x_1 = (-b_1 + sqrt((b_1*b_1) - (4*a_1*c_1)))/(2*a_1);
	x_2 = (-b_1 - sqrt((b_1*b_1) - (4*a_1*c_1)))/(2*a_1);
	if (abs(coords.x - x_1) <= abs(coords.x - x_2)) {
		entry.x = x_1;
	} else {
		entry.x = x_2;
	}
	entry.y = m*entry.x + c;
	time_to_entry = (sqrt(((coords.x - entry.x)*(coords.x - entry.x) + (coords.y - entry.y)*(coords.y - entry.y))))/velocity;
	return entry;
}

void rocket::printIncomingDetails() {
	std::cout << "Incoming Rocket\nLocation: (" << coords.x << ", " << coords.y << ")	Direction: (" << direction.x;
	std::cout << ", " << direction.y << ")	Speed: " << velocity << "\n------------------------------------------------------------\n";
}

double rocket::return_time_to_entry() {
	return time_to_entry;
}




#endif