int maxNum(int a, int b)
{
	return (a > b) ? a : b;
}

int lcsDynamic(string str1, string str2) {
	int max = 0;
	int** temp = new int*[str1.length() + 1];
	for (int i = 0; i < str1.length() + 1; i++) {
		temp[i] = new int[str2.length() + 1];
	}
	for (int i = 0; i < str1.length() + 1; i++) {
		for (int j = 0; j < str2.length() + 1; j++)
			temp[i][j] = 0;
	}

	int maxLen = 0;
	for (int i = 1; i < str1.length() + 1; i++) {
		for (int j = 1; j < str2.length() + 1; j++) {
			if (str1[i - 1] == str2[j - 1]) 
				temp[i][j] = temp[i - 1][j - 1] + 1;
			else 
				temp[i][j] = maxNum(temp[i][j - 1], temp[i - 1][j]);
			if (temp[i][j] > maxLen) maxLen = temp[i][j];
		}
	}
	for (int i = 0; i < str1.length() + 1; i++) {
		delete[] temp[i];
	}
	delete[] temp;
	return maxLen;
}
