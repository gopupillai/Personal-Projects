#Summation_Functions

##Overview

Contains a variety of summation number functions. Main file is just used to run basic tests to ensure correctness. Functions can be used through: #include "Summation_Functions.h". Detailed explanations of each function and their implementations can be found within the header and Summation_Functions.cpp.
Most of these functions have been derived from problems on project-euler. Brief overview of functions is given below.

##Functions

* int sumOfSquares(int n)
  * Returns the sum of the first n consecutive squared numbers
* int squareOfSum(int n)
  * Returns the squared sum of the first n consecutive numbers
* int sumSquareDifference(void)
  * Returns the square of the sum of all numbers up to user selected number minus sum of all numbers squared up to n
* int sumOfEvenFibonacciNumbers(void)
  * Returns the sum of even fibonacci numbers up to and including user set limit
  * Fibonacci Numbers are a recurrence relation with the following function:
    * F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-2</sub>
    * F<sub>1</sub> = 1
    * F<sub>2</sub> = 1
* int sumOfMultiples3and5(void)
  * Returns the sum of multiples of 3 and 5 up to user selected limit
* unsigned long long numExtract(std::string num, int n)
  * Returns the first n digits of the string num as an int
* void largeSumFunction(void)
  * Returns the sum of a sample 100 50-digit numbers
  * Outputs the first 10 digits of that number