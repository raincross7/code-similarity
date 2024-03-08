#include <bits/stdc++.h>
using namespace std;
    
//#define int long long
#define pb push_back
#define ub upper_bound
#define lb upper_bound
#define mp make_pair
#define F first
#define S second
#define FOR(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) FOR(i,0,n)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define SORT(c) sort((c).begin(),(c).end())
#define ve vector
#define vi vector<int>
#define vp vector<pair<int,int>>
#define vvi vector<vector<int>>
    
using ll = long long;
const ll INF = INT_MAX / 4 - 100;
ll mod = 1e9 + 7;
int dx[] = {-1,0,1,0}, dy[] = {0,1,0,-1};
int ddx[] = {-1,0,1,-1,1,-1,0,1}, ddy[] = {1,1,1,0,0,-1,-1,-1};
vector<ll> prime;
    
class fact {
public:
    int fmod = 1e9+7;
    vector<int> fac, inv;
    fact (int n, int Mod = 1e9+7) {
        fmod = Mod;
        fac = vector<int>(n + 1,0);
        inv = vector<int>(n + 1,0);
        fac[0] = 1; for (int i = 1; i < n + 1; i++) fac[i] = fac[i-1] * i % fmod;
        for (int i = 0;i < n + 1;i++) inv[i] = fact::POW(fac[i],fmod-2);
    }
    ll nCr(ll n, ll r) {if (n<r) return 0; return (fac[n] * inv[r] % fmod) * inv[n-r] % fmod;}
    ll POW(ll a, ll b) {ll c = 1; while (b > 0) {if (b & 1) {c = a * c%fmod;}a = a * a%fmod; b >>= 1;}return c;}
};
    
template <class T = ll> T in() {T x; cin >> x; return (x);}
void DEBUG(vector<int> a) {for(int i=0;i<a.size();i++)cout<<a[i]<<" ";cout<<endl;}
void EMP(int x) {cout<<"!!!"<<x<<"!!!"<<endl;}
ll GCD(ll a, ll b) {ll c; while (b != 0) {c = a % b; a = b; b = c;}return a;}
ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;}
ll POW(ll a, ll b) {ll c = 1; while (b > 0) {if (b & 1) {c = a * c%mod;}a = a * a%mod; b >>= 1;}return c;}
void PRI(ll n) {bool a[n + 1LL]; for (int i = 0; i < n + 1LL; i++) {a[i] = 1LL;}for (int i = 2; i < n + 1LL; i++) {if (a[i]) {prime.pb(i); ll b = i; while (b <= n) {a[b] = 0; b += i;}}}}
template <typename T> bool chmin(T& a, T b) {bool res=false;if(a>b)a=b,res=true;return res;}
template <typename T> bool chmax(T& a, T b) {bool res=false;if(a<b)a=b,res=true;return res;}
bool isSqrt(ll a) {return (pow(sqrt(a),2) == a) ? 1 : 0;}
void YesNo(bool a) {if (a) cout << "Yes"; else cout << "No"; cout << endl;}
void yesno(bool a) {if (a) cout << "yes"; else cout << "no"; cout << endl;}
void YESNO(bool a) {if (a) cout << "YES"; else cout << "NO"; cout << endl;}

long long extGCD(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long d = extGCD(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

long long mul(long long a, long long b, long long mod) {
    long long keta[20] = {};
    long long c = b;
    long long now = 0;
    while (c != 0ll) {
        keta[now] = c % 10; c /= 10; now++;
    }
    long long res = 0;
    for (int i = 19; i >= 0; --i) {
        res *= 10; res %= mod;
        res += keta[i] * a % mod;
    }
    return res % mod;
}

void solve() {
  string s; cin >> s;
  vector<int> mi(1<<26, INF);
  mi[0] = 0;
  int now = 0;
  int ans;
  for (auto e : s) {
    now ^= (1<<(e-'a'));
    int t = mi[now] + 1;
    rep (i, 26) {
      chmin(t, mi[now ^ (1<<i)] + 1);
    }
    chmin(mi[now], t);
    ans = t;
  }
  cout << ans << endl;
}

signed main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();    
}
