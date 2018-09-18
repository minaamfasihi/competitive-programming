void rearrange_even_entries(vector<int>& a) {
	if (a.size() == 0) return;
	int nextEven = 0, nextOdd = a.size() - 1;
	while (nextEven < nextOdd) {
		if (a[nextEven] % 2 == 0) nextEven++;
		else {
			swap(a[nextEven], a[nextOdd--]);
		}
	}
}
