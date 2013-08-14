#include "Summation_Functions.h"
#include <iostream>

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

int sumSquareDifference(void){
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;
	return (squareOfSum(n) - sumOfSquares(n));
}

int sumOfEvenFibonacciNumbers(void){
	int a=1, b=2, sum=2, limit; //Starts as 2 due to b value
	std::cout << "Set limit: ";
	std::cin >> limit;
	while ((a<=limit) && (b<=limit)){
		if (a<b){
			a=a+b;
			if (((a%2)==0) && (a<=limit)){
				sum=sum+a;
			}
		} else {
			b=b+a;
			if (((b%2)==0) && (b<=limit)){
				sum=sum+b;
			}
		}
	}
	return sum;
}

int sumOfMultiples3and5(void){
	int sum=0, limit;
	std::cout << "Enter upper limit: ";
	std::cin >> limit;
	for (int i=0; i<limit; i++){
		if ((i%5 == 0) || (i%3 == 0)){
			sum = sum + i;
		}
	}
	return sum;
}
