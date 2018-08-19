string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0) return "";

	char c; string res = ""; bool seen = false;
	for (int i = 0; i < strs[0].length(); i++) {
		int j = 0;
		for (; j < strs.size(); j++) {
			if (!seen) {
				c = strs[j][i];
				seen = true;
			}
			else if (c != strs[j][i]) break;
		}
		if (j == strs.size()) {
			res += c;
			seen = false;
		}
		else return res;
	}
	return res;
}
