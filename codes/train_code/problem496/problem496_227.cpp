#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <bitset>

typedef unsigned long long ULLONG;
typedef long long LLONG;
static const LLONG MOD_NUM = 1000000007; //998244353;

template<class _T> static void get(_T& a) {
	std::cin >> a;
}
template<class _T> static void get(_T& a, _T& b) {
	std::cin >> a >> b;
}
template<class _T> static void get(_T& a, _T& b, _T& c) {
	std::cin >> a >> b >> c;
}

static void D();

int main()
{
	D();
	fflush(stdout);
	return 0;
}

static void D()
{
	int N, K;
	get(N, K);

	std::vector<LLONG> hi(N);
	for (int i = 0; i < N; i++) {
		get(hi[i]);
	}

	std::sort(hi.begin(), hi.end());
	LLONG ans = 0;
	for (int i = 0; i < N - K; i++) {
		ans += hi[i];
	}
	printf("%lld\n", ans);
}
