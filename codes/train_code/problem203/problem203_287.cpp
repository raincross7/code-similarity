/*/ Author: KaySeeKay /*/

#include<bits/stdc++.h>
using namespace std;	

/*/---------------------------Defines-----------------------------------------/*/

#pragma GCC optimize("Ofast") 
#define int long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back 
#define eb emplace_back
#define fn for(int i =0 ;i <n;i++)	
#define fn1 for( int i =1;i<=n;	i++)
#define fm for(int j =0 ;j <m;j++)
#define fm1 for(int j =1;j<=m;j++)
#define fi first
#define se second
#define endl '\n'
#define PI  3.14159265358979323846
#define MOD 1000000007
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
const int N = 2e6+5;	
const int INF = 1e18L;
//mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/*/-----------------------------Debug begins----------------------------------/*/
vector<string> split(const string& s, char c) {
    vector<string> v; stringstream ss(s); string x;
    while (getline(ss, x, c)) v.emplace_back(x); return move(v);
}
template<typename T, typename... Args>
inline string arrStr(T arr, int n) {
    stringstream s; s << "[";
    for(int i = 0; i < n - 1; i++) s << arr[i] << ",";
    s << arr[n - 1] << "]";
    return s.str();
}
#define trace(args...) {__trace_begin(__LINE__); __trace(split(#args, ',').begin(), args);}
inline void __trace_begin(int line) { cerr << "#" << line << ": "; }
template<typename T> inline void __trace_out_var(vector<T> val) { cerr << arrStr(val, val.size()); }
template<typename T> inline void __trace_out_var(T* val) { cerr << arrStr(val, 10); }
template<typename T> inline void __trace_out_var(T val) { cerr << val; }
inline void __trace(vector<string>::iterator it) { cerr << endl; }
 
template<typename T, typename... Args>
inline void __trace(vector<string>::iterator it, T a, Args... args) {
    cerr << it->substr((*it)[0] == ' ', it->length()) << "=";
    __trace_out_var(a);
    cerr << "; ";
    __trace(++it, args...);
}
/*/-----------------------------Code begins----------------------------------/*/
int ar[N];
int dp[N];

signed main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	IOS;
	int T=1;
	// cin >> T;
	while(T--){
		int d ,t ,s;
		cin >> d >> t >>s;
		cout<<(s*t>=d?"Yes\n":"No\n");
		
	
	}
	return 0;
}