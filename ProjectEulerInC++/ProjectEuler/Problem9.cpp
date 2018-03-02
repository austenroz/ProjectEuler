#include "Problems.h"

/* Problem 9: Special Pythagorean Triplet

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

long problem9() {
	long solution = 0;

	//Loop through all possible ways of adding the three variables using the limits:
	//a < b < c < 1000 , a + b + c < 1000 => a < 333, b < 500.
	for (int a = 1; a < 333; a++) {
		for (int b = 1; b < 500; b++) {

			//determine c using formula a + b + c = 1000 => c = 1000 - a - b
			int c = 1000 - a - b;

			//if the value for c determined above satisfies the second equation (a^2 + b^2 = c^2),
			//we found solution.
			if (c == sqrt((a*a) + (b*b))) {
				solution = a * b * c;

				//set a and b to make conditions for both loops false.
				b = 500;
				a = 333;
			}
		}
	}

	return solution;
}