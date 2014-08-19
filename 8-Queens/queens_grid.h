#ifndef QUEENS_GRID_H_
#define QUEENS_GRID_H_

class queens_grid {

	public:

		queens_grid();
		// Constructor
		void printBoard();
		// Prints the board. Queens marked with Q
		// Conflicting paths marked with X
		void completeGrid();
		// Completes the 8-Queens problem
		


	private:
		cell grid[8][8];
		int queenCount;
		void setConflict(bool conflictValue, int row, int col);
		// Sets conflict as true or false depending on conflictValue
		// row, col is location of queen being set or removed
		void setQueen(int row, int col);
		// Sets a Queen at row, col coordinates
		// Sets conflict for all squares
		void removeQueen(int row, int col);
		// Removes queen from row, col and adjusts conflict
		int returnNextSlot();
		// Returns the next available slot for queen
		// If returns -1 then no available slot
		void setConflicts(std::vector<int> queenPositions);
		// Resets the conflicts of all prior queens
		// Required since removeQueen removes conflicts from positions that other queens conflict

};

queens_grid::queens_grid() {
	queenCount = 0;
}

void queens_grid::printBoard() {
	std::cout << "Current Board:\n";
	std::cout << "	  | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n";
	std::cout << "	-----------------------------------\n";
	for (int i=0; i < 8; i++) {
		std::cout << "	" << i;
		for (int j=0; j < 8; j++) {
			std::cout << " | ";
			if (grid[i][j].currentQueen == true) {
				std::cout << 'Q';
			} else if (grid[i][j].conflict == true) {
				std::cout << 'X';
			} else if (grid[i][j].queenPlaced == true) {
				std::cout << 'T';
			} else {
				std::cout << ' ';
			}
		}
		std::cout << " |\n	-----------------------------------\n";
	}
}

void queens_grid::setConflict(bool conflictValue, int row, int col) {
	// Setting horizontal conflict
	for (int i=0; i < 8; i++) {
		if (i != col) {
			grid[row][i].conflict = conflictValue;
		}
	}
	// Setting vertical conflict
	for (int i=0; i < 8; i++) {
		if (i != row) {
			grid[i][col].conflict = conflictValue;
		}
	}
	// Setting right diagonal
	for (int i=row+1, j=col+1; (i < 8) && (j < 8); i++, j++) {
		grid[i][j].conflict = conflictValue;
	}
	for (int i=row-1, j=col-1; (i >= 0) && (j >= 0); i--, j--) {
		grid[i][j].conflict = conflictValue;
	}
	// Setting left diagonal
	for (int i=row+1, j=col-1; (i < 8) && (j >= 0); i++, j--) {
		grid[i][j].conflict = conflictValue;
	}
	for (int i=row-1, j=col+1; (i >= 0) && (j < 8); i--, j++) {
		grid[i][j].conflict = conflictValue;
	}
}

void queens_grid::setQueen(int row, int col) {
	grid[row][col].queenPlaced = true;
	grid[row][col].currentQueen = true;
	queenCount++;
	setConflict(true, row, col);
}

void queens_grid::removeQueen(int row, int col) {
	queenCount--;
	grid[row][col].currentQueen = false;
	setConflict(false, row, col);
}

int queens_grid::returnNextSlot() {
	for (int i=0; i < 8; i++) {
		for (int j=0; j < 8; j++) {
			if (grid[i][j].queenPlaced == false && grid[i][j].conflict == false) {
				return ((8*i) + j);
			}
		}
	}
	return -1;
}

void queens_grid::setConflicts(std::vector<int> queenPositions) {
	for (std::vector<int>::iterator it = queenPositions.begin(); it != queenPositions.end(); ++it) {
		setConflict(true, (*it)/8, (*it)%8);
	}
}

void queens_grid::completeGrid() {
	std::vector<int> queenPositions;
	int priorQueen = -1;
	while (queenCount != 8) {
		int temp = returnNextSlot();
		// Checking if impossible to place next queen -> backtrack
		if (temp == -1) {
			if (priorQueen != -1) {
				grid[priorQueen/8][priorQueen%8].queenPlaced = false;
			}
			removeQueen(queenPositions.back()/8, queenPositions.back()%8);
			priorQueen = queenPositions.back();
			queenPositions.pop_back();
			setConflicts(queenPositions);
		} else {
			queenPositions.push_back(temp);
			setQueen(queenPositions.back()/8, queenPositions.back()%8);
		}
	}
}



#endif
