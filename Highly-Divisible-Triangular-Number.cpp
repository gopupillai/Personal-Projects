#include <iostream>
// Brute Force Algorithm
// Finds a highly divisible triangular number:
// A triangle number is: 1 + 2 = 3, 1 + 2 + 3 = 6 <- Summations of consecutive numbers from 1.
// Permits user to enter the number of factors desired within triangular number
// Returns the first triangle number exceeding the number of factors stated
// Note: Since it's a brute force algorithm, computing time is high for large number of factors (i.e. 500)

int numDivisors(int num);
// Returns the number of divisors within num
// Note: Only works for numbers greater than 4

bool isTriangleNumber(int num);
// Returns true if num is a triangle number, else false

int highlyDivisible(int factors);
// Provides the first triangle number with number of divisors greater than the factors parameter
// Returns that triangle number

int main(void){
	
	std::cout << highlyDivisible(500);
	return 0;
}

int numDivisors(int num){
	int temp, numDivisors=0;
	for (int i=1; i < (num/2); i++){
		temp = num/i;
		if (num%i == 0){
			if (temp > i){
				numDivisors = numDivisors + 2;
			}
			if (temp == i){
				numDivisors++;
			}
		}
	}
	return numDivisors;
}

bool isTriangleNumber(int num){
	int sum=1, start=1;
	while (sum+start+1 <= num){
		start++;
		sum = sum + start;
	}
	if (sum == num){
		return true;
	}
	return false;
}

int highlyDivisible(int factors){
	int num, divisors=0;
	for (int i=1; divisors <= factors; i++){
		if (isTriangleNumber(i)){
			divisors = numDivisors(i);
			num = i;
			if (num > 1000000){
				std::cout << num << "***";
			}
		}
	}
	return num;
}
