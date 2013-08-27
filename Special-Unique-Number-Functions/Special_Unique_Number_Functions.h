#ifndef SPECIAL_UNIQUE_NUMBER_FUNCTIONS
#define SPECIAL_UNIQUE_NUMBER_FUNCTIONS

#include "Special_Unique_Number_Functions.cpp"

int numDivisors(int num);
// Returns the number of divisors within num
// Note: Only works for numbers greater than 4

bool isTriangleNumber(int num);
// Returns true if num is a triangle number, else false

int highlyDivisible(int factors);
// Provides the first triangle number with number of divisors greater than the factors parameter
// Returns that triangle number
// Brute Force Algorithm
// Finds a highly divisible triangular number:
// A triangle number is: 1 + 2 = 3, 1 + 2 + 3 = 6 <- Summations of consecutive numbers from 1.
// Permits user to enter the number of factors desired within triangular number
// Returns the first triangle number exceeding the number of factors stated
// Note: Since it's a brute force algorithm, computing time is high for large number of factors (i.e. 500)

int smallestMultiple(int n);
// Returns the multiple that is the smallest consisting of consecutive factors 1 to n

void smallestMultipleOfNConsecutive(void);
// Outputs smallest multiple of N consecutive numbers with user input N

int specialPythagoreanTriplet(void);
// A Pythagorean Triplet is: a^2 + b^2 = c^2
// Finds a,b,c such that a + b + c = 1000 and also a Pythagorean Triplet
// Returns the product abc

unsigned long long collatzChain(unsigned long long start);
// Returns number of elements within chain starting at start number

unsigned long long longestCollatzChain(unsigned long long limit);
// Returns the starting number under the limit that produces the largest Collatz Chain

#endif
