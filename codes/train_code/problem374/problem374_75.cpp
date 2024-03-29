#include<bits/stdc++.h>
using namespace std;
const long long INF = 1e7+1;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i,r,n) for(ll i = (ll)(r); i < (ll)(n); i++)
#define RFOR(i,r,n) for(ll i=(ll)(n-1);i>=r;i--)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(x) x.begin(),x.end()
#define RALL(x) x.rbegin(),x.rend()
typedef long long int ll;
typedef vector<ll> vi;
typedef vector < pair<ll, ll > > vp;
typedef vector <string> vs;
typedef vector <char> vc;
typedef list <ll> lst;

ll n,m, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

/*--------------------template--------------------*/


string table[10] = {
	"",
	".,!? ",
	"abc",
	"def",
	"ghi",
	"jkl",
	"mno",
	"pqrs",
	"tuv",
	"wxyz"
};

int mod[10] = { 1,5,3,3,3,3,3,4,3,4 };

int main()
{
	cin >> n;
	REP(i, n)
	{
		cin >> s;

		cnt = 0;
		string ans;

		REP(i, s.size())
		{
			if (s[i] != '0') {
				cnt++;
			} else {
				if (cnt != 0) {
					ans += table[s[i - 1] - '0'][(cnt - 1) % mod[s[i - 1] - '0']];
					cnt = 0;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}