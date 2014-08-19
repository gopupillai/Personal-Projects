#Sudoku Solver

##Description

Solves any Sudoku. Takes in input from user of preset cells of a Sudoku.
Program then outputs the completed Sudoku solution.

##Compiling

Once within the appropriate directory, enter:

g++ sudoku_solver.cpp -o sudoku_solver -Wall -Werror

##Running

After compiling, run:

./sudoku_solver

Fill in the preset values using indexing for rows and columns:

	Column:			 0   1   2   3   4   5   6   7   8
				  =======================================
	Row:		0 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				1 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				2 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				3 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				4 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				5 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				6 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				7 ||   |   |   |   |   |   |   |   |   ||
				  ||-----------------------------------||
				8 ||   |   |   |   |   |   |   |   |   ||
				  =======================================

