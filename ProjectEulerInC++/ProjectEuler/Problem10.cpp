#include "Problems.h"

/*Problem 10: Summation of Primes

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

long long problem10() {
	return problem10(2000000);
}

long long problem10(long n) {

	//Use Sieve of Eratosthenes algorithm to find prime numbers up to a certain limit.

	//Create an array of bools and set all values to true
	bool* a = new bool[n];
	for (int i = 0; i < n; i++) {
		a[i] = true;
	}

	//Find all multiples of numbers from i to sqrt(n) and set those indexes in the array to false
	for (int i = 2; i <= sqrt(n); i++) {
		if (a[i]) {
			for (int j = i*i; j < n; j += i) {
				a[j] = false;
			}
		}
	}

	//All indexes in the array that are still true are prime numbers

	//Add up all prime indexes in the array
	long long sum = 0;
	for (int i = 2; i < n; i++) {
		if (a[i]) {
			sum += i;
		}
	}

	delete[] a;

	return sum;
}