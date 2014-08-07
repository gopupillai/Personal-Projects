#ifndef ROCKET_H_
#define ROCKET_H_

class rocket {

	public:

		rocket(coordinate location, coordinate incoming_direction, double speed);
		// Constructor for incoming rocket
		rocket(coordinate location, double speed);
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
		double velocity;

rocket::rocket(coordinate location, coordinate direction, double speed) {
	coords = location;
	direction = incoming_direction;
	velocity = speed;
}

rocket::rocket(coordinate location, double speed) {
	coords = location;
	velocity = speed;
}

coordinate rocket::entry_point(safe_zone safe) {
	coordinate entry;
	
}


};


#endif