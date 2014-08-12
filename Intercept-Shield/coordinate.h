#ifndef COORDINATE_H_
#define COORDINATE_H_

struct coordinate {

	double x, y, z;

	coordinate(double a, double b, double c) {
		x = a;
		y = b;
		z = c;
	}

	coordinate() {
		x = 0;
		y = 0;
		z = 0;
	}

	void print() {
		std::cout << '(' << x << ", " << y << ", " << z << ')';
	}

};


#endif