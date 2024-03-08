#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rrep(i, n) for (int i = 1; i <= n; i++)
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll a, ll b) { return (a * b) / gcd(a,b); }
using P = pair <int, int>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll MOD = 1000000007;
ll INF =1<<29;

int main(){
    int n,m;
    cin >> n >> m;
    vector<pair<ll,ll>> a(n);
    rep(i,n) cin >> a[i].first >> a[i].second;
    sort(a.begin(),a.end());
    ll tot = 0;
    int SUM = 0;
    rep(i,m){
    if(SUM<=m){
        tot += a[i].first*a[i].second;
        SUM += a[i].second;
    } 
    if(SUM == m){
        cout << tot << endl;
        return 0;
    }
    if(SUM>m){
        tot -=a[i].first*(SUM-m);
        cout << tot << endl;
        return 0;
    }
    }
}
