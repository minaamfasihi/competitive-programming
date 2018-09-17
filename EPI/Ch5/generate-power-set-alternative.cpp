template <typename T>
void generate_power_set_helper(const vector<T>& s, int idx, vector<T>& res) {
	if (!res.empty()) {
		for (auto i = res.cbegin(); i != res.cend() - 1; i++) {
			cout << *i << ", ";
		}
		cout << res.back();
	}
	cout << endl;

	for (int i = idx; i < s.size(); i++) {
		res.emplace_back(s[i]);
		generate_power_set_helper(s, i + 1, res);
		res.pop_back();
	}
}

template <typename T>
void generate_power_set(const vector<T>& s) {
	vector<T> res;
	generate_power_set_helper(s, 0, res);
}

int main() {
	vector<int> s = { 2, 4, 8 };
	generate_power_set(s);
	return 0;
}
