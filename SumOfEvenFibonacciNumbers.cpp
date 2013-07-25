#include <iostream>



int main(){
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
	std::cout << sum;
	return 0;	
}

