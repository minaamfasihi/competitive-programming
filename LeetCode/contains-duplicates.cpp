bool containsDuplicate(vector<int>& nums) {
	if (nums.size() == 0) return false;

	map<int, int> m;
	for (auto& i : nums) {
		if (m.count(i) != 0) {
			return true;
		}
		else m.insert(pair<int, int>(i, 0));
	}
	return false;
}
