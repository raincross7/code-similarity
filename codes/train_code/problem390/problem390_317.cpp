#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#pragma warning(disable:4996)
#pragma comment(linker, "/STACK:336777216")
using namespace std;

#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define ldb ldouble

typedef tuple<int, int, int> t3;
typedef long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd;

int IT_MAX = 1 << 20;
int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const db PI = acos(-1);
const db ERR = 1e-10;
#define szz(x) (int)(x).size()
#define rep(i, n) for(int i=0;i<n;i++)
#define Se second
#define Fi first

ll my_sqrt(ll x){
	ll s = 0, e = 1e9+3, m;
	while(s <= e){
		m = (s+e) / 2;
		if(m*m > x) e = m-1;
		else s = m+1;
	}swap(s, e);
	return s;
}

int main()
{
	int Q;
	scanf("%d", &Q);
	for(int i = 1; i <= Q; i++){
		ll a, b;
		scanf("%lld%lld", &a, &b);
		ll x = my_sqrt(a*b-1), res = 0;
		if(x == 0){
			printf("0\n");
			continue;
		}
		if((a*b-1)/x == x) res = x*2 - 1;
		else res = x*2;
		if(x >= a || x >= b) res--;
		printf("%lld\n", res);
	}
}
