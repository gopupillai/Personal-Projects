#ifndef PATRIOT_H_
#define PATRIOT_H_

class patriot: public rocket {

	public:


		patriot(coordinate location, int ID);
		// Constructor for interception rocket
		void interception_time(coordinate entry);
		// Sets the interception time for patriot
		void printPatriotDetails();
		// Outputs the details of patriot
		bool possible_interception(rocket incoming);
		// Returnts true if the patriot time to entry point is less than the incoming rocket
		double launch_time(rocket incoming);
		// Returns the seconds from start of algorithm till when patriot must be fired to intercept with rocket at entry point to safe zone
		int returnID();
		// Returns the ID of the patriot battery
		void printLaunchDetails(rocket incoming);
		// Prints the direction, speed and time of launch of patriot

	private:
		int id;

};

patriot::patriot(coordinate location, int ID) {
	coords = location;
	velocity = 1710;
	time_to_entry = 0;
	id = ID;
}

void patriot::interception_time(coordinate entry){
	this->direction.x = entry.x - this->coords.x;
	this->direction.y = entry.y - this->coords.y;
	time_to_entry = (sqrt((direction.x*direction.x) + (direction.y*direction.y)))/velocity;
}

void patriot::printPatriotDetails() {
	std::cout << "ID: " << id << "	";
	std::cout << "Location: (" << coords.x << ", " << coords.y << ")\n";
}

bool patriot::possible_interception(rocket incoming) {
	if (time_to_entry <= incoming.return_time_to_entry()) {
		return true;
	}
	return false;
}

double patriot::launch_time(rocket incoming) {
	return (incoming.return_time_to_entry() - time_to_entry);
}

int patriot::returnID() {
	return id;
}

void patriot::printLaunchDetails(rocket incoming) {
	this->printPatriotDetails();
	std::cout << "Launch Direction: (" << this->direction.x << ", " << this->direction.y << ")	Time Till Launch: ";
	std::cout << this->launch_time(incoming) << "s 	Speed: " << velocity << "m/s\n";
}

#endif