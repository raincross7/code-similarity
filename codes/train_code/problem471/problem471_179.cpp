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
#define MOD 1000000007
//setprecision(15)

int main() {
	int N; cin >> N;
	int p[200000];
	int m[200000];
	int mm = INF;
	rep(i, N) {
		cin >> p[i];
		mm = min(mm, p[i]);
		m[i] = mm;
	}
	int cnt = 0;
	rep(i, N) {
		if (m[i] == p[i]) cnt++;
	}
	cout << cnt << endl;
}