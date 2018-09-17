string intToString(int x) {
	bool isNegative = false;
	if (x < 0) {
		isNegative = true;
		x = -x;
	}
	string s;
	while (x) {
		s.push_back('0' + (x % 10));
		x /= 10;
	}
	if (s.empty()) return {"0"};
	if (isNegative) {
		s.push_back('-');
	}
	reverse(s.begin(), s.end());
	return s;
}

int stringToInt(string s) {
	bool isNegative = s[0] == '-';
	int x = 0;
	for (int i = isNegative; i < s.size(); ++i) {
		if (isdigit(s[i])) {
			x = x * 10 + s[i] - '0';
		}
		else {
			throw invalid_argument("illegal input");
		}
	}
	return isNegative ? -x : x;
}
