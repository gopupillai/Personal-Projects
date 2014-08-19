#ifndef CELL_H_
#define CELL_H_


struct cell {
	bool queenPlaced;
	bool currentQueen;
	bool conflict;
	cell() {
		queenPlaced = false;
		conflict = false;
		currentQueen = false;
	}
};


#endif