void printBits(int num) {
	unsigned int checkBit = 1 << (sizeof(int) * 8 - 1);
	while (checkBit != 0) {
		int result = checkBit & num;
		if (result == checkBit) cout << "1";
		else cout << "0";
		checkBit = checkBit >> 1;
	}
	cout << endl;
}
