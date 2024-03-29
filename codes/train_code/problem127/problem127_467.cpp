#include<bits/stdc++.h>
using namespace std;
const int MAXN = 3e5 + 5;
typedef long long ll;
template <typename T> void chkmax(T &x, T y) {x = max(x, y); }
template <typename T> void chkmin(T &x, T y) {x = min(x, y); } 
template <typename T> void read(T &x) {
	x = 0; int f = 1;
	char c = getchar();
	for (; !isdigit(c); c = getchar()) if (c == '-') f = -f;
	for (; isdigit(c); c = getchar()) x = x * 10 + c - '0';
	x *= f;
}
int get(int h, int m) {
	return h * 60 + m;
}
int main() {
	int h1, m1, h2, m2, k;
	read(h1), read(m1), read(h2), read(m2), read(k);
	cout << get(h2, m2) - get(h1, m1) - k << endl;
	return 0;
}
