#include<iostream>
#include<string>
#include<algorithm>    
#include<cmath>
#include<map>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<stack>
#include<queue>
#include<tuple>
#include<cassert>
#include<set>
#define int long long
using namespace std;
const int INF = 1000000000000;
const int mod = 1000000007;
int a[345678], first[345678], second[345678];
signed main() {
	int n, m, cnt = 1, ans = 0; cin >> n;
	for (int h = 0; h < n; h++) {
		cin >> a[h];
	}
	for (int h = 0; h < n; h++) {
		if (h == 0) { ans += (a[h] - 1) / cnt; cnt++; }
		else if (cnt == a[h]) { cnt++; }
		else {
			ans += (a[h] - 1) / cnt;
		}
	}
	cout << ans << endl;
	return 0;
}