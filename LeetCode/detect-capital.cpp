bool isCaps(char c) {
	return (c >= 65 && c <= 91);
}

bool detectCapitalUse(string word) {
	if (word.length() == 0) return false;

	int len = word.length();
	if (isCaps(word[0])) {
		if (isCaps(word[len - 1])) {
			for (int i = 1; i < len - 1; i++) {
				if (!isCaps(word[i])) return false;
			}
		}
		else {
			for (int i = 1; i < len - 1; i++) {
				if (isCaps(word[i])) return false;
			}
		}
	}
	else {
		for (int i = 1; i < len; i++) {
			if (isCaps(word[i])) return false;
		}
	}
	return true;
}
