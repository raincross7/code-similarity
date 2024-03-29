#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<cassert>
#include<complex>
#include<numeric>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ul;
typedef unsigned int ui;
typedef pair<int, int>P;
typedef pair<ll, ll> LP;
typedef long double ld;
typedef pair<ld, ld> LDP;
typedef vector<vector<ll>> mat;
typedef vector<ll> vec;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
#define all(v) (v).begin(),(v).end()
const ll mod = 1000000007;
const ll INF = mod * mod;
const ld eps = 1e-12;
const ld pi = acos(-1.0);
//int qp(int a,ll b){int ans=1;do{if(b&1)ans=1ll*ans*a%mo;a=1ll*a*a%mo;}while(b>>=1);return ans;}
ll qp(ll a,ll b,int mo){int ans=1;do{if(b&1)ans=1ll*ans*a%mo;a=1ll*a*a%mo;}while(b>>=1);return ans;}
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;} // 最大公約数
ll lcm (ll a, ll b){return a/gcd(a,b)*b;} // 最小公倍数
int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

template<typename T> istream &operator>>(istream &is, vector<T> &vec){ for (auto &v : vec) is >> v; return is; }
template<typename T> ostream &operator<<(ostream &os, const vector<T> &vec){ os << "["; for (auto v : vec) os << v << ","; os << "]"; return os; }
template<typename T> ostream &operator<<(ostream &os, const deque<T> &vec){ os << "deq["; for (auto v : vec) os << v << ","; os << "]"; return os; }
template<typename T> ostream &operator<<(ostream &os, const set<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> ostream &operator<<(ostream &os, const unordered_set<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> ostream &operator<<(ostream &os, const multiset<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T> ostream &operator<<(ostream &os, const unordered_multiset<T> &vec){ os << "{"; for (auto v : vec) os << v << ","; os << "}"; return os; }
template<typename T1, typename T2> ostream &operator<<(ostream &os, const pair<T1, T2> &pa){ os << "(" << pa.first << "," << pa.second << ")"; return os; }
template<typename TK, typename TV> ostream &operator<<(ostream &os, const map<TK, TV> &mp){ os << "{"; for (auto v : mp) os << v.first << "=>" << v.second << ","; os << "}"; return os; }
template<typename TK, typename TV> ostream &operator<<(ostream &os, const unordered_map<TK, TV> &mp){ os << "{"; for (auto v : mp) os << v.first << "=>" << v.second << ","; os << "}"; return os; }
template<typename T> void ndarray(vector<T> &vec, int len) { vec.resize(len); }
template<typename T, typename... Args> void ndarray(vector<T> &vec, int len, Args... args) { vec.resize(len); for (auto &v : vec) ndarray(v, args...); }
template<typename T> bool chmax(T &m, const T q) { if (m < q) {m = q; return true;} else return false; }
template<typename T> bool chmin(T &m, const T q) { if (q < m) {m = q; return true;} else return false; }
template<typename T1, typename T2> pair<T1, T2> operator+(const pair<T1, T2> &l, const pair<T1, T2> &r) { return make_pair(l.first + r.first, l.second + r.second); }
template<typename T1, typename T2> pair<T1, T2> operator-(const pair<T1, T2> &l, const pair<T1, T2> &r) { return make_pair(l.first - r.first, l.second - r.second); }
template<typename T1, typename T2> pair<T1, T2> operator<(const pair<T1, T2> l, const pair<T1, T2> r) { return (l.first < r.first); }
template<typename T1, typename T2> pair<T1, T2> operator>(const pair<T1, T2> l, const pair<T1, T2> r) { return (l.first > r.first); }


map<long long, long long> prime_factor(long long n) {
    map<long long, long long> res;
    for(long long i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            ++res[i];
            n /= i;
        }
    }
    if(n != 1) res[n] = 1;
    return res;
}

ll cal(ll n){
    map<ll, ll> count;

    rep1(i,n){
        map<ll, ll> prime = prime_factor(i);
        for(auto p: prime){
            count[p.first] += p.second;
        }
    }

    ll co_over_2 = 0;
    ll co_over_4 = 0;
    ll co_over_14 = 0;
    ll co_over_24 = 0;
    ll co_over_74 = 0;
    
    for(auto c: count){
        if(c.second>=2)co_over_2++;
        if(c.second>=4)co_over_4++;
        if(c.second>=14)co_over_14++;
        if(c.second>=24)co_over_24++;
        if(c.second>=74)co_over_74++;
    }

    ll res = 1;
    res *= (co_over_4)*(co_over_4-1)/2;
    res *= (co_over_2 - 2);

    res += co_over_14 * (co_over_4-1);
    res += co_over_24 * (co_over_2-1);
    res += co_over_74;
    
    return res;
}

void solve() {
    ll N; cin >> N;
    ll res = cal(N);

    cout << res << endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    std::cout << fixed << setprecision(10);
    solve();
    return 0;
}
