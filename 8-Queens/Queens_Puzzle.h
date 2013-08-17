#ifndef QUEENS_PUZZLE_H_ 
#define QUEENS_PUZZLE_H_ 

#include "Queens_Puzzle.cpp"


// Arranges 8 Queens on a standard chess board such that no two queens attack each other
// Challenge: Attempt recursive solution
// Need to fix, only provides 7 Queen locations

void outputBoard(char arr[8][8]);
// Outputs chess board with positions of queens

void initializeBoard(char (&arr)[8][8]);
// Initializes chess board with all squares as false

void placeQueen(char (&arr)[8][8], int row, int col);
// Places queen at location [row][col]
// Sets all corresponding squares of movement of placed queen as true

int slotsConsumed(char (&arr)[8][8], int row, int col);
// Returns the number of slots that will get conflicted if a queen is placed at this specific slot



#endif
