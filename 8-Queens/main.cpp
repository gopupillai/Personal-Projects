#include "Queens_Puzzle.h"

int main(void){
	
	bool arr[8][8];
	initializeBoard(arr);
	arr[0][3]=1;
	for (int col=0; col < 8; col++){
		for (int row=0; row < 8; row++){
			if (okayOnHorizontal(arr, row, col) && okayOnVertical(arr, row, col) && okayOnDiagonal(arr, row, col)){
				arr[row][col]=1;
			}
		}
	}
	outputBoard(arr);
	
	return 0;
}
