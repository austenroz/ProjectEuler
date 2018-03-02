#include "Problems.h"

/* Problem 3: Largest Prime Factor
*
* The prime factorss of 13195 are 5, 7, 13, and 29.
* What is the largest prime factor of the number 600851475143?
*/

long long problem3() {
	return problem3(600851475143);
}

long long problem3(long long num) {
	for (long long div = 2; div < num; div++) {
		if (num % div == 0) {
			num /= div;
			div--;
		}
	}
	return num;
}