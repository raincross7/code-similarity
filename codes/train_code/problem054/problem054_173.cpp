#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int price = -1;
	for (int i = 1; i <= 10000; i++) {
		if (i * 8 / 100 == A && i / 10 == B) {
			price = i;
			break;
		}
	}
	cout << price << endl;
	return 0;
}