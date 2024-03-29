#include <algorithm>  
#include <iostream>  
#include <sstream>  
#include <string>  
#include <cstring>
#include <vector>  
#include <queue>  
#include <set>  
#include <map>  
#include <cstdio>  
#include <cstdlib>  
#include <cctype>  
#include <cmath>  
#include <list>  
#include <cassert>
#include <ctime>
#include <climits>
using namespace std;  

#define PB push_back  
#define MP make_pair  
#define SZ(v) ((int)(v).size())  
#define FOR(i,a,b) for(int i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)  
#define REPE(i,n) FORE(i,0,n)  
#define FORSZ(i,a,v) FOR(i,a,SZ(v))  
#define REPSZ(i,v) REP(i,SZ(v))  
typedef long long ll;
typedef unsigned long long ull;
ll gcd(ll a,ll b) { return b==0?a:gcd(b,a%b); }

const int MAXN = 100000;

int n, limit;
int a[MAXN], b[MAXN];

ll solve(int mask) {
	ll ret = 0;
	REP(i, n) if ((mask&a[i]) == a[i]) ret += b[i];
	return ret;
}

void run() {
	scanf("%d%d", &n, &limit);
	REP(i, n) scanf("%d%d", &a[i], &b[i]);
	ll ret = solve(limit);
	for (int i = 0; (1 << i) <= limit; ++i) if (limit&(1 << i)) {
		int nlimit = (limit ^ (1 << i)) | ((1 << i) - 1);
		ll cur = solve(nlimit);
		if (cur > ret) ret = cur;
	}
	printf("%lld\n", ret);
}

int main() {
	run();
	return 0;
}
