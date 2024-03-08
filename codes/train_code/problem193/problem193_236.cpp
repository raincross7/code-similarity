#include <bits/stdc++.h>
using namespace std;

// エイリアス
using  ll = long signed long;
using ull = long unsigned long;
using  ld = long double;
using   P = pair<int, int>;
using llP = pair<ll, ll>;
using DoP = pair<double, double>;

// 汎用マクロ
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define FOREACH(i,q) for (auto &i : q)
#define UNIQUE(v) do { sort((v).begin(), (v).end()); (v).erase(unique((v).begin(), (v).end()), (v).end()); } while (false)
#define SZ(x) ((int)(x).size())
template <class T>inline bool chmin(T &a, const T b) {if (a > b) { a = b; return true;} return false;}
template <class T>inline bool chmax(T &a, const T b) {if (a < b) { a = b; return true;} return false;}
template <class T>inline void line_out(const vector<T> vec) {int n = SZ(vec); rep(i, n) { cout << vec[i]; if(i < n-1) cout << " ";}cout << endl;}
const int di[] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dj[] = {1, 0, -1, 0, 1, -1, 1, -1};
const int di2[] = {1, 1, -1, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -1};
const int dj2[] = {1, -1, 1, -1, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -1, 0, 1, 2, 2};
const int INF = 1 << 28;
const ll INF64 = 1ll << 55;
const int mod = 1000000007;
//const int mod = 998244353;


int main(){
  string s; cin >> s;
  int a, b, c, d;
  a = s[0]-'0';
  b = s[1]-'0';
  c = s[2]-'0';
  d = s[3]-'0';
  vector<char> ope = {'+', '-'};
  rep(i, 2) rep(j, 2) rep(k, 2) {
    if(a + b*(int)pow(-1, i) + c*(int)pow(-1, j) + d*(int)pow(-1, k) == 7) {
      cout << a << ope[i] << b << ope[j] << c << ope[k] << d << "=7" << endl;
      return 0;
    }
  }
}