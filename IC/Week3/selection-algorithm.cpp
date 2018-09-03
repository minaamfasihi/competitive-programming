int simplePartition(vector<int> arr, int start, int end, int pivot) {
	swap(arr[start], arr[pivot]);
	int less = start;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] > arr[start]) {} // do nothing
		else {
			less++;
			swap(arr[i], arr[less]);
		}
	}
	swap(arr[start], arr[less]);
	return less;
}

int selectionAlgorithm(vector<int> arr, int start, int end, int targetIndex) {
	int pivot = (rand() % ((end - start) + 1) + start);
	int result = simplePartition(arr, start, end, pivot);
	if (result > targetIndex) {
		return selectionAlgorithm(arr, start, result - 1, targetIndex);
	}
	else if (result < targetIndex) {
		return selectionAlgorithm(arr, result + 1, end, targetIndex);
	}
	else return arr[result];
}

int findKthSmallestElement(vector<int> arr, int k) {
	if (arr.size() == 0) return -1;
	return selectionAlgorithm(arr, 0, arr.size() - 1, k - 1);
}
