#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int T = 0;
	cin >> T;
	while (T--) {
		int salary[3];
		cin >> salary[0] >> salary[1] >> salary[2];
		sort(salary, salary + 3);
		cout << salary[1] << endl;
	}
	return 0;
}
