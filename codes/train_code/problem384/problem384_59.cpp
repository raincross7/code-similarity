#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = ll(1e12);
const ll mod = ll(1e9+7);
const double pi = acos(-1);
#define rep0(i,n) for(ll (i) = 0; (i) < (n); ++(i))
#define rrep0(i,n) for(ll (i) = (n) - 1; (i) >= 0; --(i))
#define rep1(i,n) for(ll (i) = 1; (i) <= (n); ++(i))
#define rrep1(i,n) for(ll (i) = (n); (i) >= 1; --(i))
#define nfor(i,a,b) for(ll (i) = (a); (i) < (b); ++(i))
#define pf(x) cout << (x) << endl
#define all(x) (x).begin(),(x).end()
#define yes pf("Yes")
#define no pf("No")
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int dx[8]={1,0,-1,0,1,1,-1,-1};
int dy[8]={0,1,0,-1,1,-1,1,-1};

ll gcd(ll a,ll b){
    if(a < b)swap(a, b);
    if(b == 0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    ll g = gcd(a,b);
    return a / g * b;
}

ll factorial(ll n){
    ll ans = 1;
    rep1(i, n){
        ans *= i;
        ans %= mod;
    }
    return ans;
}

ll power(ll a, ll b){
    ll ans = 1;
    a %= mod;
    while(b) {
        if(b & 1LL) ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans % mod;
}

//modの値の確認をすること
int main(){
    ll n,k;
    string s;
    cin >> n >> k >> s;
    s.push_back('2');
    vector<ll> c(0);
    if(s[0] == '0')c.push_back(0);
    ll cnt = 1;
    rep0(i, n){
        if(s[i] != s[i + 1]){
            c.push_back(cnt);
            cnt = 1;
        }else ++cnt;
    }
    if(s[s.size() - 2] == '0')c.push_back(0);
    rep0(i, c.size() - 1)c[i + 1] += c[i];
    ll ans = 0;
    rep0(i, max(ll(c.size() - k * 2),1ll)){
        if(i + k * 2 < c.size())chmax(ans, c[i + k * 2] - (i > 0? c[i - 1]:0));
        else chmax(ans, c[c.size() - 1]);
        ++i;
    }
    pf(ans);
    return 0;
}
