void votersList(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
	int i = 0, j = 0, k = 0;
	vector<int> result;
	while (i < arr1.size() || j < arr2.size() || k < arr3.size()) {
		int currA, currB, currC;
		if (i < arr1.size()) currA = arr1[i];
		else currA = numeric_limits<int>::max();
		if (j < arr2.size()) currB = arr2[j];
		else currB = numeric_limits<int>::max();
		if (k < arr3.size()) currC = arr3[k];
		else currC = numeric_limits<int>::max();

		int currMin = min(currA, currB);
		currMin = min(currMin, currC);

		int count = 0;

		if (currMin == currA) {
			count++; i++;
		}
		if (currMin == currB) {
			count++; j++;
		}
		if (currMin == currC) {
			count++; k++;
		}
		if (count >= 2) result.push_back(currMin);
	}
	cout << result.size() << endl;
	for (auto& i : result) {
		cout << i << endl;
	}
}
