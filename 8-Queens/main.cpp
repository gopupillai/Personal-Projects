#include "Queens_Puzzle.h"

int main(void){
	
	char arr[8][8];
	
	initializeBoard(arr);
	placeQueen(arr, 0, 0);
	for (int i=1; i<7; i++){
		changeBestSlot(arr);
	}
	outputBoard(arr);
	
	
	return 0;
}
