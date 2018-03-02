#include "Problems.h"

/* Problem 6: Sum Square Difference
*
* The sum of the squares of the first ten natural numbers is,
* 1^2 + 2^2 + ... + 10^2 = 385
* The square of the sum of the first ten natural numbers is,
* (1 + 2 + ... + 10)^2 = 3025
* Hence the difference between the sum of the squares of the first ten natural
* numbers and the square of the sum is 3025 - 385 = 2640.
* Find the difference between the sum of the squares of the first one hundred
* natural numbers and the square of the sum.
*/

int problem6() {
	return problem6(100);
}

int problem6(int n) {
	//Sum of series formula (Guass): 1/2 (n) (n+1)
	//Sum of squares formula: 1/6 (2n + 1) (n^2 + n)
	//Solution: (1/2 (n) (n+1))^2  -  (1/6 (2n + 1) (n^2 + n))
	return ((n*n*n*n + 2 * n*n*n + n*n) / 4) - ((2 * n*n*n + 3 * n*n + n) / 6);
}