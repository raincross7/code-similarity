#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b)
		cout << c << "\n";
	else if (b == c)
		cout << a << "\n";
	else if(a == c)
		cout << b << "\n";
}