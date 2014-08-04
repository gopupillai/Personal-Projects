#ifndef CELL_H_
#define CELL_H_


struct cell {
	int currentValue;
	bool preset;
	cell() {
		currentValue=0;
		preset=false;
	}
};


#endif