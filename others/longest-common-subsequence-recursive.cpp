int lcs(string str1, string str2, int len1, int len2) {
	if (len1 == 0 || len2 == 0) return 0;
	if (str1[len1 - 1] == str2[len2 - 1]) return 1 + lcs(str1, str2, len1 - 1, len2 - 1);
	else return max(lcs(str1, str2, len1, len2 - 1), lcs(str1, str2, len1 - 1, len2));
}
