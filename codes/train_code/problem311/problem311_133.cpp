#include <bits/stdc++.h>
#define IO_OP std::ios::sync_with_stdio(0); std::cin.tie(0);
#define F first
#define S second
#define V vector
#define PB push_back
#define MP make_pair
#define EB emplace_back
#define ALL(v) (v).begin(), (v).end()
#define debug(x) cerr << #x << " is " << x << endl

using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef V<int> vi;

const int INF = 1e9 + 7;

string s[55];
int a[55];


signed main()
{
	IO_OP;
	
	int n, ans = -1;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> s[i] >> a[i];
	string t;
	cin >> t;
	for(int i=0;i<n;i++) {
		if(ans >= 0)
			ans += a[i];
		if(s[i] == t)
			ans = 0;
	}
	cout << ans << endl;
}



