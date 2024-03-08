#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <cctype>
#include <cassert>
#include <climits>
#include <string>
#include <bitset>
#include <cfloat>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
//#pragma GCC optimize("Ofast")
//#define _GLIBCXX_DEBUG
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
//#define int ll
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vpii;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef vector<vector<string> > vvs;
typedef vector<vector<ll> > vvll;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define irep(it, stl) for(auto it = stl.begin(); it != stl.end(); it++)
#define drep(i,n) for(int i = (n) - 1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define mp(p,q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define floatprec(dig) fixed << setprecision(dig)
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define itn int;
#define invar(typ, var) typ var; cin >> var;
int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;} return 0;}
template <class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;} return 0;}
struct io{io(){ios::sync_with_stdio(false);cin.tie(0);}};
const int INF = INT_MAX / 2;
const ll LLINF = 1LL<<60;
constexpr ll MOD = 1000000007;
const double EPS = 1e-9;

signed main(void) {
  cin.tie(0); ios::sync_with_stdio(false);
  
  string s;
  cin >> s;
  
  ll N;
  N = s.size();
  
  vector<int> indexd;
  indexd.push_back(-1);
  
  {
    string nox;
    
    rep(i, N) {
      if(s[i] != 'x') {
        nox.push_back(s[i]);
        indexd.push_back(i);
      }
    }
    
    bool ci = true;
    rep(i, nox.size() / 2) {
      if(nox[i] != nox[nox.size() - i - 1]) {
        ci = false;
        break;
      }
    }
    
    if(!ci) {
      fin(-1);
      return 0;
    }
  }
  
  //next
  indexd.push_back(N);
  int l = indexd.size() / 2 - 1;
  int r = (indexd.size() + 1) / 2;
  
  int ct = 0;
  if(indexd.size() % 2 == 1) {
    int c = indexd[indexd.size() / 2];
    ct += abs((c - indexd.at(l)) - (indexd[r] - c));
  }
  
  while(l > 0) {
    ct += abs((indexd[l] - indexd[l-1]) - (indexd[r+1] - indexd[r]));
    l --;
    r ++;
  }
  
  fin(ct);
}