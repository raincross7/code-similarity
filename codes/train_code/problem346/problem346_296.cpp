#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")

using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define REP(i,num,n) for(int i=num, i##_len=(n); i<i##_len; ++i)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define print(x) (cout << (x) << endl)
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
template<class T> inline void Yes(T condition){ if(condition) cout << "Yes" << endl; else cout << "No" << endl; }
#define fs first
#define sc second
template<typename T> vector<T> make_vec(size_t n, T a) { return vector<T>(n, a); }
template<typename... Ts> auto make_vec(size_t n, Ts... ts) { return vector<decltype(make_vec(ts...))>(n, make_vec(ts...)); }
template<typename T> ostream &operator<<(ostream &os, const vector<T> &v) { for (auto &e : v) os << e << ' '; return os; }
// 多倍長
#include <boost/rational.hpp>
#include <boost/multiprecision/cpp_int.hpp>
using boost::rational;
using boost::multiprecision::cpp_int;

const double PI = acos(-1);
const int INF = 1e9;
const ll LLINF = 1e16;
const ll MOD = 1e9+7;
template<class T> inline void add(T &a, T b){a = ((a+b) % MOD + MOD) % MOD;};

 

// 指定した文字cが文字列に何文字入ってるか
ll stringcount(string s, char c) {
    return count(s.cbegin(), s.cend(), c);
}


// 割り算の切り上げ処理
template<typename T>
T rp(T a, T b) {
  return (a + b - 1) / b;
}

// 桁和
template<typename T>
T digsum(T n) {
    T res = 0;
    while(n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

// 回文判定
bool kai (string s) {
    string t{s};
    reverse(begin(t), end(t));
    return s == t;
}

using pint = pair<int, int>;
using pll = pair<ll, ll>;


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    string item;
    for (char ch: s) {
        if (ch == delim) {
            if (!item.empty())
                elems.push_back(item);
            item.clear();
        }
        else {
            item += ch;
        }
    }
    if (!item.empty())
        elems.push_back(item);
    return elems;
}


int main(void)
{
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    int h,w,m;
    cin >> h >> w >> m;
    vector<int> hs(h), ws(w);
    set<pint> s;
    rep(i, m){
        int r,c;
        cin >> r >> c;
        --r; --c;
        hs[r]++;
        ws[c]++;
        s.emplace(r, c);
    }
    int mh = 0, mw = 0;
    rep(i, h) chmax(mh, hs[i]);
    rep(j, w) chmax(mw, ws[j]);
    vector<int> is, js;
    rep(i, h) if(mh == hs[i]) is.push_back(i);
    rep(j, w) if(mw == ws[j]) js.push_back(j);
    int ans = mh + mw;
    for(int i : is) for (int j : js){
        if(s.count(pint(i, j))) continue;
        print(ans);
        return 0;
    }
    print(ans - 1);



}
