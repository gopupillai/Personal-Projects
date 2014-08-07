#ifndef ROCKET_H_
#define ROCKET_H_

class rocket {

	public:

		rocket(coordinate location, coordinate incoming_direction, double speed);
		// Constructor for incoming rocket
		rocket(coordinate location);
		// Constructor for interception rocket
		coordinate entry_point(safe_zone safe);
		// Returns the point of entry of rocket into safe zone
		void interception_direction(coordinate entry);
		// Outputs the coordinates that interception rocket must be fired at
		// Outputs message if not possible to intercept before entry to safe zone
		// If not possible to intercept, outputs area of entry as warning


	private:

		coordinate coords;
		coordinate direction;
		double velocity; // In meters per second
		double time_to_entry;
};

rocket::rocket(coordinate location, coordinate incoming_direction, double speed) {
	coords = location;
	direction = incoming_direction;
	velocity = speed;
	time_to_entry = 0;
}

rocket::rocket(coordinate location) {
	coords = location;
	velocity = 1710;
	time_to_entry = 0;
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
	c_1 = abs(c_1);
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

void rocket::interception_direction(coordinate entry){
	direction.x = coords.x - entry.x;
	direction.y = coords.y - entry.y;
	time_to_entry = (sqrt((direction.x*direction.x) + (direction.y*direction.y)))/velocity;
}



#endif