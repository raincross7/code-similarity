#include <stdio.h>
long long ans, n, x;
long long l[100002], r[100002];
int id[100001];
int main() {
	scanf("%lld", &n);
	l[0] = 0;
	r[n + 1] = n + 1;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &x);
		id[x] = i;
		l[i] = i - 1;
		r[i] = i + 1;
	}
	for (int i = 1; i <= n; i++) {
		x = id[i];
		ans += ((l[x] - l[l[x]]) * (r[x] - x) + (r[r[x]] - r[x]) * (x - l[x])) * i;
		r[l[x]] = r[x];
		l[r[x]] = l[x];
	}
	printf("%lld\n", ans);
}
