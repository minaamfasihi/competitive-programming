void generate_power_set(const vector<int>& s) {
	for (int i = 0; i < (1 << s.size()); i++) {
		int x = i;
		while (x) {
			int tar = log2(x & ~(x - 1));
			cout << s[tar];
			if (x &= x - 1) {
				cout << ", ";
			}
		}
		cout << endl;
	}
}
