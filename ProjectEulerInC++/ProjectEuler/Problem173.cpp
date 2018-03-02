#include "Problems.h"

/* Problem 173: Using up to one million tiles how many different "hollow" square laminae can be formed?

We shall define a square lamina to be a square outline with a square "hole" so that the shape possesses vertical and horizontal symmetry. For example, using exactly thirty-two square tiles we can form two different square laminae:

With one-hundred tiles, and not necessarily using all of the tiles at one time, it is possible to form forty-one different square laminae.

Using up to one million tiles how many different square laminae can be formed?
*/

long long problem173() {

	long long total = 0;
	int x = 1000000;

	//Loop through all possible laminaes frames. To increase the size of the outer frame, we need to add 4 square (one for each side).
	for (int i = 8; i <= x; i += 4) {

		total++;

		//Loop through all laminaes that fit inside the outer one defined by the number of squares i. Continue fitting laminaes within the previous one until either
		//the amount of squares allowed have been used up or no more laminae can fit.
		int sum = i;
		for (int j = 1; (sum <= x) && (i - 8 * j) >= 8; j++) {

			//Add all the squares of the next lamina layer to the sum.
			sum += (i - 8 * j);

			//If the laminae still satisfies the condition of the loop, increment the total
			if (sum <= x && (i - 8 * j) >= 8) {
				total++;
			}
		}
	}

	return total;
}