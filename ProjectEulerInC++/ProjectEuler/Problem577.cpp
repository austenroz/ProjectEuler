/*

BigInteger problem577(long max) {
	BigInteger sum = 0;

	//for (int n = 3; n <= max; n++) {
	for (BigInteger n = 3; n <= max; n++) {
		BigInteger curSum = 0;
		curSum = curSum + ((n - 2)*(n - 1) / 2);

		for (BigInteger i = 2; i <= (n / 3); i++) {

			BigInteger s = (i*((BigInteger)(n - ((BigInteger)3 * i - (BigInteger)1)) * (n - ((BigInteger)3 * i - (BigInteger)2))) / (BigInteger)2);

			curSum = curSum + s;
		}

		sum += curSum;
	}

	return sum;
}

*/