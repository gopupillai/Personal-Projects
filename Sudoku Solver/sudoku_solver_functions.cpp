#include "sudoku_solver.h"

void run() {
	sudoku_grid grid;
	grid.fillGrid();
	grid.print();
	grid.solve();
	grid.print();
	return;
}