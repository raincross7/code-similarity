#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define bit(n) (1<<(n))
#define ii(x) int x; cin >> (x)
#define ii2(x, y) int x, y; cin >> (x) >> (y)
#define ii3(x, y, z) int x, y, z; cin >> (x) >> (y) >> (z)
#define yn(x, ok, ng) cout << ((x)?(ok):(ng)) << endl
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}
int const INF = 1001001001;


int main()
{
cin.tie(0);
ios::sync_with_stdio(false);

string s,t; cin >> s >> t;
int n = SZ(s);

vvi fi(26, vi(26));
rep(i,n) {
    int a = s[i] - 'a';
    int b = t[i] - 'a';
    fi[a][b] = 1;
}

rep(i,26) {
    int cnt = 0;
    rep(j,26) if (fi[i][j]) cnt++;
    if (2 <= cnt) {
        cout << "No" << endl;
        return 0;
    }
}
rep(j,26) {
    int cnt = 0;
    rep(i,26) if (fi[i][j]) cnt++;
    if (2 <= cnt) {
            cout << "No" << endl;
            return 0;
    }
}
cout << "Yes" << endl;
return 0;
}