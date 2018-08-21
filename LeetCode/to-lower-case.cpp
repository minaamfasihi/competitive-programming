string toLowerCase(string str) {
	for (char& c : str) {
		if (c >= 65 && c <= 90) {
			c += 32;
		}
	}
	return str;
}
