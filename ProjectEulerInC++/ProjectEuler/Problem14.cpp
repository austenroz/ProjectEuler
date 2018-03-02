#include "Problems.h"

/* Problem 14: Longest Collatz Sequence

The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/

int problem14() {
	return problem14(1000000);
}

int problem14(int n) {

	int* solutions = new int[n];

	int greatestSeq = 0;
	int greatestNum = 0;
	for (int i = 2; i < n; i++) {

		int curSeq = 1;
		long long curNum = i;

		while (curNum > 1) {

			curSeq++;
			if (curNum < i) {
				curSeq += solutions[curNum] - 2;
				curNum = 1;
			}
			else if (curNum % 2 == 0) {
				curNum = curNum / 2;
			}
			else {
				curNum = (curNum * 3) + 1;
			}
		}

		solutions[i] = curSeq;

		if (curSeq > greatestSeq) {
			greatestSeq = curSeq;
			greatestNum = i;
		}
	}

	delete[] solutions;

	return greatestNum;
}