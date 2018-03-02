#include "Problems.h"
#include "HelpfulMethods.h"

/* Problem 15: Lattice Paths

Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?

*/

long long problem15() {
	return problem15(20, 20);
}

long long problem15(int x, int y) {

	//Pattern is from pascals triangle.
	// ( x + y)
	// (  y   )
	//Formula: (1/y!) * ( (x+1) * (x+2) * ... * (x+y) )


	//Calculate the factorial portion
	long long fac = 1;
	for (int i = 1; i <= y; i++) {
		fac = fac * i;
	}

	//Calculate the solution by multiplying the x terms and dividing by the factorial.
	long long solution = 1;
	for (int i = 1; i <= y; i++) {
		solution = solution * (x + i);

		//Divide the solution and factorial by their greatest common divisor in order to keep the length of the solution down.
		long long g = gcd(solution, fac);
		solution = solution / g;
		fac = fac / g;
	}

	return solution;
}