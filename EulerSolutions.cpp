#include "EulerSolutions.h"
#include <iostream>

int EulerSolution::MultiplesOf3And5(int input) {
	// If we list all the natural numbers below 10 that are multiples of 3 or 5,
	// we get 3, 5, 6 and 9. The sum of these multiples is 23.
	// Find the sum of all the multiples of 3 or 5 below 1000.

	int inc3 = 1;
	int inc5 = 1;
	int sum = 0;
	int c5 = 1;
	while (inc3 < input || inc5 < input) {
		if ((inc3 < input) && (inc3 % 3 == 0) && (inc3 % 5 != 0)){
			sum += inc3;
			inc3 += 3;
			if (inc3%5 == 0) inc3 += 3;
		}
		else inc3 ++;

		if ((inc5 < input) && (inc5 % 5 == 0)){
			sum += inc5;
			inc5 += 5;
		}
		else inc5++;
	}
	return sum;
}