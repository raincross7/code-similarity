#include <bits/stdc++.h>
// iostream is too mainstream
#include <cstdio>
// bitch please
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <cmath>
#include <iomanip>
#include <time.h>
#define dibs reserve
#define OVER9000 1234567890
#define ALL_THE(CAKE,LIE) for(auto LIE =CAKE.begin(); LIE != CAKE.end(); LIE++)
#define tisic 47
#define soclose 1e-8
#define chocolate win
// so much chocolate
#define patkan 9
#define ff first
#define ss second
#define abs(x) (((x) < 0)?-(x):(x))
#define uint unsigned int
#define dbl long double
#define pi 3.14159265358979323846
using namespace std;
// mylittledoge

using cat = long long;

#ifdef DONLINE_JUDGE
	// palindromic tree is better than splay tree!
	#define lld I64d
#endif

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout << fixed << setprecision(10);
	int N;
	string S;
	cin >> N >> S;
	for(int i = 2*N-2; i >= 0; i -= 2) S[i] = (S[i] == 'B') ? 'W' : 'B';
	int cnt_b = 0, cnt_w = 0;
	long long ans = 1, mod = 1000000007;
	for(int i = 0; i < 2*N; i++) {
		if(S[i] == 'W') cnt_w++;
		else {
			cnt_b++;
			ans = ans * max(0, cnt_w) % mod;
			cnt_w--;
		}
	}
	if(cnt_b != N) ans = 0;
	for(int i = 1; i <= N; i++) ans = ans * i % mod;
	cout << ans << "\n";
	return 0;
}

// look at my code
// my code is amazing
