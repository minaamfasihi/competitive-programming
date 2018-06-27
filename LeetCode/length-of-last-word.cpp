int lengthOfLastWord(string s) {
	int count = 0, i;
	for (i = s.length() - 1; i >= 0; i--) {
		if (s[i] == ' ') {
			if (count == 0) continue;
			else return count;
		} 
		else count++;
	}
	return count;
}
