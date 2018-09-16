unsigned long closest_number_same_bits(unsigned long x) {
	for (int i = 0; i < 63; i++) {
		if (((x >> i) & 1) ^ (x >> (i + 1)) & 1) { // XOR of two different numbers will be 1, otherwise 0
			x ^= (1UL << i) | (1UL << (i + 1));
			return x;
		}
	}
	throw invalid_argument("all bits are either 0 or 1");
}
