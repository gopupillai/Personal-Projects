#include "Special_Unique_Number_Functions.h"
#include <iostream>

int numDivisors(int num){
	int temp, numDivisors=0;
	for (int i=1; i < (num/2); i++){
		temp = num/i;
		if (num%i == 0){
			if (temp > i){
				numDivisors = numDivisors + 2;
			}
			if (temp == i){
				numDivisors++;
			}
		}
	}
	return numDivisors;
}

bool isTriangleNumber(int num){
	int sum=1, start=1;
	while (sum+start+1 <= num){
		start++;
		sum = sum + start;
	}
	if (sum == num){
		return true;
	}
	return false;
}

int highlyDivisible(int factors){
	int num, divisors=0;
	for (int i=1; divisors <= factors; i++){
		if (isTriangleNumber(i)){
			divisors = numDivisors(i);
			num = i;
			if (num > 1000000){
				std::cout << num << "***";
			}
		}
	}
	return num;
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

void smallestMultipleOfNConsecutive(void){
	int n;
	std::cout << "Select n: ";
	std::cin >> n;
	std::cout << "The multiple that is the smallest consisting of consecutive factors 1 to " << n << " is " << smallestMultiple(n);
}

int specialPythagoreanTriplet(void){
	int a, b, c=335; // Found minimum value for c through some math
	bool end=false;
	while (end==false){
		for (int i = 1, v = (999-c); v > i; v--, i++){
			if ((i*i) + (v*v) == (c*c)){
				a = i;
				b = v;
				end = true;
				break;
			}
		}
		c++;
	}
	c--;
	std::cout << "a: " << a << " b: " << b << " c: " << c;
	return (a*b*c);
}
