#include <iostream>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
	int max = 0;
	int letters[257];
	int counter = 0;

	for (int i = 0; i < 257; i++) {
		letters[i] = -1;
	}

	for (int i = 0; i < s.length(); i++) {
		int outerInd = (int)s[i];
		letters[outerInd] = i;
		counter++;
		for (int j = i + 1; j < s.length(); j++) {
			int innerInd = (int)s[j];
			if (letters[innerInd] != i) {
				letters[innerInd] = i;
				counter++;
			}
			else break;
		}

		if (max < counter) max = counter;
		counter = 0;
	}
	if (max < counter) max = counter;

	return max;
}

int main() {
	cout << lengthOfLongestSubstring("abcabcbb") << endl;
	cout << lengthOfLongestSubstring("bbbb") << endl;
	cout << lengthOfLongestSubstring("pwwkew") << endl;
	return 0;
}