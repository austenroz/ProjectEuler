#include "HelpfulMethods.h"
#include "Problems.h"

/* Problem 7: 10001st Prime
*
* By listing the first six prime numbers: 2, 3, 5, 7, 11, 13, we can see that the 6th prime is 13.
* What is the 10001st prime number?
*/

long static problem7() {
	return problem7(10001);
}

long static problem7(int n) {

	//current index to test if prime
	long i = 2;

	//current number of primes
	long j = 0;

	//loop through until the n primes have been reached
	while (j < n) {
		if (isPrime(i)) {
			j++;
		}
		i++;
	}

	i--;
	return i;
}