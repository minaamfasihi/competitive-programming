bool isAnagram(string s, string t) {
	if (s.length() != t.length()) return false;

	int flag[256] = { 0 };
	for (auto& a : s) {
		flag[a - 'a'] += 1;
	}
	for (auto&a : t) {
		flag[a - 'a'] -= 1;
	}
	for (auto& i : flag) {
		if (i > 0) return false;
	}
	return true;
}
