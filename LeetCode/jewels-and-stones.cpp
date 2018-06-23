int numJewelsInStones(string J, string S) {
	int lowerCase[26];
	int upperCase[26];

	for (int i = 0; i < J.length(); i++) {
		if (isalpha(J[i])) {
			if (isupper(J[i])) {
				int ind = J[i] - 'A';
				upperCase[ind] = 1;
			}
			else {
				int ind = J[i] - 'a';
				lowerCase[ind] = 1;
			}
		}
	}

	int numJewels = 0;
	for (int i = 0; i < S.length(); i++) {
		if (isalpha(S[i])) {
			if (isupper(S[i])) {
				int ind = S[i] - 'A';
				if (upperCase[ind] == 1) numJewels++;
			}
			else {
				int ind = (S[i] - 'a');
				if (lowerCase[ind] == 1) numJewels++;
			}
		}
	}
	return numJewels;
}
