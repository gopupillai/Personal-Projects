#ifndef QUEENS_GRID_H_
#define QUEENS_GRID_H_

class queens_grid {

	public:

		queens_grid();
		// Constructor
		void printBoard();
		// Prints the board. Queens marked with Q
		// Conflicting paths marked with X
		void setQueen(int row, int col);
		// Sets a Queen at row, col coordinates
		// Sets conflict for all squares
		


	private:
		cell grid[8][8];
		int queenCount;



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
			if (grid[i][j].queenPlaced == true) {
				std::cout << 'Q';
			} else if (grid[i][j].conflict == true) {
				std::cout << 'X';
			} else {
				std::cout << ' ';
			}
		}
		std::cout << " |\n	-----------------------------------\n";
	}
}

void queens_grid::setQueen(int row, int col) {
	grid[row][col].queenPlaced = true;
	// Setting horizontal conflict
	for (int i=0; i < 8; i++) {
		if (i != col) {
			grid[row][i].conflict = true;
		}
	}
	// Setting vertical conflict
	for (int i=0; i < 8; i++) {
		if (i != row) {
			grid[i][col].conflict = true;
		}
	}
	// Setting right diagonal
	for (int i=row+1, j=col+1; (i < 8) && (j < 8); i++, j++) {
		grid[i][j].conflict = true;
	}
	for (int i=row-1, j=col-1; (i >= 0) && (j >= 0); i--, j--) {
		grid[i][j].conflict = true;
	}
	// Setting left diagonal
	for (int i=row+1, j=col-1; (i < 8) && (j >= 0); i++, j--) {
		grid[i][j].conflict = true;
	}
	for (int i=row-1, j=col+1; (i >= 0) && (j < 8); i--, j++) {
		grid[i][j].conflict = true;
	}

}



#endif
