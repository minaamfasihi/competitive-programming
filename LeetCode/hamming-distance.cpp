int getBit(int x, int num) {
	return (num >> x) & 1;
}

int hammingDistance(int x, int y) {
	int result = x ^ y;
	int count = 0;
	while (result > 0) {
		if (getBit(0, result) == 1) {
			count++;
		}
		result = (result >> 1);
	}
	return count;
}
