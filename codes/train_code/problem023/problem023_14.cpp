#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 1;
	if (a != b)
		ans++;
	if (a != c && b != c)
		ans++;
	cout << ans << endl;
	return 0;
}