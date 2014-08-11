#ifndef PATRIOT_H_
#define PATRIOT_H_

class patriot: protected rocket {

	public:


		patriot(coordinate location);
		// Constructor for interception rocket
		void interception_time(coordinate entry);
		// Sets the interception time for patriot
		void printPatriotDetails();
		// Outputs the details of patriot
		bool possible_interception(rocket incoming);
		// Returnts true if the patriot time to entry point is less than the incoming rocket
		double launch_time(rocket incoming);
		// Returns the seconds from start of algorithm till when patriot must be fired to intercept with rocket at entry point to safe zone

};

patriot::patriot(coordinate location) {
	coords = location;
	velocity = 1710;
	time_to_entry = 0;
}

void patriot::interception_time(coordinate entry){
	direction.x = coords.x - entry.x;
	direction.y = coords.y - entry.y;
	time_to_entry = (sqrt((direction.x*direction.x) + (direction.y*direction.y)))/velocity;
}

void patriot::printPatriotDetails() {
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

#endif