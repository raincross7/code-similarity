#if 0
date +%Y.%m.%d

题解先咕着。
#endif
#include <cstdio>
#include <algorithm>
#define debug(...) fprintf(stderr, __VA_ARGS__)

typedef long long ll;

struct {
	inline operator int () { int x; return scanf("%d", &x), x; }
	inline operator ll () { ll x; return scanf("%lld", &x), x; }
	template<class T> inline void operator () (T &x) { x = *this; }
	template<class T, class ...A> inline void operator () (T &x, A &...a)
	{ x = *this; this -> operator () (a...); }
} read;

const int maxn = 100005;
int a[maxn];

bool check (int x, int n, int m, int v, int p) {
	int r = n - (p - 1);
	if (r <= x) return 1;
	v = std::max(0, v - x - (n - r));
	int h = a[x] + m;
	ll sum = 0;
	for (int i = x + 1; i <= r; i ++)
		if (a[i] > h)
			return 0;
	for (int i = x + 1; i <= r; i ++)
		sum += std::min(m, h - a[i]);
	return 1ll * m * v <= sum;
}

int main () {
	int n = read, m = read, v = read, p = read;
	for (int i = 1; i <= n; i ++) read(a[i]);
	std::sort(a + 1, a + n + 1);
	int l = 1, r = n;
	while (l < r) {
		int mid = (l + r) >> 1;
		if (check(mid, n, m, v, p)) r = mid;
		else l = mid + 1;
	}
	printf("%d\n", n - l + 1);
}
