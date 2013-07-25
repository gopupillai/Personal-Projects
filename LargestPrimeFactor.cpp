#include <iostream>
//Note: Only works for numbers greater than 3

bool isPrimeNumber(long int num);
// Returns true if num is a prime number, false otherwise



int main(){
	long int num, largest=0;
	std::cout << "Enter num: ";
	std::cin >> num;
	for (int i=(num/2); (i>2) && (largest==0); i--){
		if ((num%i)==0 && isPrimeNumber(i)==true){
			largest=i;
		}
	}
	std::cout << largest;
	return 0;
}

bool isPrimeNumber(long int num){
	for (int i=2; i<=(num/2); i++){
		if (num%i==0){
			return false;
		}
	}
	return true;
}


	
