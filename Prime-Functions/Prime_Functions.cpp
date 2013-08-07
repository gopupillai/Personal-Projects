#include "Prime_Functions.h"
#include <iostream>

bool isPrime(int num){
	for (int i=2; i <= (num/2); i++){
		if ((num%i)==0){
			return false;
		}
	}
	return true;
}

int nPrimeNumber(int n){
	int count=0, current=0;
	for (int i=2; count < n; i++){
		if (isPrime(i)){
			count++;
			current=i;
		}
	}
	return current;
}

void largestPrimeFactor(void){
	long int num, largest=0;
	std::cout << "Enter num: ";
	std::cin >> num;
	for (int i=(num/2); (i>2) && (largest==0); i--){
		if ((num%i)==0 && isPrime(i)==true){
			largest=i;
		}
	}
	std::cout << largest;
}

unsigned long long summationOfPrimes(int n){
	unsigned long long sum=0;
	for (int i=2; i < n; i++){
		if (isPrime(i)){
			sum = sum + i;
		}
	}
	return sum;
}
