#include <iostream>

bool isPrime(int num);
// Returns true if num is prime, false otherwise

int nPrimeNumber(int n);
// Returns the nth prime number

int main(){
	int n;
	std::cout << "Select n: ";
	std::cin >> n;
	std:: cout << "Prime number " << n << " is: " << nPrimeNumber(n);
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
