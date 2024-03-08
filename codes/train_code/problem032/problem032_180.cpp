#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
#define rep(i,x) for(ll i = 0; i < (ll)(x); i++)
#define rrep(i,x) for(ll i = (ll)(x)-1;0 <= i; i--)
#define reps(i,x) for(ll i = 1; i < (ll)(x)+1; i++)
#define rreps(i,x) for(ll i = (ll)(x); 1 <= i; i--)
#define debug(x) cerr << #x << ": " << (x) << "\n";
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef long double ld;
typedef pair<int,int> P;
typedef pair<ll,ll> Pll;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef vector<vector<vector<ll>>> vvvl;
const ll INF = numeric_limits<ll>::max()/4;
const int n_max = 1e5+10;

template<class T>
bool chmax(T &a, T b){if(a < b){a = b; return true;} return false;}
template<class T>
bool chmin(T &a, T b){if(a > b){a = b; return true;} return false;}

int main(){
    ll n,k; cin >> n >> k;
    vector<ll> a(n), b(n);
    rep(i,n)cin >> a[i] >> b[i];
    ll ans = 0;
    ll temp = 0;
    rep(i,n)if((a[i] | k) == k)temp += b[i];
    chmax(ans, temp);
    temp = 0;

    // debug(ans);

    ll kdash, adash;
    rep(i,35){
        kdash = k >> i;
        if((kdash & 1) == 0)continue;
        rep(j,n){
            adash = a[j] >> i;
            if((adash & 1) == 1)continue;
            if((adash | kdash) == kdash)temp += b[j];
        }

        chmax(ans, temp);
        // debug(i);debug(kdash);debug(temp);
        temp = 0;
    }

    cout << ans << endl;
}