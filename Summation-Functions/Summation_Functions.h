#ifndef SUMMATION_FUNCTIONS
#define SUMMATION_FUNCTIONS

#include "Summation_Functions.cpp"

int sumOfSquares(int n);
// Returns the sum of the first n squared numbers

int squareOfSum(int n);
// Returns the squared sum of the first n numbers

int sumSquareDifference(void);
// Returns the square of the sum of all numbers up to user selected number minus sum of all numbers squared up to n

int sumOfEvenFibonacciNumbers(void);
// Returns the sum of even fibonacci numbers up to and including user set limit

int sumOfMultiples3and5(void);
// Returns the sum of multiples of 3 and 5 up to user selected limit

unsigned long long numExtract(std::string num, int n);
// Returns the first n digits of the string num as an int

void arrayConvert(std::string num, unsigned long long (&arr)[100]);
// Converts 100 50-digit number string into an array of 100 20-digit numbers

void outputArray(unsigned long long arr[100]);
// Outputs the array with newlines after every element

unsigned long long sumOfArray(unsigned long long arr[100]);
// Returns the first 10 digits of the sum of array
// Converts into smaller array of 20 elements consisting of sums of 5 elements in prior array
// Note: May have errors with elements beginning with 0

void largeSumFunction(void);
// Uses above few functions to return the sum of a sample 100 50-digit numbers
// Outputs the first 10 digits of that number

#endif
