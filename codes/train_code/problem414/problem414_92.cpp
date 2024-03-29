#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include <math.h>
#include <assert.h>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
#include <functional>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <bitset>

using namespace std;
typedef long long ll;
#define Fi first
#define Se second
#define pb(x) push_back(x)
#define sz(x) ((int)(x).size())
#define rep(i, n) for(int i=0;i<n;i++)
#define all(x) (x).begin(), (x).end()
typedef tuple<int, int, int> t3;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef long double ldouble;
typedef pair<double, double> pdd;

vector <int> E[100010];
int d[100010];

void dfs(int x, int fa = -1) {
	d[x] = 0;
	for(int e : E[x]) if(e != fa) {
		dfs(e, x);
		d[x] ^= (d[e] + 1);
	}
}

void solve(){
	int n; scanf("%d", &n);
	rep(i, n-1){
		int x, y; scanf("%d%d", &x, &y);
		E[x].pb(y); E[y].pb(x);
	}
	dfs(1);
	puts(d[1] ? "Alice" : "Bob");
}

int main(){
	int Tc = 1; // scanf("%d\n", &Tc);
	for(int tc=1;tc<=Tc;tc++){
		// printf("Case #%d: ", tc);
		solve();
	}
	return 0;
};
