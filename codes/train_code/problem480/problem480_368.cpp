#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
inline int read() {
	int x = 0, fh = 1;
	char c = getchar();
	while (c < '0' || c > '9') {
		if (c == '-') fh = -1;
		c = getchar();
	}
	while (c >= '0' && c <= '9') {
		x = (x << 1) + (x << 3) + c - '0';
		c = getchar();
	}
	return x * fh;
}
const int N = 1e6 + 10;
struct node { int y, nxt; LL d; } a[N];
priority_queue<pair<LL, int>, vector<pair<LL, int> >, greater<pair<LL, int> > > heap;
int n, q, k, x, y, d, len, i, lst[N], vis[N];
LL dist[N]; 
void ins(int x, int y, int d) {
	a[++len].y = y;
	a[len].d = d;
	a[len].nxt = lst[x];
	lst[x] = len;
}
void dij(int s) {
	memset(dist, 0x3f3f3f3f, sizeof(dist));
	int x, y, i;
	LL d;
	dist[s] = 0;
	heap.push(make_pair(0, s));
	while (!heap.empty()) {
		d = heap.top().first;
		x = heap.top().second;
		heap.pop();
		if (vis[x]) continue;
		vis[x] = 1;
		for (i = lst[x]; i; i = a[i].nxt) {
			y = a[i].y;
			if (dist[y] > d + a[i].d) {
				dist[y] = d + a[i].d;
				if (!vis[y]) heap.push(make_pair(dist[y], y));
			}
		}
	}
	return;
}
int main() {
	n = read();
	for (i = 1; i < n; i++) {
		x = read(); y = read(); d = read();
		ins(x, y, d);
		ins(y, x, d);
	}
	q = read(); k = read();
	dij(k);
	while (q--) {
		x = read(); y = read();
		cout << dist[x] + dist[y] << '\n';
	}
	return 0;
}