#include "Queens_Puzzle.h"
#include <iostream>


void outputBoard(char arr[8][8]){
	std::cout << "---------------------------------" << std::endl;
	for (int row=0; row < 8; row++){
		std::cout << "| ";
		for (int col=0; col < 8; col++){
			std::cout << arr[row][col];
			std::cout << " | ";
		}
		std::cout << std::endl;
		std::cout << "---------------------------------" << std::endl;
	}
}

void initializeBoard(char (&arr)[8][8]){
	for (int row=0; row < 8; row++){
		for (int col=0; col < 8; col++){
			arr[row][col] = ' ';
		}
	}
}

void placeQueen(char (&arr)[8][8], int row, int col){
	arr[row][col]='Q';
	for (int i=0; i<8; i++){
		if (i!=col && arr[row][i]==' '){
			arr[row][i]='X';
		}
	}
	for (int i=0; i<8; i++){
		if (i!=row && arr[i][col]==' '){
			arr[i][col]='X';
		}
	}
	for (int i=row, j=col; i<8 && j<8; i++, j++){
		if (i!=row && arr[i][j]==' '){
			arr[i][j]='X';
		}
	}
	for (int i=row, j=col; i>=0 && j>=0; i--, j--){
		if (i!=row && arr[i][j]==' '){
			arr[i][j]='X';
		}
	}
	for (int i=row, j=col; i<8 && j>=0; i++, j--){
		if (i!=row && arr[i][j]==' '){
			arr[i][j]='X';
		}
	}
	for (int i=row, j=col; i>=0 && j<8; i--, j++){
		if (i!=row && arr[i][j]==' '){
			arr[i][j]='X';
		}
	}
}

int slotsConsumed(char arr[8][8], int row, int col){
	int slotsConsumed=0;
	for (int i=0; i<8; i++){
		if (arr[row][i]==' ' && i!=col){
			slotsConsumed++;
		}
	}
	for (int i=0; i<8; i++){
		if (arr[i][col]==' ' && i!=row){
			slotsConsumed++;
		}
	}
	for (int i=row, j=col; i<8 && j<8; i++, j++){
		if (arr[i][j]==' ' && i!=row){
			slotsConsumed++;
		}
	}
	for (int i=row, j=col; i>=0 && j>=0; i--, j--){
		if (arr[i][j]==' ' && i!=row){
			slotsConsumed++;
		}
	}
	for (int i=row, j=col; i<8 && j>=0; i++, j--){
		if (arr[i][j]==' ' && i!=row){
			slotsConsumed++;
		}
	}
	for (int i=row, j=col; i>=0 && j<8; i--, j++){
		if (arr[i][j]==' ' && i!=row){
			slotsConsumed++;
		}
	}
	if (slotsConsumed==0){
		return 100;
	} else {
		return (slotsConsumed+1);
	}
}

int numQueens(char arr[8][8]){
	int numQueens=0;
	for (int i=0; i<8; i++){
		for (int j=0; j<8; j++){
			if (arr[i][j]=='Q'){
				numQueens++;
			}
		}
	}
	return numQueens;
}

void changeBestSlot(char (&arr)[8][8]){
	int current=100, row, col;
	for (int i=0; i<8; i++){
		for (int j=0; j<8; j++){
			if (current > slotsConsumed(arr, i, j) && arr[i][j]==' '){
				current = slotsConsumed(arr, i, j);
				row = i;
				col = j;
			}
		}
	}
	placeQueen(arr, row, col);
				
}
	
	
	
	
	
	
	
	
	
	


