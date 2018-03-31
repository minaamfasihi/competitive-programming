#include <iostream>
#include <string>
using namespace std;

bool isPalin(int n) {
	string s = to_string(n);
	int len = s.length();
	for (int i = 0, j = len - 1; i < len && j >= 0 && i <= j; i++, j--) {
		if (s[i] != s[j]) {
			return false;
		}
	}
	return true;
}

int main() {
	cout << isPalin(181) << endl;
}