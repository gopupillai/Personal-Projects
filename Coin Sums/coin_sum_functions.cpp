#include "coin_sum.h"

int returnUpTo5p(int sum) {
	int n = 1 + (sum/2), temp = sum;
	while (temp >= 5) {
		temp = temp - 5;
		n = n + (temp/2) + 1;
	}
	return n;
}

int returnUpTo10p(int sum) {
	int n = returnUpTo5p(sum), temp = sum;
	while (temp >= 10) {
		temp = temp - 10;
		n = n + returnUpTo5p(temp);
	}
	return n;
}

int returnUpTo20p(int sum) {
	int n = returnUpTo10p(sum), temp = sum;
	while (temp >= 20) {
		temp = temp - 20;
		n = n + returnUpTo10p(temp);
	}
	return n;
}

int returnUpTo50p(int sum) {
	int n = returnUpTo20p(sum), temp = sum;
	while (temp >= 50) {
		temp = temp - 50;
		n = n + returnUpTo20p(temp);
	}
	return n;
}

int returnUpTo1Pound(int sum) {
	int n = returnUpTo50p(sum), temp = sum;
	while (temp >= 100) {
		temp = temp - 100;
		n = n + returnUpTo50p(temp);
	}
	return n;
}

int returnUpTo2Pound(int sum) {
	int n = returnUpTo1Pound(sum), temp = sum;
	while (temp >= 200) {
		temp = temp - 200;
		n = n + returnUpTo1Pound(temp);
	}
	return n;
}

void run() {
	int sum;
	std::cout << "Enter sum value in pence: ";
	std::cin >> sum;
	while (sum <= 0) {
		std::cout << "Enter a value in pence greater than 0: ";
		std::cin >> sum;
	}
	std::cout << "Number of ways to create " << sum << "p is: " << returnUpTo2Pound(sum) << '\n';
	return;
}