// IOI 2021
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ends ' '
#define die(x) return cout << x << endl, 0
#define all(v) v.begin(), v.end()
#define sz(x) (int)(x.size())
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) { cerr << ends << H; debug_out(T...); }
#define debug(...) cerr << "{" << #__VA_ARGS__ << "}:", debug_out(__VA_ARGS__)
typedef long long ll;
typedef pair<int, int> pii;
const ll INF = 1e9;
const ll MOD = 1e9 + 7;

////////////////////////////////////////////////////////////////////

const int N = 2e5 + 5;

int A[N], CNT[N];

int main() {

	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) cin >> A[i], CNT[A[i]]++;
	sort(A + 1, A + 1 + n);
	int d = A[n];
	for (int i = 0; i <= d; i++) if (CNT[max(i, d - i)]-- == 0) die("Impossible");
	for (int i = 1; i <= n; i++) if (CNT[i] && i < (d + 1) / 2 + 1) die("Impossible");
	cout << "Possible" << endl;

	return 0;
}
