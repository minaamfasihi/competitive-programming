vector<int> sort0s1s2s(vector<int> arr) {
	if (arr.size() <= 1) {
		return arr;
	}

	int low = -1, mid = -1, high = arr.size();
	while (mid + 1 < high) {
		if (arr[mid + 1] == 1) {
			mid++;
		}
		else if (arr[mid + 1] == 2) {
			swap(arr[mid + 1], arr[high - 1]);
			high--;
		}
		else if (arr[mid + 1] == 0) {
			swap(arr[low + 1], arr[mid + 1]);
			low++;
			mid++;
		}
	}
	return arr;
}
