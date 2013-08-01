#include <iostream>
#include <cmath>

bool isPrime(int num);
// Returns true if num is a prime, false otherwise

unsigned long long summationOfPrimes(int n);
// Returns the sum of all primes below n

int main(void){
	
	int n;
	std::cout << "Enter n: ";
	std::cin >> n;
	std::cout << "Sum of all primes below " << n << " is: " << summationOfPrimes(n);
	
	return 0;
}

bool isPrime(int num){
	for (int i=2; i <= (num/2); i++){
		if ((num%i)==0){
			return false;
		}
	}
	return true;
}

unsigned long long summationOfPrimes(int n){
	unsigned long long sum=0;
	for (int i=2; i < n; i++){
		if (isPrime(i)){
			sum = sum + i;
		}
		if (sum > 1000000000){
			std::cout << sum;
		}
	}
	return sum;
}
