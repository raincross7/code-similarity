#pragma region header
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
#define ll long long
#define ld long double
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define vs vector<string>
#define vvs vector<vector<string>>
#define vvvs vector<vector<vector<string>>>
#define vd vector<ld>
#define vvd vector<vector<ld>>
#define vvvd vector<vector<vector<ld>>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vvvb vector<vector<vector<bool>>>
#define pii pair<int, int>
#define vp vector<pair<int, int>>
#define vvp vector<vector<pair<int, int>>>
#define vvvp vector<vector<vector<pair<int, int>>>>
#define mii map<int, int>
#define vm vector<map<int, int>>
#define vvm vector<map<pair<int, int>>>
#define vvvm vector<vector<vector<map<int, int>>>>
#define all(a) begin(a), end(a)
#define rall(a) rbegin(a), rend(a)
#define lambda(i) [=](auto i)
#define compare(i, j) [=](auto i, auto j)
#define mp make_pair
#define mt make_tuple
#define rep1(i, n) for (decltype(+n) i = 0; i < (n); i++)
#define rrep1(i, n) for (auto i = n - 1; i != static_cast<decltype(i)>(-1); i--)
#define rep2(i, a, b) for (auto i = (a); i < (b); i++)
#define rrep2(i, a, b) for (auto i = b - 1; i >= a; i--)
#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define rep(...) GET_MACRO(__VA_ARGS__, rep2, rep1) (__VA_ARGS__)
#define rrep(...) GET_MACRO(__VA_ARGS__, rrep2, rrep1) (__VA_ARGS__)
#define each(i, a) for (auto &&i : (a))
#define split_pair(f, s, p) auto f = p.first; auto s = p.second
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;
int mod(int a) { return (a % MOD + MOD) % MOD; }
int m_add(int a, int b) { return (a + b) % MOD; }
int m_add(int a, int b, int c) { return (a + b + c) % MOD; }
int m_sub(int a, int b) { return (a + MOD - b) % MOD; }
int m_mul(int a, int b) { return a * b % MOD; }
int m_mul(int a, int b, int c) { return a * b % MOD * c % MOD; }
int m_bipow(int x, int y) {
  if (y == 0) return 1;
  else if (y == 1) return x % MOD;
  else if (y % 2 == 0) {
    int z = m_bipow(x, (int)(y / 2));
    return m_mul(z, z);
  } else {
    int z = m_bipow(x, (int)(y / 2));
    return m_mul(z, z, x);
  }
}
int m_inv(int x) { return m_bipow(x, MOD - 2); }
int m_div(int a, int b) { return m_mul(a, m_inv(b)); }

template <class T>
void SORT(T &a) { stable_sort(all(a)); }
template <class T>
void RSORT(T &a) { stable_sort(rall(a)); }
template <class T>
void rev(T &a) { reverse(rall(a)); }
template <class T>
void uniq(T &a) { a.erase(unique(all(a)), end(a)); }
template <class T>
auto min_of(T a) { return *min_element(all(a)); }
template <class T>
auto max_of(T a) { return *max_element(all(a)); }
template <class T>
int sum_of(T a) { return accumulate(all(a), 0ll); }
template <class T, class U>
auto sum_of(T a, U init) { return accumulate(all(a), init); }
template <class T, class U>
int count_of(T a, U i) { return count(all(a), i); }
template <class T>
T cum(T v) {
  T u(sz(v));
  partial_sum(all(v), begin(u));
  return u;
}
template <class T, class U>
int lower_index(T a, U i) { return lower_bound(all(a), i) - begin(a); } // use member func for set
template <class T, class U>
int upper_index(T a, U i) { return upper_bound(all(a), i) - begin(a); }
template <class T, class U>
bool binary(T a, U i) { return binary_search(all(a), i); }
template <class T, class U>
bool exists(T a, U i) { return find(all(a), i) != end(a); }
template <class T>
int sz(T a) { return a.size(); };

template <class T>
void COUT(T x) { cout << x << endl; }

template <class T>
bool amin(T &a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template <class T>
bool amax(T &a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template <class T>
vector<pair<T, int>> indexed_vector(vector<T> v) {
  int n = sz(v);
  vector<pair<T, int>> w(n);
  for (int i = 0; i < n; i++) w[i] = make_pair(v[i], i);
  return w;
}
template <class T, class S>
vector<pair<T, S>> zip(vector<T> v, vector<S> w) {
  int n = min(sz(v), sz(w));
  vector<pair<T, S>> x(n);
  for (int i = 0; i < n; i++) x[i] = make_pair(v[i], w[i]);
  return x;
}
template <class T, class S>
pair<vector<T>, vector<S>> unzip(vector<pair<T, S>> v) {
  int n = sz(v);
  auto w = make_pair(vector<T>(n), vector<S>(n));
  for (int i = 0; i < n; i++) {
    w.first[i] = v[i].first;
    w.second[i] = v[i].second;
  }
  return w;
}

vs split(const string& s, string d) {
  vs elms;
  size_t offset = 0, d_size = d.size();
  while (true) {
    size_t next = s.find_first_of(d, offset);
    if (next == string::npos) {
      elms.push_back(s.substr(offset));
      return elms;
    }
    elms.push_back(s.substr(offset, next - offset));
    offset = next + d_size;
  }
}
vs split(const string& s, char d) { return split(s, string(1, d)); }
string join(const vs& v, const string d = "") {
  string s;
  if (!v.empty()) {
    s += v[0];
    for (size_t i = 1, c = v.size(); i < c; ++i) {
      if (!d.empty()) s += d;
      s += v[i];
    }
  }
  return s;
}
string join(const vs& v, const char d) { return join(v, string(1, d)); }

vi divisors(int n) {
  vi ret;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  SORT(ret);
  return ret;
}
mii prime_factors(int n) {
  mii ret;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n]++;
  return ret;
}

int ceil_div(int x, int y) { return (x - 1) / y + 1; }

struct union_find {
  vi data;
  union_find(int size) : data(size, -1) {}
  bool union_set(int x, int y) {
    x = root(x);
    y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y];
      data[y] = x;
    }
    return x != y;
  }
  bool find_set(int x, int y) { return root(x) == root(y); }
  int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
  int size(int x) { return -data[root(x)]; }
};

// struct combination {
//   vi fact, ifact;
//   combination(int n): fact(n + 1), ifact(n + 1) {
//     assert(n < MOD);
//     fact[0] = 1;
//     for (int i = 1; i <= n; ++i) fact[i] = m_mul(fact[i - 1], i);
//     ifact[n] = m_inv(fact[n]);
//     for (int i = n; i >= 1; --i) ifact[i-1] = m_mul(ifact[i], i);
//   }
//   int operator()(int n, int k) {
//     if (k < 0 || k > n) return 0;
//     return m_mul(fact[n], ifact[k], ifact[n - k]);
//   }
// } comb(200001);
#pragma endregion header

// MOD = 1e9 + 7;


void solve(int n) {
  mii ps;
  rep(i, 1, n + 1) {
    mii p = prime_factors(i);
    each(x, p)ps[x.first] += x.second;
  }
  mii c;
  each(i, ps){
    if(i.second >= 74)c[74]++;
    if(i.second >= 24)c[24]++;
    if(i.second >= 14)c[14]++;
    if(i.second >= 4)c[4]++;
    if(i.second >= 2)c[2]++;
  }
  int ans = c[74] + c[24] * (c[2] - 1)
      + c[14] * (c[4] - 1)
      + c[4] * (c[4] - 1) * (c[4] - 2) / 2
      + c[4] * (c[4] - 1) * (c[2] - c[4]) / 2;
  COUT(ans);
}


#pragma region main
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  solve(n);
}
#pragma endregion main
