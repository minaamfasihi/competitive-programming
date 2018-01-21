#include <iostream>
#include <string>

bool all_unique_chars(std::string s) {
	int counter[26] = { 0 };
	for (const char& i : s) {
		int ind = (((int)(tolower(i))) - 97);
		if (ind >= 0 && ind <= 26) {
			if (counter[ind] > 0) return false;
			counter[ind]++;
		}
	}
	return true;
}

int main() {
	std::string str = "Na he tum";
	bool r = all_unique_chars(str);
	if (r) std::cout << "String is unique\n";
	else std::cout << "String is non-unique\n";
	return 0;
}