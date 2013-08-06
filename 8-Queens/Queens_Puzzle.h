#ifndef QUEENS_PUZZLE_H_ 
#define QUEENS_PUZZLE_H_ 

#include "Queens_Puzzle.cpp"


// Arranges 8 Queens on a standard chess board such that no two queens attack each other
// Challenge: Attempt recursive solution
// Need to fix, only provides 7 Queen locations

void outputBoard(bool arr[8][8]);
// Outputs chess board with positions of queens

void initializeBoard(bool (&arr)[8][8]);
// Initializes chess board with all squares as false

bool okayOnHorizontal(bool arr[8][8], int row, int col);
// Returns true if queen can be placed without conflict on horizontal, else false

bool okayOnVertical(bool arr[8][8], int row, int col);
// Returns true if queen can be placed without conflict on vertical, else false

bool okayOnDiagonal(bool arr[8][8], int row, int col);
// Returns true if queen can be placed without conflict on diagonal, else false

#endif
