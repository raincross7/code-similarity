#include<bits/stdc++.h>
using namespace std;
const int MAXN = 256;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
template <typename T> void chkmax(T &x, T y) {x = max(x, y); }
template <typename T> void chkmin(T &x, T y) {x = min(x, y); } 
template <typename T> void read(T &x) {
	x = 0; int f = 1;
	char c = getchar();
	for (; !isdigit(c); c = getchar()) if (c == '-') f = -f;
	for (; isdigit(c); c = getchar()) x = x * 10 + c - '0';
	x *= f;
}
template <typename T> void write(T x) {
	if (x < 0) x = -x, putchar('-');
	if (x > 9) write(x / 10);
	putchar(x % 10 + '0');
}
template <typename T> void writeln(T x) {
	write(x);
	puts("");
}
char s[MAXN];
bool vis[MAXN];
int main() {
	scanf("%s", s + 1);
	int len = strlen(s + 1);
	if (len != 26) {
		for (int i = 1; i <= len; i++)
			vis[s[i]]++;
		for (int i = 'a'; i <= 'z'; i++)
			if (!vis[i]) {
				printf("%s%c\n", s + 1, i);
				return 0;
			}
	} else {
		for (int i = len; i >= 1; i--) {
			for (int j = s[i]; j <= 'z'; j++)
				if (vis[j]) {
					s[i] = j;
					printf("%s\n", s + 1);
					return 0;
				}
			vis[s[i]] = true, s[i] = 0;
		}
		puts("-1");
	}
	return 0;
}
