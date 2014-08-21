function sudoku_solver() {
	this.grid = [[[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]],
				 [[0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false], [0, false]]];
}

sudoku_solver.prototype.inputValues = function() {
	for (i=0; i<9; i++) {
		for (j=0; j<9; j++) {
			if (document.getElementById((i*9)+j).value != 0) {
				this.grid[i][j][0] = document.getElementById((i*9)+j).value;
				this.grid[i][j][1] = true;
			}
		}
	}
}

sudoku_solver.prototype.rowCheck = function(row, val) {
	for (i=0; i<9; i++) {
		if (this.grid[row][i][0] == val) {
			return false;
		}
	}
	return true;
}

sudoku_solver.prototype.colCheck = function(col, val) {
	for (i=0; i<9; i++) {
		if (this.grid[i][col][0] == val) {
			return false;
		}
	}
	return true;
}

sudoku_solver.prototype.miniGridCheck = function(row, col, val) {
	for (i=(Math.floor(row/3)*3); i<((Math.floor(row/3)*3)+3); i++) {
		for (j=(Math.floor(col/3)*3); j<((Math.floor(col/3)*3)+3); j++) {
			if (this.grid[i][j][0] == val) {
				return false;
			}
		}
	}
	return true;
}

sudoku_solver.prototype.returnPossibleValue = function(row, col) {
	for (val=1; val<10; val++) {
		if ((this.rowCheck(row, val) === true) && (this.colCheck(col, val) === true) && (this.miniGridCheck(row, col, val) === true) && (val > this.grid[row][col][0])) {
			return val;
		}
	}
	return 0;
}

sudoku_solver.prototype.solveHelper = function(row, col, backTrack) {
	/* 	Below checks preset value in cell and either proceeds forward or backTracks if in backTracking mode */
	if (this.grid[row][col][1] === true) {
		if (backTrack === true) {
			if (col == 0) {
				if (row == 0) {
					alert("No Solution");
					return;
				}
				return this.solveHelper(row-1, 8, true);
			}
			return this.solveHelper(row, col-1, true);
		}
		if (col == 8) {
			if (row == 8) {
				alert("Complete");
				return;
			}
			return this.solveHelper(row+1, 0, false);
		}
		return this.solveHelper(row, col+1, false);
	}
	this.grid[row][col][0] = this.returnPossibleValue(row, col);
	if (this.grid[row][col][0] == 0) {
		if (col == 0) {
			if (row == 0) {
				alert("No Solution");
				return;
			}
			return this.solveHelper(row-1, 8, true);
		}
		return this.solveHelper(row, col-1, true);
	}
	if (col == 8) {
		if (row == 8) {
			alert("Complete");
			return;
		}
		return this.solveHelper(row+1, 0, false);
	}
	return this.solveHelper(row, col+1, false);
}

sudoku_solver.prototype.outputResult = function() {
	for (i=0; i<9; i++) {
		for (j=0; j<9; j++) {
			document.getElementById((i*9)+j).value = this.grid[i][j][0];
		}
	}
}

function solve() {
	var sudoku = new sudoku_solver();
	sudoku.inputValues();
	sudoku.solveHelper(0, 0, false);
	sudoku.outputResult();
}

function reset() {
	for (i=0; i<9; i++) {
		for (j=0; j<9; j++) {
			document.getElementById((i*9)+j).value = 0;
		}
	}
}