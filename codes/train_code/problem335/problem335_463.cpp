//#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)
#define co(x) cout << (x) << "\n"
#define cosp(x) cout << (x) << " "
#define ce(x) cerr << (x) << "\n"
#define cesp(x) cerr << (x) << " "
#define pb push_back
#define mp make_pair
#define Would
#define you
#define please

//みんなどんだけ頭いいの

int main() {
	//cin.tie(0);
	//ios::sync_with_stdio(false);


	int N = 0;
	const int cm = 1 << 18;
	char cn[cm], * ci = cn, c;
	fread(cn, 1, cm, stdin);
	while ((c = *ci++) >= '0') N = N * 10 + c - '0';

	int L = 0;
	ll kotae = 1;
	ll mod = 1e9 + 7;
	rep1(i, N) kotae = kotae * i % mod;
	rep(i, N + N) {
		if (*ci++ == 'B' ^ (i & 1)) {
			L++;
		}
		else {
			kotae = kotae * L % mod;
			L--;
		}
	}

	if (L == 0) printf("%ld", kotae);
	else printf("0");

	Would you please return 0;
}