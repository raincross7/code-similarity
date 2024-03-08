#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>

using namespace std;
 
#define rep(i,n) for(int i=0;i<(n);++i)
#define reps(i,n) for(int i=1;i<=(n);++i)
#define all(x) (x).begin(),(x).end()
#define Fixed fixed << setprecision(12)
#define int int64_t
using pii = pair<int,int>;
constexpr int INF  = 0x3f3f3f3f;
constexpr long long LINF = 0x3f3f3f3f3f3f3f3fLL;
constexpr int mod1 = 1e9+7; 
constexpr int mod2 = 998244353;
 
template <class A, class B> inline bool chmax(A &a, const B &b) { return b > a && (a = b, true); }
template <class A, class B> inline bool chmin(A &a, const B &b) { return b < a && (a = b, true); }
 
template <class T> using min_heap = priority_queue<T,vector<T>,greater<T> >;
template <class T> using max_heap = priority_queue<T>;
template <class A, class B> using umap = unordered_map<A,B>;
  
inline int updiv(int a,int b){ return (a + b - 1) / b; }
 
constexpr int dx[] = {1,0,-1,0,1,1,-1,-1};
constexpr int dy[] = {0,-1,0,1,1,-1,-1,1};


signed main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, h;
	cin >> n >> h;

	vector<int> a(n), b(n);

	rep(i,n){
		cin >> a[i] >> b[i];
	}

	sort(all(a), greater<int>());
	sort(all(b), greater<int>());

	int res = 0;
	
	for(int i = 0; i < n; ++i){
		if(b[i] >= a[0] && h > 0){
			h -= b[i];
			++res;
		}else{
			break;
		}
	}

	if(h > 0){
		res += updiv(h, a[0]);
	}

	cout << res << '\n';

	return 0;
}