#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
#include <assert.h>
#include <unordered_map>
#include <fstream>
#include <complex>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef pair<ll,ll> P;
typedef pair<int,int> pii;
typedef vector<P> vpl;
typedef tuple<ll,ll,ll> tapu;
#define rep(i,n) for(int i=0; i<(n); i++)
#define REP(i,a,b) for(int i=(a); i<(b); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int inf = 1<<30;
const ll linf = 1LL<<62;
const int MAX = 510000;
ll dy[8] = {0,-1,0,1,1,-1,1,-1};
ll dx[8] = {1,0,-1,0,1,-1,-1,1};
const double pi = acos(-1);
const double eps = 1e-7;
template<typename T1,typename T2> inline bool chmin(T1 &a,T2 b){
    if(a>b){
        a = b; return true;
    }
    else return false;
}
template<typename T1,typename T2> inline bool chmax(T1 &a,T2 b){
    if(a<b){
        a = b; return true;
    }
    else return false;
}
template<typename T> inline void print(T &a){
    rep(i,a.size()) cout << a[i] << " ";
    cout << "\n";
}
template<typename T1,typename T2> inline void print2(T1 a, T2 b){cout << a << " " << b << "\n";}
template<typename T1,typename T2,typename T3> inline void print3(T1 a, T2 b, T3 c){
    cout << a << " " << b << " " << c << "\n";
}
ll pcount(ll x) {return __builtin_popcountll(x);}
const ll mod = 1e9 + 7;
//const int mod = 998244353;

map<string,int> mp;
vs v(202020);

char rev(char c){
    return (char)(((c - '0') ^ 1) + '0');
}

int main(){
    string s; cin >> s;
    int n = s.size();
    rep(i,26) v[0].push_back('0');
    mp[v[0]] = 0;
    int dp;
    rep(i,n){
        v[i+1] = v[i];
        char c = v[i+1][s[i]-'a'];
        v[i+1][s[i]-'a'] = rev(v[i+1][s[i]-'a']);
        auto v_ = v[i+1];
        dp = inf;
        rep(j,26){
            v_[j] = rev(v_[j]);
            if(mp.find(v_) != mp.end()){
                chmin(dp, mp[v_] + 1);
            }
            v_[j] = rev(v_[j]);
        }
        if(mp.find(v[i+1]) != mp.end()){
            chmin(dp, mp[v[i+1]] + 1);
            chmin(mp[v[i+1]], dp);
        }else{
            mp[v[i+1]] = dp;
        }
    }
    cout << dp << "\n";
}