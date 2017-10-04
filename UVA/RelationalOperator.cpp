#include <iostream>
#define MAX_SIZE 1000000001
typedef unsigned long long ll;

int main() {
	int TC = 0;
	ll a = 0, b = 0;
	scanf("%i", &TC);
	while (TC--) {
		std::cin >> a >> b;
		std::cout << (a > b ? '>' : (a < b ? '<' : '=')) << "\n";
	}
	return 0;
}
