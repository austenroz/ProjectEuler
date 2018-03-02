#include "Problems.h"

/* Problem 4: Largest Palindrome product
*
* A palincromic number reads the same both ways. The largest palindrome made from the product of two 2-digit
* numbers is 9009 = 91 * 99. Find the the largest palindrome made from the product of two 3-digit numbers.
*/


int problem4() {
	return problem4(999, 999);
}

int problem4(int max1, int max2) {

	//bool value used for testing if a number is a palindrome
	bool isPalindrome = false;

	//list of all potential solutions
	list<int> solutions;

	//Iterate through all possible combinations of the numbers (0 to max1) and (0 to max2)
	for (int i = max1; i > 0; i--) {
		for (int j = max2; j > 0; j--) {

			//convert i * j to a string
			std::string s = std::to_string(i * j);
			int l = s.length();
			
			//Test if the string created above is a palindrome
			isPalindrome = true;
			for (int x = 0; x < (int)l / 2 && isPalindrome; x++) {
				if (s.at(x) != s.at(l - x - 1)) {
					isPalindrome = false;
				}
			}

			//If the string is a palindrome, add it to the list of solutions
			if (isPalindrome) {
				solutions.push_front(i * j);
			}

		}
	}

	//Sort the solutions and return the greatest solution
	solutions.sort();
	return solutions.back();
}