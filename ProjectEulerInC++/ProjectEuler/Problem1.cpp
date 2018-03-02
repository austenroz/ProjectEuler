#include "Problems.h"

/* Problem 1: Multiples of 3 and 5
*
* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 4, 6, and 9. The sum of these multiples
* is 23. Find the sum of all the multiples of 3 or 5 below 1000. (highestMultiple parameter used instead of 1000).
*/

int problem1() {
	return problem1(1000);
}

int problem1(int highestMultiple) {
	int sum = 0;
	
	//add all multiples of 3
	for (int i = 3; i < highestMultiple; i += 3) {
		sum += i;
	}

	//add all multiples of 5 not divisible by 3
	for (int i = 5; i < highestMultiple; i += 5) {
		if (i % 3 != 0) {
			sum += i;
		}
	}

	return sum;
}