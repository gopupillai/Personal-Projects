#ifndef COORDINATE_H_
#define COORDINATE_H_

struct coordinate {

	double x, y;

	coordinate(double a, double b) {
		x = a;
		y = b;
	}

	coordinate() {
		x = 0;
		y = 0;
	}

	void print() {
		std::cout << '(' << x << ", " << y << ')';
	}

};


#endif