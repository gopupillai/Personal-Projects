#include <iostream>

int sumOfSquares(int n);
// Returns the sum of the first n squared numbers

int squareOfSum(int n);
// Returns the squared sum of the first n numbers

int main(){
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "Sum-Square Difference is: " << (squareOfSum(n) - sumOfSquares(n));
	return 0;
}

int sumOfSquares(int n){
	int sum=0;
	for (int num=1; num <= n; num++){
		sum = sum + (num*num);
	}
	return sum;
}

int squareOfSum(int n){
	int sum=0;
	for (int num=1; num <= n; num++){
		sum = sum + num;
	}
	sum = sum*sum;
	return sum;
}
