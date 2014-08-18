#Largest-Product-Functions

##Overview

Contains a variety of number functions surrounding large products. Main file is just used to run basic tests to ensure correctness.
Functions can be used through: #include "Largest_Product_Functions.h". Detailed explanations of each function can be found within header.
Brief overview of functions is given below.

##Functions

1. bool checkPalindrome(int num)
  * Returns true if the number is a palindrome, false otherwise.
  * Palindromes are numbers that are the same backwards as forwards.
  * Palindrome examples: 1001, 1223221.
2. bool twoThreeDigits(int num)
  * Returns true if and only if num has two 3-digit factors.
  * For example: num = 10,000 = 100 * 100
3. int largestPalindromeProduct(void)
  * Prompts user for information on NxN grid
  * Returns the largest product of n consecutive numbers within user's N*N grid
  * Includes diagonal products across grid as long as it fits within user's n.
  * Note: n <= N
