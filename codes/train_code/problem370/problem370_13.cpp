#include <algorithm>
#include <cassert>
#include <cfloat>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>
 
#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define all(v) begin(v), end(v)
#define debug(x) std::cerr<< #x <<": "<<x<<"\n"
#define debug2(x,y) std::cerr<< #x <<": "<< x <<", "<< #y <<": "<< y <<"\n"
 
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;
typedef deque<bool> db;
template<class T> using vv=vector<vector< T > >;

// cout vector
template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
  int len=v.size();s<<"\n";rep(i,len){s<<v[i];if(i<len-1){s << "\t";}}s<<"\n";return s; }
// cout 2-dimentional vector
template<typename T> ostream& operator<<(ostream& s, const vector< vector<T> >& vv) {
  int len=vv.size();rep(i,len){s<<vv[i];} return s; }
// cout deque
template<typename T> ostream& operator<<(ostream& s, const deque<T>& v) {
  int len=v.size();s<<"\n";rep(i,len){s<<v[i];if(i<len-1){s << "\t";}}s<<"\n";return s; }
// cout 2-dimentional deque
template<typename T> ostream& operator<<(ostream& s, const deque< deque<T> >& vv) {
  int len=vv.size();rep(i,len){s<<vv[i];} return s; }
// cout set<cout-able>
template<typename T> ostream& operator<<(ostream& s, const set<T>& v) {
  s<<"\n";for(auto elm : v){s<<elm<<"\t";}s<<"\n";return s; }

inline void scan(int&a){scanf("%d",&a);}
inline void scan(int&a,int&b){scanf("%d%d",&a,&b);}
inline void scan(int&a,int&b,int&c){scanf("%d%d%d",&a,&b,&c);}
inline void scan(int&a,int&b,int&c,int&d){scanf("%d%d%d%d",&a,&b,&c,&d);}
inline void scan(vector<int>&v){int sz=v.size();rep(i,sz){scan(v[i]);}}
inline void scan(vector<vector<int> >&v){int sz=v.size();rep(i,sz){scan(v[i]);}}
inline void scan(ll&a){scanf("%lld",&a);}
inline void scan(ll&a,ll&b){scanf("%lld%lld",&a,&b);}
inline void scan(ll&a,ll&b,ll&c){scanf("%lld%lld%lld",&a,&b,&c);}
inline void scan(ll&a,ll&b,ll&c,ll&d){scanf("%lld%lld%lld%lld",&a,&b,&c,&d);}
inline void scan(vector<ll>&v){int sz=v.size();rep(i,sz){scan(v[i]);}}
inline void scan(vector<vector<ll> >&v){int sz=v.size();rep(i,sz){scan(v[i]);}}
inline void scan(char&a){scanf(" %c",&a);}
inline void scan(vector<char>&v){int sz=v.size();rep(i,sz){scan(v[i]);}}
inline void scan(vector<vector<char> >&v){int sz=v.size();rep(i,sz){scan(v[i]);}}
inline void scan(string&s){char BUF[3000000];scanf(" %s",BUF);s=string(BUF);}

inline void print(int a){printf("%d\n",a);}
inline void print(int a,int b){printf("%d %d\n",a,b);}
inline void print(ll a){printf("%lld\n",a);}
inline void print(ll a,ll b){printf("%lld %lld\n",a,b);}
inline void print(string s){cout << s << "\n";}
inline void print_yn(bool flg){if(flg){printf("Yes\n");}else{printf("No\n");}}

class UF {
private:
  vector<int> data; // parent or size
  void init(int n) {
    data.assign(n, -1);
  }

public:
  UF() {}
  UF(int n) {
    init(n);
  }
  int root(int x) {
    if (data[x] < 0) return x;
    return data[x] = root(data[x]);
  }
  bool unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return false;
    if (data[x] > data[y]) swap(x, y); // data[x] and data[y] are negative.
    data[x] += data[y];
    data[y] = x;
    return true;
  }
  int size(int x) {
    return -data[root(x)];
  }
  bool same(int x, int y) {
    return root(x) == root(y);
  }
};

vv<vi> g;

int main() {
  int n, m;
  scan(n, m);
  g.resize(n);
  auto uf = UF(n);
  rep (i, m) {
    int l, r, d;
    scan(l, r, d);
    l--; r--;
    g[l].push_back({r, d});
    g[r].push_back({l, -d});
    uf.unite(l, r);
  }
  int max_width = 1e9;
  vector<bool> calced(n, false);
  vector<bool> reached(n, false);
  vi x(n, 0);
  rep (i, n) {
    if (calced[uf.root(i)]) {
      continue;
    }
    calced[uf.root(i)] = true;
    deque<int> stk;
    stk.push_back(i);
    int mi = 0;
    int ma = 0;
    while (!stk.empty()) {
      int u = stk.front();
      stk.pop_front();
      for (auto e : g[u]) {
        int v = e[0];
        if (reached[v]) {
          if (x[v] != x[u] + e[1]) {
            printf("No\n");
            return 0;
          }
          continue;
        }
        reached[v] = true;
        x[v] = x[u] + e[1];
        mi = min(mi, x[v]);
        ma = max(ma, x[v]);
        stk.push_back(v);
      }
    }
    if (ma - mi > max_width) {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");

  return 0;
}
