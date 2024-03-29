#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define REP(i,a,n) for(int i = a;i < (n);i++)
#define rep(i,n) for(int i = 0;i < (n);i++)
#define all(s) s.begin(), s.end()
#define rall(s) s.rbegin(), s.rend()
#define range(x,min,max) ((min) <= (x) && (x) <= (max))
#define xyrange(x, minX, maxX, y, minY, maxY) (range(x, minX, maxX) && range(y, minY, maxY))

using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef pair<int,int> PII;
typedef vector<PII> VPII;


const int DX[]={1,0,-1,0},DY[]={0,-1,0,1};
const int INF = INT_MAX / 2;

string alpha_l = "qwertasdfgzxcvvb";

bool l_check(char c) {
	for (char a : alpha_l) {
		if (c == a) return true;
	}
	return false;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	while (1) {
		string s;
		cin >> s;
		if (s == "#") break;
		int ans = 0;
		bool flag = l_check(s[0]);
		REP (i, 1, s.size()) {
			if (flag != l_check(s[i])) {
				flag = !flag;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}