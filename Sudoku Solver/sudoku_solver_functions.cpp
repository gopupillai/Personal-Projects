#include "sudoku_solver.h"

void run() {
	sudoku_grid grid;
	grid.fillGrid();
	grid.solve();
	grid.print();
	return;
}