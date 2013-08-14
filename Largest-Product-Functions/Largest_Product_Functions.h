#ifndef LARGEST_PRODUCT_FUNCTIONS
#define LARGEST_PRODUCT_FUNCTIONS

#include "Largest_Product_Functions.cpp"

bool checkPalindrome(int num);
// Returns true if palindrome, false otherwise

bool twoThreeDigits(int num);
// Returns true iff has two 3-digit factors

int largestPalindromeProduct(void);
// Returns largest palindrome made from product of two 3-digit numbers

void largestProduct(void);
// Prompts user for information on grid
// Returns the largest product of n consecutive numbers on grid

void largestProduct_20(int arr[20][20], int N, int n);
// Saves time to copy & paste large grid instead of entering values

void largestProductInAGrid(void);
// Includes a sample 20x20 grid with values

void moveLeft(int (&arr)[5]);
// Moves each number in array one index to the left
// Note: arr[4] remains unchanged

void outputArray(int arr[5]);
// Outputs every digit in array
// Only for testing purposes

int transferAndProduct(std::string num, int i, int (&arr)[5]);
// Transfers from string to int array
// Also moves array along to left and finds product

int largestProductInSeries(void);
// Uses sample large number to provide largest 5 digit product in consecutive digits
// Returns the largest 5 digit product



#endif
