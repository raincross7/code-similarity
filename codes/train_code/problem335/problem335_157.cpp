#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define rep(i,n) for( int i = 0; i < n; i++ )
#define rrep(i,n) for( int i = n; i >= 0; i-- )
#define REP(i,s,t) for( int i = s; i <= t; i++ )
#define RREP(i,s,t) for( int i = s; i >= t; i-- )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000
#define int long long 
int F[2100010];

int Mul(int a, int b) {
	return ((a % mod) * (b % mod)) % mod;
}

void fact(void) {
	F[0] = 1;
	F[1] = 1;
	for (int i = 2; i <= 2100000; i++) {
		F[i] = Mul(i, F[i - 1]);
	}
}
int square(int x) {
	return (x * x) % mod;
}

int power(int x, int y) {
	if (y == 0) return 1;
	else if (y == 1) return x % mod;
	else if (y % 2 == 0) return square(power(x, y / 2)) % mod;
	else return square(power(x, y / 2)) * x % mod;
}

int Div(int a, int b) {
	return Mul(a, power(b, mod - 2));
}
int P(int n, int r) {
	if (n < r || n < 0 || r < 0) return 0;
	return Div(F[n], F[n - r]);
}

int C(int n, int r) {
	if (n < r || n < 0 || r < 0) return 0;
	int ret;
	ret = Div(F[n], Mul(F[n - r], F[r]));
	return ret;
}
int H(int n, int r) {
	if (n == 0 && r == 0) return 1;
	return C(n + r - 1, r);
}


signed main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N; cin >> N;
    fact();
    string S; cin >> S;
    vector<int> v;
    rep(i, N * 2) {
        if (i % 2 == 0 && S[i] == 'B') v.push_back(0);
        if (i % 2 == 0 && S[i] == 'W') v.push_back(1);
        if (i % 2 == 1 && S[i] == 'B') v.push_back(1);
        if (i % 2 == 1 && S[i] == 'W') v.push_back(0);   
    }
    // rep(i, N * 2) cout << v[i];
    // cout << endl;
    int ans = 1;
    int cnt = 0;
    RREP(i, N * 2 - 1, 0) {
        if (v[i] == 1) cnt++;
        else {
            ans = Mul(ans + mod, cnt + mod);
            cnt--;
        }
        if (ans == 0) break;
    }
    if(cnt > 0) cout << 0 << endl;
    else cout << Mul(ans, F[N]) << endl;

    return 0;
}
