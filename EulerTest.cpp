#include <iostream>
#include "EulerSolutions.h"
#include <Windows.h>
#include <string>

int main()
{

	EulerSolution doit;
	int numProbs = 0;
	int correctSols = 0;
	int ret = 0;
	
	// 1
	numProbs++;
	ret = doit.MultiplesOf3And5(10);
	if (ret == 23) correctSols++;
	else printf("Problem %i Failed\nOutput: %i\n", numProbs, ret);
	
	// 2
	numProbs++;
	ret = doit.MultiplesOf3And5(1000);
	if (ret == 233168) correctSols++;
	else printf("Problem %i Failed\nOutput: %i\n", numProbs, ret);
	
	// 3
	numProbs++;
	ret = doit.EvenFibonacciNumbers(4000000);
	if (ret == 4613732) correctSols++;
	else printf("Problem %i Failed\nOutput: %i\n", numProbs, ret);

	// 4
	numProbs++;
	long long uret = doit.LargestPrimeFactor(13195);
	if (uret == 29) correctSols++;
	else printf("Problem %i Failed\nOutput: %lld\n", numProbs, uret);
	
	// 5
	numProbs++;
	uret = doit.LargestPrimeFactor(600851475143);
	if (uret == 6857) correctSols++;
	else printf("Problem %i Failed\nOutput: %lld\n", numProbs, uret);
	
	// 6
	numProbs++;
	ret = doit.LargestPalindromeProduct(999);
	if (ret == 906609) correctSols++;
	else printf("Problem %i Failed\nOutput: %i\n", numProbs, ret);

	// 7
	numProbs++;
	ret = doit.SmallestMultiple(20);
	if (ret == 232792560) correctSols++;
	else printf("Problem %i Failed\nOutput: %i\n", numProbs, ret);

	if (numProbs == correctSols) printf("All tests passed\n");
	else printf("%i failure(s).\n", numProbs - correctSols);

	return 0;

}