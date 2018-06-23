vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
	map<int, list<int>> mappings;
	vector<int> result;
	for (int i = 0; i < B.size(); i++) {
		if (mappings.count(B[i]) > 0) {
			mappings[B[i]].push_back(i);
		}
		else {
			list<int> temp;
			temp.push_back(i);
			mappings.insert(pair<int, list<int>>(B[i], temp));
		}
	}

	for (int i = 0; i < A.size(); i++) {
		if (mappings.count(A[i]) > 0) {
			int val = mappings[A[i]].front();
			mappings[A[i]].pop_front();
			result.push_back(val);
		}
	}
	return result;
}
