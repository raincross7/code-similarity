#include <iostream>
using namespace std;

int main() {

	int x, y;

	for (int i = 0; ; i++) {
		cin >> x >> y;
		if (x == 0 && y == 0)
			break;

		if (x > y)
			cout << y << " " << x << "\n";
		else
			cout << x << " " << y << "\n";
	}
}