#include <iostream>
// Note: Can't have two empty parameters for array within function parameter
// Note: Unless using a template -> Harder?
int largestProduct();
// Prompts user for information on grid
// Returns the largest product of n consecutive numbers on grid



int main(void){
	
	int foo = largestProduct();

	return 0;
}

int largestProduct(){
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
	std::cout << "Largest horizontal and vertical product is: " << product; // For testing purposes
	
	
	return 0;
	
	
}
	
