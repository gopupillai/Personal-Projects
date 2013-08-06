#include <iostream>

// Arranges 8 Queens on a standard chess board such that no two queens attack each other
// Challenge: Attempt recursive solution

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

void outputBoard(bool arr[8][8]){
	std::cout << "---------------------------------" << std::endl;
	for (int row=0; row < 8; row++){
		std::cout << "| ";
		for (int col=0; col < 8; col++){
			if (arr[row][col]){
				std::cout << "Q";
			} else {
				std::cout << " ";
			}
			std::cout << " | ";
		}
		std::cout << std::endl;
		std::cout << "---------------------------------" << std::endl;
	}
}

void initializeBoard(bool (&arr)[8][8]){
	for (int row=0; row < 8; row++){
		for (int col=0; col < 8; col++){
			arr[row][col] = 0;
		}
	}
}

bool okayOnHorizontal(bool arr[8][8], int row, int col){
	for (int i=0; i<8; i++){
		if (arr[row][i] && i!=col){
			return false;
		}
	}
	return true;
}

bool okayOnVertical(bool arr[8][8], int row, int col){
	for (int i=0; i<8; i++){
		if (arr[i][col] && i!=row){
			return false;
		}
	}
	return true;
}

bool okayOnDiagonal(bool arr[8][8], int row, int col){
	for (int i=row, j=col; i<8 && j>=0; i++, j--){
		if (arr[i][j] && i!=row && j!=col){
			return false;
		}
	}
	for (int i=row, j=col; i>=0 && j<8; i--, j++){
		if (arr[i][j] && i!=row && j!=col){
			return false;
		}
	}
	for (int i=row, j=col; j>=0 && i>=0; j--, i--){
		if (arr[i][j] && i!=row && j!=col){
			return false;
		}
	}
	for (int i=row, j=col; j<8 && i<8; i++, j++){
		if (arr[i][j] && i!=row && j!=col){
			return false;
		}
	}
	return true;
}
