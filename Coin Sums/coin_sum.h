#ifndef COIN_SUM_H_
#define COIN_SUM_H_

#include <iostream>
#include <string>

#include "coin_sum_functions.cpp"

int returnUpTo5p(int sum);
// Returns the number of ways to create sum out of 1p, 2p, 5p
int returnUpTo10p(int sum);
// Returns the number of ways to create sum out of 1p, 2p, 5p, 10p
int returnUpTo20p(int sum);
// Returns the number of ways to create sum out of coins up to 20p
int returnUpTo50p(int sum);
// Returns the number of ways to create sum out of coins up to 50p
int returnUpTo1Pound(int sum);
// Returns the number of ways to create sum out of coins up to 1 pound
int returnUpTo2Pound(int sum);
// Returns the number of ways to create sum out of coins up to 2 pound
void run();
// Runs the program and outputs the number of ways to create sum out of all coins
// Sum needs to be in pence

#endif