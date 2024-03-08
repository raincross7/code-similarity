#ifdef LOCAL111
	#define _GLIBCXX_DEBUG
#else
	#define NDEBUG
#endif
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
const int INF = 1e8;
using namespace std;
template<typename T, typename U> ostream& operator<< (ostream& os, const pair<T,U>& p) { cout << '(' << p.first << ' ' << p.second << ')'; return os; }

#define endl '\n'
#define ALL(a)  (a).begin(),(a).end()
#define SZ(a) int((a).size())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n)  FOR(i,0,n)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#ifdef LOCAL111
	#define DEBUG(x) cout<<#x<<": "<<(x)<<endl
	template<typename T> void dpite(T a, T b){ for(T ite = a; ite != b; ite++) cout << (ite == a ? "" : " ") << *ite; cout << endl;}
#else
	#define DEBUG(x) true
	template<typename T> void dpite(T a, T b){ return; }
#endif
#define F first
#define S second
#define SNP string::npos
#define WRC(hoge) cout << "Case #" << (hoge)+1 << ": "
template<typename T> void pite(T a, T b){ for(T ite = a; ite != b; ite++) cout << (ite == a ? "" : " ") << *ite; cout << endl;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}

typedef long long int LL;
typedef unsigned long long ULL;
typedef pair<int,int> P;

void ios_init(){
	//cout.setf(ios::fixed);
	//cout.precision(12);
#ifdef LOCAL111
	return;
#endif
	ios::sync_with_stdio(false); cin.tie(0);	
}

int main()
{
	ios_init();
	string s;
	while(cin >> s) {
		int n = s.size();
		unordered_map<int,int> dp;
		dp[0] = 0;
		using bs = bitset<26>;
		bs tmp = 0;
		int ans;
		REP(i,n){
			int c = s[i]-'a';
			tmp[c] = !tmp[c];
			int mi = INF;
			REP(i,n) {
			}
			REP(j,26){
				auto t = tmp;
				t[j] = !t[j];
				auto ite = dp.find(t.to_ulong());
				if(ite != dp.end()) {
					chmin(mi, ite->S+1);
				}
			}
			{
				auto ite = dp.find(tmp.to_ulong());
				if(dp.find(tmp.to_ulong()) != dp.end()){
					chmin(mi,ite->S+1);
				}
			}
			ans = mi;

			{
				auto ite = dp.find(tmp.to_ulong());
				if(ite == dp.end()) {
					dp[tmp.to_ulong()] = mi;
				}
			}
			chmin(dp[tmp.to_ulong()], mi);
		}
		cout << ans << endl;
	}
	return 0;
}
