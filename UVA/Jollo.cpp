#include <iostream>
#include <algorithm>
#include <vector>

bool DoesNotExistIn(int32_t _targetNum, std::vector<int32_t> _targetArray) {
	for (int i = 0; i < _targetArray.size(); i++) {
		if (_targetNum == _targetArray[i]) return false;
	}
	return true;
}

int NextCard(int32_t bro[], int32_t sis[]) {
	std::vector<int32_t> prince(bro, bro + 2);
	std::vector<int32_t> princess(sis, sis + 3);

	std::sort(prince.begin(), prince.begin() + 2);
	std::sort(princess.begin(), princess.begin() + 3);

	if (prince[1] > princess[2] && prince[0] > princess[1]) {
		for (int i = princess[1]; ; i++) {
			if (DoesNotExistIn(i, princess) && DoesNotExistIn(i, prince)) {
				return i;
			}
		}
	}

	else if (prince[1] < princess[2] && prince[0] < princess[1]) {
		return -1;
	}

	else if (prince[1] < princess[2] && prince[0] > princess[1]) {
		for (int32_t i = princess[1]; ; i++) {
			if (DoesNotExistIn(i, princess) && DoesNotExistIn(i, prince)) {
				return i;
			}
		}
	}

	else if (prince[1] > princess[2] && prince[0] < princess[1]) {
		for (int32_t i = princess[1]; ; i++) {
			if (DoesNotExistIn(i, princess) && DoesNotExistIn(i, prince)) {
				return i;
			}
		}
	}

	return -1;
}

int main() {
	int bro[2], sis[3];
	while (true) {
		std::cin >> sis[0] >> sis[1] >> sis[2] >> bro[0] >> bro[1];
		if (sis[0] == 0 && bro[0] == 0) break;
		std::cout << NextCard(bro, sis);
	}
	return 0;
}
