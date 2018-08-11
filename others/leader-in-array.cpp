int leaderInArray(vector<int>& a) {
	if (a.size() <= 0) return -1;
	int mfr = a[a.size() - 1];
	for (int i = a.size() - 2; i >= 0; i--) {
		if (a[i] > mfr) mfr = a[i];
	}
	return mfr;
}
