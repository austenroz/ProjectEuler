#include "Problems.h"

/* Problem 2: Even Fibonacci Numbers
*
* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first
* 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
* By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

int problem2() {
	return problem2(4000000);
}

int problem2(int highestNum) {
	int sum = 0;
	int previousNum = 1;

	for (int i = 1; i < highestNum; ) {
		//check if i is even. If so, add it to the sum.
		if (i % 2 == 0) {
			sum += i;
		}

		//add previous number to i to get next number in fibonacci sequence
		i += previousNum;
		previousNum = i - previousNum;
	}

	return sum;
}