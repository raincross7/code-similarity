#include <bits/stdc++.h>
using namespace std;

// Loops
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for (int i = int(a); i < int(b); ++i)
#define _rrep(i, n) rrepi(i, n, 0)
#define rrepi(i, a, b) for (int i = int(a) - 1; i >= int(b); --i)

#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
#define rrep(...) _overload3(__VA_ARGS__, rrepi, _rrep, )(__VA_ARGS__)
#define each(xi, x) for (auto &&xi : x)
// Note: we can use rep(i,N) or rep(i,from,to)

// typedef
template <class T> using vec = vector<T>;
using ll = long long;
using vi = vec<ll>;
using vvi = vec<vi>;
using vvvi = vec<vvi>;
using pii = pair<ll, ll>;

// Constants

// Shorter repr for frequently used terms
#define pb push_back
#define mp make_pair

// Algorithms
#define all(x) (x).begin(), (x).end()
#define uniq(v) v.erase(unique(all(v)), v.end())
#define perm(c)                                                                \
  sort(all(c));                                                                \
  for (bool c##p = 1; c##p; c##p = next_permutation(all(c)))

template <class T> pair<T, size_t> max(vector<T> &x) {
  auto it = max_element(all(x));
  return mp(*it, it - x.begin());
}
template <class T> pair<T, size_t> min(vector<T> &x) {
  auto it = min_element(all(x));
  return mp(*it, it - x.begin());
}

template <class T> inline bool chmax(T &maxval, const T &newval) {
  if (maxval < newval) {
    maxval = newval;
    return 1;
  }
  return 0;
}
template <class T> inline bool chmin(T &minval, const T &newval) {
  if (minval > newval) {
    minval = newval;
    return 1;
  }
  return 0;
}

// Utilities
// Grid world utilities
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
#define inside(H, W, y, x) 0 <= (x) && (x) < (W) && 0 <= (y) && (y) < (H)

// Debug
#ifdef LOCAL
#include "dump.hpp"
#define debug(x) cerr << #x << ": " << x << '\n'
#else
#define dump(...)
#define debug(x)
#endif

// Paste snippets here!!
unordered_set<ll> isL;

bool is_lunlun(ll x){
  if(isL.find(x/10)==isL.end()) return false;
  int p = x%10;
  int q = (x/10)%10;
  if(abs(p-q)>1) return false;
  isL.insert(x);
  return true;
}
//

void solve(long long K) {
  queue<ll> q;
  rep(i,1,10) { q.push(i); }
  ll x;
  rep(k,K){
    x = q.front(); q.pop();
    if(x%10!=0) { 
      ll val = x*10+(x%10)-1; 
      q.push(val);
    }
    q.push(x*10+(x%10));
    if(x%10!=9) {
      ll val = x*10+(x%10)+1;
      q.push(val);
    }
  }
  cout << x << endl;
}

// TLE
void solve_old(long long K) {
  if(K<10) { cout << K << endl; return; }
  rep(i,1,10) isL.insert(i);
  K -= 9;
  ll x = 0;
  while(K>0){
    x++;
    if(is_lunlun(x)) {
      //cerr << x << endl;
      K--;
    }
  }
  cout << x << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false); // Magic for faster cin
  cout.precision(12);
  long long K;
  std::cin >> K;
  solve(K);
  return 0;
}