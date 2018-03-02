#include <iostream>
using namespace std;

//Check if the number n is prime
bool isPrime(long n) {
	bool isPrime = true;
	for (long i = 2; i <= n / 2 && isPrime; i++) {
		if (n % i == 0) {
			isPrime = false;
		}
	}
	return isPrime;
}

//Binary GCD method
long long gcd(long long a, long long b) {
	long long d = 0;
	while (a % 2 == 0 && b % 2 == 0) {
		a = a / 2;
		b = b / 2;
		d++;
	}
	while (a != b) {
		if (a % 2 == 0) {
			a = a / 2;
		}
		else if (b % 2 == 0) {
			b = b / 2;
		}
		else if (a > b) {
			a = (a - b) / 2;
		}
		else b = (b - a) / 2;
	}
	return a * pow(2, d);
}