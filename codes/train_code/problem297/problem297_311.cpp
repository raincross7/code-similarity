#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main() {
	string a, b, c;
	cin >> a >> b >> c;
	if (a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0])
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
}