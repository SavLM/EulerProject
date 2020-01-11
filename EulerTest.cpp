#include <iostream>
#include "EulerSolutions.h"
#include <vector>

int main()
{

	EulerSolution doit;
	int numProbs = 0;
	int correctSols = 0;
	
	int ret = doit.MultiplesOf3And5(10);
	if (ret == 23) correctSols++;
	else printf("Problem %i Failed\n Output: %i\n", numProbs, ret);
	numProbs++;

	ret = doit.MultiplesOf3And5(1000);
	if (ret == 233168) correctSols++;
	else printf("Problem %i Failed\n Output: %i\n", numProbs, ret);
	numProbs++;

	if (numProbs == correctSols) printf("All tests passed\n");
	else printf("There were %i failures.\n", numProbs - correctSols);

	return 0;

}