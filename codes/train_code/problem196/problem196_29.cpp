#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MAX = 1000;
const int INF = 1e9;
const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};
#define PI 3.14159265358979323846264338327950L

int main() {
	int N, M; cin >> N >> M;
	int ans = 0;
	if (N > 1) {
		ans += N * (N-1) / 2;
	}
	if (M > 1) {
		ans += M * (M-1) / 2;
	}
	cout << ans << endl;
}