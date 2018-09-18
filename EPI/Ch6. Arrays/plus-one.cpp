vector<int> plusOne(vector<int>& a) {
	int n = a.size() - 1;
	a[n] += 1;
	for (int i = n; i > 0 && a[i] == 10; i--) {
		a[i] = 0;
		a[i - 1] += 1;
	}
	if (a[0] == 10) {
		a[0] = 0;
		a.insert(a.begin(), 1);
	}
	for (auto& i : a) {
		cout << i << endl;
	}
	return a;
}
