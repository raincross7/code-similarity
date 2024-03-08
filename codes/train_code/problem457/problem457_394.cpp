#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<map>
#include<tuple>
#include<algorithm>
#include<cmath>
#include<limits>
#include<set>
#include<deque>
#include<queue>
#include<stack>
using namespace std;
#define int long long int
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define dup(x,y) (((x)+(y)-1)/(y))
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef pair<int, int>P;
const int MOD = 1e9 + 7;
//const int MOD = 998244353;
const int INF = 1e18;
const long double PI = (acos(-1));


signed main() {
	int N, M;
	cin >> N >> M;
	vector<int>v(N);
	vector<vector<int>>data(M);
	rep(i, N) {
		int A, B;
		cin >> A >> B;
		v[i] = B;
		A--;
		if (A < M)data[A].push_back(i);
	}
	int ans = 0;
	priority_queue<int>q;
	rep(i, M) {
		rep(j, data[i].size())q.push(v[data[i][j]]);
		if (q.size()) {
			ans += q.top();
			q.pop();
		}
	}
	cout << ans << endl;
}