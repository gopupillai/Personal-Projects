#include <iostream>

int main(){
	int sum=0, limit;
	std::cout << "Enter upper limit: ";
	std::cin >> limit;
	for (int i=0; i<limit; i++){
		if ((i%5 == 0) || (i%3 == 0)){
			sum = sum + i;
		}
	}
	std::cout << sum;
	return 0;
}

