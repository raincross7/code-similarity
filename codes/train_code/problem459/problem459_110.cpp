#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	if (n % 2 == 1) {
		cout << 0 << endl;
		return 0;
	}
	long long ans = 0;
	for (long long x = 10; x <= n; x *= 5) {
		ans += n / x;
	}
	cout << ans << endl;
	return 0;
}