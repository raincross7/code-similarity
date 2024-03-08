#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using P = pair<int, int>;

/* 繰り返し自乗法. */
int modPow(long long a, long long n, long long p) {
	if (n == 0) return 1; // 0乗にも対応する場合.
	if (n == 1) return a % p;
	if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p;
	long long t = modPow(a, n / 2, p);
	return (t * t) % p;
}

signed main() {
    ll A, B, K;
    cin >> A >> B >> K;

    if (K <= A) {
        cout << A - K << ' ';
        cout << B << endl;
    } else if (K <= (A+B)) {
        cout << 0 << ' ';
        cout << B + A - K << endl;
    } else {
        cout << 0 << ' ';
        cout << 0 << endl;
    }


}

