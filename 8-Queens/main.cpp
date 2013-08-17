#include "Queens_Puzzle.h"

int main(void){
	
	char arr[8][8];
	initializeBoard(arr);
	placeQueen(arr, 5, 5);
	outputBoard(arr);

	
	return 0;
}
