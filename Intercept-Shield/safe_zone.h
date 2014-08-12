#ifndef SAFE_ZONE_H_
#define SAFE_ZONE_H_

struct safe_zone {
	coordinate location;
	double radius;
	safe_zone(coordinate position, double range) {
		location = position;
		radius = range;
	}
	safe_zone() {
		radius = 0;
	}
	void print() {
		std::cout << "Safe Zone\nLocation: (" << location.x << ", " << location.y << ", " << location.z << ")	Radius: " << radius;
		std::cout << "\n--------------------------------------------------------------------------------------------------\n";
	}
};





#endif
