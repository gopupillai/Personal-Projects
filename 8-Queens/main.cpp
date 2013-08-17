#include "Queens_Puzzle.h"

int main(void){
	
	char arr[8][8];
	int slots=0;
	initializeBoard(arr);
	placeQueen(arr, 7, 0);
	slots=slotsConsumed(arr, 0, 1);
	std::cout << slots << std::endl;
	outputBoard(arr);

	
	return 0;
}
