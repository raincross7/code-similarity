#ifdef LOCAL
//#define _GLIBCXX_DEBUG
#endif
//#pragma GCC target("avx512f,avx512dq,avx512cd,avx512bw,avx512vl")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<int, int> Pi;
typedef vector<ll> Vec;
typedef vector<int> Vi;
typedef vector<string> Vs;
typedef vector<char> Vc;
typedef vector<P> VP;
typedef vector<vector<ll>> VV;
typedef vector<vector<int>> VVi;
typedef vector<vector<char>> VVc;
typedef vector<vector<vector<ll>>> VVV;
typedef vector<vector<vector<vector<ll>>>> VVVV;

#define REP(i, a, b) for(ll i=(a); i<(b); i++)
#define PER(i, a, b) for(ll i=(a); i>=(b); i--)
#define rep(i, n) REP(i, 0, n)
#define per(i, n) PER(i, n, 0)
const ll INF=1e18+18;
const ll MOD=1000000007;
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl;
#define YES(n) cout << ((n) ? "YES" : "NO") << endl;
#define ALL(v) v.begin(), v.end()
#define rALL(v) v.rbegin(), v.rend()
#define pb(x) push_back(x)
#define mp(a, b) make_pair(a,b)
#define Each(a,b) for(auto &a :b)
#define rEach(i, mp) for (auto i = mp.rbegin(); i != mp.rend(); ++i)
#ifdef LOCAL
#define dbg(x_) cerr << #x_ << ":" << x_ << endl;
#define dbgmap(mp) cerr << #mp << ":"<<endl; for (auto i = mp.begin(); i != mp.end(); ++i) { cerr << i->first <<":"<<i->second << endl;}
#define dbgset(st) cerr << #st << ":"<<endl; for (auto i = st.begin(); i != st.end(); ++i) { cerr << *i <<" ";}cerr<<endl;
#define dbgarr(n,m,arr) rep(i,n){rep(j,m){cerr<<arr[i][j]<<" ";}cerr<<endl;}
#define dbgdp(n,arr) rep(i,n){cerr<<arr[i]<<" ";}cerr<<endl;
#else
#define dbg(...)
#define dbgmap(...)
#define dbgset(...)
#define dbgarr(...)
#define dbgdp(...)
#endif
#define out(a) cout<<a<<endl
#define out2(a,b) cout<<a<<" "<<b<<endl
#define vout(v) rep(i,v.size()){cout<<v[i]<<" ";}cout<<endl
#define Uniq(v) v.erase(unique(v.begin(), v.end()), v.end())
#define fi first
#define se second

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }

template<typename T1, typename T2>
ostream &operator<<(ostream &s, const pair<T1, T2> &p) { return s<<"("<<p.first<<", "<<p.second<<")"; }

template<typename T>istream& operator>>(istream&i,vector<T>&v)
{rep(j,v.size())i>>v[j];return i;}

// vector
template<typename T>
ostream &operator<<(ostream &s, const vector<T> &v) {
    int len=v.size();
    for(int i=0; i<len; ++i) {
        s<<v[i];
        if(i<len-1) s<<"	";
    }
    return s;
}

// 2 dimentional vector
template<typename T>
ostream &operator<<(ostream &s, const vector<vector<T> > &vv) {
    int len=vv.size();
    for(int i=0; i<len; ++i) {
        s<<vv[i]<<endl;
    }
    return s;
}

void simulate(){
    Vec v = {250,100,40,20,10,6,2,1};
    ll sum = accumulate(ALL(v),0);
    dbg(sum);
    ll n = v.size();
    ll cnt = 0;
    sort(ALL(v));
    dbg(v);
    {
        ll amari = 0;
        ll goukei = 0;
        rep(i,n){
            goukei += v[i];
            amari += v[i]%n;
        }
        dbg(mp(goukei,amari));
    }
    while(*max_element(ALL(v))>n-1){
        cnt++;
        rep(i,n-1){
            v[i]++;
        }
        v[n-1] -= n;
        sort(ALL(v));
        dbg(v);
            Vec w;
            rep(i,n){
                w.pb(v[i]%n);
            }
            dbg(w);
        ll amari = 0;
        ll goukei = 0;
        rep(i,n){
            goukei += v[i];
            amari += w[i];
        }
        dbg(mp(goukei,amari));
    }
    dbg(cnt);
    exit(0);
}

int solve(){
    ll n;
    cin>>n;
    Vec a(n);
    cin>>a;
    ll sum = accumulate(ALL(a),0LL);
    while(*max_element(ALL(a))>n-1){
        sort(ALL(a));
        ll ma = a[n-1];
        ll x = a[n-1]/n;
        a[n-1] -= x*n;
        rep(i,n-1){
            a[i] += x;
        }
    }
    ll sub = accumulate(ALL(a),0LL);
    out(sum-sub);
    return  0;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<std::setprecision(10);
    //simulate();
    solve();
}
