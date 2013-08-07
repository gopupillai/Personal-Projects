#include "Prime_Functions.h"

int main(void){
	int n;
	largestPrimeFactor();
	std::cout << std::endl << "Enter n: ";
	std::cin >> n;
	std::cout << "Sum of all Primes up to " << n << " is: " << summationOfPrimes(n) << std::endl;
	std::cout << n << "th Prime Number is: " << nPrimeNumber(n);
	return 0;
}
