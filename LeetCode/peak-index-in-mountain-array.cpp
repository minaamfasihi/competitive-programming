int peakIndexInMountainArray(vector<int>& A) {
	int ind = 0;
	while (ind < (A.size() - 1)) {
		if (A[ind] > A[ind + 1]) {
			break;
		}
		ind++;
	}
	return ind;
}
