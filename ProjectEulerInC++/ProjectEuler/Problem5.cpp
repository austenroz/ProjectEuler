#include "Problems.h"

/* Problem 5: Smallest Multiple
*
* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
* What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int problem5() {
	return problem5(20);
}

int problem5(int maxNum) {

	//bool value used for testing if a solution has been found yet.
	bool solutionFound = false;

	//variable to store solution
	int solution;

	//Iterate through values by incrementing by the maxNum every loop.
	for (solution = maxNum; !solutionFound; solution += maxNum) {

		//Check if the current solution is evenly divisible
		bool correct = true;
		for (int j = 1; j <= maxNum; j++) {
			if (solution % j != 0) {
				correct = false;
			}
		}

		//If current solution is currently divisible, set solutionFound to true and to end parent loop.
		if (correct) {
			solutionFound = true;
		}
	}

	//Decrease the solution by the maxNum because it was incremented on extra time
	//at the end of the loop above.
	solution -= maxNum;
	return solution;
}