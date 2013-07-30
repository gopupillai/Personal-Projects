#include <iostream>

bool checkPalindrome(int num);
// Returns true if palindrome, false otherwise

bool twoThreeDigits(int num);
// Returns true iff has two 3-digit factors

int main(){
	int current=0;
	for (int num=800000; num<1000000; num++){
		if (checkPalindrome(num) && twoThreeDigits(num)){
			current=num;
		}
	}
	std::cout << current;
	return 0;
}

bool checkPalindrome(int num){
	int temp=num, reverse=0;
	while (temp>10){
		reverse=reverse*10+(temp%10);
		temp=temp/10;
	}
	reverse=reverse*10+temp;
	return (reverse==num);
}

bool twoThreeDigits(int num){
	for (int check=100; check<1000; check++){
		int temp=num;
		if ((temp/check)>=100 && (temp/check)<1000 && (temp%check)==0){
			return true;
		}
	}
	return false;
}
	
