#include <iostream>

int smallestMultiple(int n);
// Returns the multiple that is the smallest consisting of consecutive factors 1 to n

int main(){
	int n;
	std::cout << "Select n: ";
	std::cin >> n;
	std::cout << "The multiple that is the smallest consisting of consecutive factors 1 to " << n << " is " << smallestMultiple(n);
	return 0;
}

int smallestMultiple(int n){
	int multiple=0;
	for (int temp=2; multiple==0; temp++){
		for (int divisor=2; divisor <= n; divisor++){
			if ((temp%divisor)!=0){
				multiple=0;
				break;
			} else {
				multiple=temp;
			}
		}
	}
	return multiple;
}
