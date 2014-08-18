#Special_Unique_Number_Functions

##Overview

Contains a variety of special unique number functions that don't fit in any of the other directories and libraries.
Main file is just used to run basic tests to ensure correctness. Functions can be used through: #include "Special_Unique_Number_Functions.h".
Detailed explanations of each function and their implementations can be found within the header and Special_Unique_Number_Functions.cpp.
Brief overview of functions is given below.

##Functions

1. int numDivisors(int num)
  * Returns the number of divisors within num
  * Note: num must be greater than 4
2. bool isTriangleNumber(int num)
  * Returns true if num is a triangle number
  * A Triangle number is a number that counts the objects that form an equilateral triangle.
  * Eg. 1:		

  				.

  * Eg. 3:		

  				.

  			   . .

  * Eg. 6:

  				.

  			   . .

  			  . . .
3. int highlyDivisible(int factors)
  * Provides the first triangle number with number of divisors greater than the factors parameter
  * Returns that triangle number
  * Brute Force Algorithm so high computing time for large number of factors
4. int smallestMultiple(int n)
  * Returns the multiple that is the smallest consisting of consecutive factors 1 to n.
5. void smallestMultipleOfNConsecutive(void)
  * Outputs the smallest multiple of N consecutive numbers with user input N
6. int specialPythagoreanTriplet(void)
  * A Pythagorean Triplet is: a^2 + b^2 = c^2
  * Finds a, b, c, such that a + b + c = 1000 and also a Pythagorean Triplet
  * Returns the product abc
7. unsigned long long collatzChain(unsigned long long start)
  * Returns the number of elements within chain starting at start number
8. unsigned long long longestCollatzChain(unsigned long long limit)
  * Returns the starting number under the limit that produces the largest Collatz Chain

##Collatz Chain

A Collatz Chain is a sequence formed from a starting number using the following function:

f(n) = n / 2 iff n = 0 (mod 2)
f(n) = 3n + 1 iff n = 1 (mod 2)
