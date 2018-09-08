int generateHashcode(string str) {
	int x = 53, hash = 0;
	for (int i = 0; i < str.length(); i++) {
		hash = hash * x + str[i];
	}
	return hash;
}
