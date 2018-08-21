vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	vector<int> result;
	map<int, int> m;
	for (auto& i : nums1) {
		if (m.count(i) != 1) {
			m.insert(pair<int, int>(i, 0));
		}
	}

	for (auto& i : nums2) {
		if (m.count(i) > 0) {
			result.push_back(i);
			m.erase(i);
		}
	}
	return result;
}
