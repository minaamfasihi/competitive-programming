void printBits(int num) {
	unsigned int checkBit = 1 << (sizeof(int) * 8 - 1); // unsigned int is important because simple int will have fill bits of 1 
							    // since they preserve the sign of the integer. 
							    // 1 at the MSB usually means a negative number. Hence, unsigned int
	while (checkBit != 0) {
		int result = checkBit & num;
		if (result == checkBit) cout << "1";
		else cout << "0";
		checkBit = checkBit >> 1;
	}
	cout << endl;
}
