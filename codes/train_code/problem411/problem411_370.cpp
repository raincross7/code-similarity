#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a < b) {
		if (c < d)
			cout << a + c << "\n";
		else
			cout << a + d << "\n";
	} else {
		if (c < d)
			cout << b + c << "\n";
		else
			cout << b + d << "\n";
	}
}