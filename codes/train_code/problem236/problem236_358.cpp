 #include "bits/stdc++.h"
using namespace std;
const int MAX = 700000;
const int MOD = 1000000007;

long long  fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for (int i = 2; i < MAX; i++) {
		fac[i] = fac[i - 1] * i % MOD;
		inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
		finv[i] = finv[i - 1] * inv[i] % MOD;
	}
}

// 二項係数計算
long long COM(int n, int k) {
	if (n < k) return 0;
	if (n < 0 || k < 0) return 0;
	return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
/*第二引数で第一引数を割ったときの切り上げの計算*/
long long int maxtime(long long int x, long long int y){
	return(x + y - 1) / y;

}
/*最大公約数*/
long long int lcm(long long int number1, long long int number2) {
	long long int m = number1;
	long long int n = number2;

	if (number2 > number1) {
		m = number2;
		n = number1;
	}
	long long int s = -1;
	while (s != 0) {
		s = m % n;
		m = n;
		n = s;
	}
	return m;
}
/*最大公倍数*/
long long int gcd(long long int number1, long long int number2) {
	long long int m = number1;
	long long int n = number2;
	return m / lcm(m, n) * n;
}
/*逆元計算*/
long long int  modinv(long long a, long long m) {
	long long int b = m, u = 1, v = 0;
	while (b) {
		long long int t = a / b;
		a -= t * b; swap(a, b);
		u -= t * v; swap(u, v);
	}
	u %= m;
	if (u < 0) u += m;
	return u;
}
// index が条件を満たすかどうか
vector<long long int >meguru;
bool isOK(int index, int key) {
	if (meguru[index] >= key) return true;
	else return false;
}
// 汎用的な二分探索のテンプレ
int binary_search(int key) {
	int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
	int right = (int)meguru.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()
	/* どんな二分探索でもここの書き方を変えずにできる！ */
	while (right - left > 1) {
		int mid = left + (right - left) / 2;

		if (isOK(mid, key)) right = mid;
		else left = mid;
	}
	/* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
	return right;
}
long long modpow(long long a, long long n, long long mod) {
	long long res = 1;
	while (n > 0) {
		if (n & 1) res = res * a % mod;
		a = a * a % mod;
		n >>= 1;
	}
	return res;
}
long long int big[60][2] = {};
long long hand(long long int  a, long long int b) {
	if (a == 0) {
		return 1;
	}

	if (b == 1) {
		return 0;
	}
	if (b == big[a - 1][0]+big[a-1][1] + 2) {
		return 1+big[a-1][0];
	}
	if (b == (big[a - 1][0] + big[a - 1][1])*2 + 3) {
		return big[a - 1][0]*2 + 1;
	}

	if (b > big[a-1][0] + big[a-1][1]+2) {
		return hand(a - 1, b - big[a - 1][0]-big[a-1][1]-2) + 1 + big[a - 1][0];
	}
	else {
		return hand(a - 1, b - 1);
	}
}
int main() {
	long long int n;
	long long int x;
	cin >> n>>x;
	big[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		big[i][0] = big[i - 1][0] * 2 + 1;
		big[i][1] = big[i - 1][1] * 2 + 2;
	}
	cout << hand(n,x);
}