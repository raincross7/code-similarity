#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define st first
#define nd second
#define endl '\n'
#define what_is(x) cerr << #x << " is " << x << endl;
#define what_is_v(x) cerr << #x << " is "; for(auto&e: (x)) cerr << e << ' '; cerr << '\n'; //vector, set
#define what_is_a(x, n) cerr << #x << " is "; for(int i=0;i<n;i++) cerr << x[i] << ' '; cerr <<  '\n'; //n first element of array
#define cerr_pair(x) '{' << x.st << ", " << x.nd << '}'
#define pwhat_is(x) cerr << #x << " is " << cerr_pair(x) << endl;
#define pwhat_is_v(x) cerr << #x << " is "; for(auto&e: (x)) cerr << cerr_pair(e) << ' '; cerr << '\n'; //vector, set
#define pwhat_is_a(x, n) cerr << #x << " is "; for(int i=0;i<n;i++) cerr << cerr_pair(x[i]) << ' '; cerr <<  '\n'; //n first element of array
// #define int long long
// #define pow mypow

typedef pair<int,int> pii;
const int N = 6;
const int M = 6;
const int INF = 1e9+5;
const int MOD = 1e9+7;

int n, m, k;
char c[N][M];
int32_t main()
{
	IOS
	// freopen("input.txt", "r", stdin);
	cin >> n >> m >> k;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++) cin >> c[i][j];
	}
	int ans = 0;
	for(int i=0; i<(1<<n); i++){
		for(int j=0; j<(1<<m); j++){
			int blacks = 0;
			for(int k=0; k<n; k++){
				for(int l=0; l<m; l++){
					if (i&(1<<k)) continue;
					if (j&(1<<l)) continue;
					if (c[k][l] == '#') blacks++;
				}
			}
			if (blacks == k) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
