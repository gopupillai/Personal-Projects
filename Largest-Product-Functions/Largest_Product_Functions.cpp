#include "Largest_Product_Functions.h"
#include <iostream>

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

int largestPalindromeProduct(void){
	int current=0;
	for (int num=800000; num<1000000; num++){
		if (checkPalindrome(num) && twoThreeDigits(num)){
			current = num;
		}
	}
	return current;
}

void largestProduct(void){
	int N=0, n=0, product=0;
	std::cout << "Enter size of grid: N = ";
	std::cin >> N;
	std::cout << "Enter number of consecutive digits for product: n = ";
	std::cin >> n;
	int arr[N][N];
	std::cout << "Enter digits of grid beginning at the top-left proceeding along, hit enter after every addition: ";
	for (int row=0; row < N; row++){
		for (int col=0; col < N; col++){
			std::cin >> arr[row][col];
		}
	}
	
	// Finds the largest vertical product:
	for (int row=0; row <= (N-n); row++){
		for (int col=0; col <= (N-1); col++){
			int temp = 1;
			for (int i=row, count=0; count<n; i++, count++){
				temp = temp * arr[i][col];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	//std::cout << "Largest vertical product is: " << product; // For testing purposes
	
	// Finds the largest horizontal product:
	for (int col=0; col <= (N-n); col++){
		for (int row=0; row <= (N-1); row++){
			int temp = 1;
			for (int i=col, count =0; count < n; i++, count++){
				temp = temp * arr[row][i];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	//std::cout << "Largest horizontal and vertical product is: " << product; // For testing purposes
	
	// Finds the largest right-diagonal product:
	for (int row=0; row <= (N-n); row++){
		for (int col=0; col <= (N-n); col++){
			int temp=1;
			for (int i=row, v=col, count=0; count < n; i++, v++, count++){
				temp = temp * arr[i][v];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	//std::cout << "Largest horizontal, vertical and right-diagonal product is: " << product; // For testing purposes
	
	// Finds the largest left-diagonal product:
	for (int row=0; row <= (N-n); row++){
		for (int col=(N-1); col >= (n-1); col--){
			int temp=1;
			for (int i=row, v=col, count=0; count < n; i++, v--, count++){
				temp = temp * arr[i][v];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	std::cout << "Largest horizontal, vertical, and diagonal product is: " << product; // For testing purposes
		
}

void largestProduct_20(int arr[20][20], int N, int n){
	int product=0;
	// Finds the largest vertical product:
	for (int row=0; row <= (N-n); row++){
		for (int col=0; col <= (N-1); col++){
			int temp = 1;
			for (int i=row, count=0; count<n; i++, count++){
				temp = temp * arr[i][col];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	//std::cout << "Largest vertical product is: " << product; // For testing purposes
	
	// Finds the largest horizontal product:
	for (int col=0; col <= (N-n); col++){
		for (int row=0; row <= (N-1); row++){
			int temp = 1;
			for (int i=col, count =0; count < n; i++, count++){
				temp = temp * arr[row][i];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	//std::cout << "Largest horizontal and vertical product is: " << product; // For testing purposes
	
	// Finds the largest right-diagonal product:
	for (int row=0; row <= (N-n); row++){
		for (int col=0; col <= (N-n); col++){
			int temp=1;
			for (int i=row, v=col, count=0; count < n; i++, v++, count++){
				temp = temp * arr[i][v];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	//std::cout << "Largest horizontal, vertical and right-diagonal product is: " << product; // For testing purposes
	
	// Finds the largest left-diagonal product:
	for (int row=0; row <= (N-n); row++){
		for (int col=(N-1); col >= (n-1); col--){
			int temp=1;
			for (int i=row, v=col, count=0; count < n; i++, v--, count++){
				temp = temp * arr[i][v];
			}
			if (temp > product){
				product = temp;
			}
		}
	}
	std::cout << "Largest horizontal, vertical, and diagonal product is: " << product; // For testing purposes
}

void largestProductInAGrid(void){
	int arr[20][20] = 
	{
		{ 8, 02, 22, 97, 38, 15, 00, 40, 00, 75, 04, 05, 07, 78, 52, 12, 50, 77, 91, 8, },
		{ 49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 04, 56, 62, 00, },
		{ 81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 03, 49, 13, 36, 65, },
		{ 52, 70, 95, 23, 04, 60, 11, 42, 69, 24, 68, 56, 01, 32, 56, 71, 37, 02, 36, 91, },
		{ 22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80, },
		{ 24, 47, 32, 60, 99, 03, 45, 02, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50, },
		{ 32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70, },
		{ 67, 26, 20, 68, 02, 62, 12, 20, 95, 63, 94, 39, 63, 8, 40, 91, 66, 49, 94, 21, },
		{ 24, 55, 58, 05, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72, },
		{ 21, 36, 23, 9, 75, 00, 76, 44, 20, 45, 35, 14, 00, 61, 33, 97, 34, 31, 33, 95, },
		{ 78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 03, 80, 04, 62, 16, 14, 9, 53, 56, 92, },
		{ 16, 39, 05, 42, 96, 35, 31, 47, 55, 58, 88, 24, 00, 17, 54, 24, 36, 29, 85, 57, },
		{ 86, 56, 00, 48, 35, 71, 89, 07, 05, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58, },
		{ 19, 80, 81, 68, 05, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 04, 89, 55, 40, },
		{ 04, 52, 8, 83, 97, 35, 99, 16, 07, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66, },
		{ 88, 36, 68, 87, 57, 62, 20, 72, 03, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69, },
		{ 04, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18, 8, 46, 29, 32, 40, 62, 76, 36, },
		{ 20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 04, 36, 16,},
		{ 20, 73, 35, 29, 78, 31, 90, 01, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 05, 54, },
		{ 01, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 01, 89, 19, 67, 48 }
	};
	
	largestProduct_20(arr, 20, 4);
}

void moveLeft(int (&arr)[5]){
	arr[0]=arr[1];
	arr[1]=arr[2];
	arr[2]=arr[3];
	arr[3]=arr[4];
}


void outputArray(int arr[5]){
	for (int i=0; i<5; i++){
		std::cout << arr[i] << " ";
	}
}

int transferAndProduct(std::string num, int i, int (&arr)[5]){
	moveLeft(arr);
	arr[4] = num[i] - 48;
	return (arr[0]*arr[1]*arr[2]*arr[3]*arr[4]);
}

int largestProductInSeries(void){
	std::string num;
	num="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int arr[5] = {(num[0]-48), (num[1]-48), (num[2]-48), (num[3]-48), (num[4]-48)};
	int current=(arr[0]*arr[1]*arr[2]*arr[3]*arr[4]);
	for (int i=5; i<1000; i++){
		int temp=transferAndProduct(num, i, arr);
		if (temp > current){
			current = temp;
		}
	}
	return current;
}
