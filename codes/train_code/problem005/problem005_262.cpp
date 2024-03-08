#include <bits/stdc++.h>


using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<int(n); i++)
#define FOR(i,m,n) for(int i=int(m); i<int(n); i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define VI vector<int>
#define VLL vector<long long>
#define VVI vector<vector<int>>
#define VVLL vector<vector<long long>>
#define VC vector<char>
#define VS vector<string>
#define VVC vector<vector<char>>
#define VB vector<bool>
#define VVB vector<vector<bool>>
#define fore(i,a) for(auto &i:a)

typedef pair <int, int> P;
template<class T> bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
const int  INF = 1 << 30;
const ll INFL = 1LL << 60;
const ll mod = 1000000007;


int main() {
	
	int n;
	cin >> n;
	int ans = 0;

	VS s(n);
	REP(i, n)cin >> s[i];

	REP(i, n) {

		bool check = true;

		REP(j, n) {
			REP(k, n) {
				if (s[j][k] != s[k][j])check = false;
			}
		}
		if (check)ans++;
		REP(j, n) {
			s[j] = s[j].substr(1) + s[j][0];
		}
	}
	ans *= n;
	cout << ans << endl;


}