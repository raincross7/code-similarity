#include <bits/stdc++.h>

using namespace std;

#define REP(i, N) for (int i = 0; i < (int)N; i++)
#define FOR(i, a, b) for (int i = a; i < (int)b; i++)
#define ALL(x) (x).begin(), (x).end()
#define INF (1 << 30)
#define LLINF (1LL << 62)
#define DEBUG(...) debug(__LINE__, ":" __VA_ARGS__)

constexpr int MOD = 1000000007;
using ll = long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

string to_string(string s) { return s; }
template <class T>
string to_string(unordered_set<T> s);
template <class T>
string to_string(set<T> s);
template <class S, class T>
string to_string(unordered_map<S, T> m);
template <class S, class T>
string to_string(map<S, T> m);
template <class T>
string to_string(vector<T> v);

template <class S, class T>
string to_string(pair<S, T> p) {
  return "{" + to_string(p.first) + "," + to_string(p.second) + "}";
}
template <class S>
string to_string(unordered_set<S> s) {
  if (s.empty()) return "{}";
  string ret = "{";
  for (auto itr = s.begin(); itr != s.end(); ++itr)
    ret += to_string(*itr) + ",";
  ret += to_string(*s.end()) + "}";
  return ret;
}
template <class S>
string to_string(set<S> s) {
  if (s.empty()) return "{}";
  string ret = "{";
  for (auto itr = s.begin(); itr != s.end(); ++itr)
    ret += to_string(*itr) + ",";
  ret += to_string(*s.end()) + "}";
  return ret;
}
template <class S, class T>
string to_string(unordered_map<S, T> m) {
  if (m.empty()) return "{}";
  string ret = "{";
  for (auto itr = m.begin(); itr != m.end(); ++itr)
    ret += to_string(*itr) + ",";
  ret += to_string(*m.end()) + "}";
  return ret;
}
template <class S, class T>
string to_string(map<S, T> m) {
  if (m.empty()) return "{}";
  string ret = "{";
  for (auto itr = m.begin(); itr != m.end(); ++itr)
    ret += to_string(*itr) + ",";
  ret += to_string(*m.end()) + "}";
  return ret;
}
template <class T>
string to_string(vector<T> v) {
  if (v.empty()) return "{}";
  string ret = "{";
  for (auto itr = v.begin(); itr != v.end(); ++itr)
    ret += to_string(*itr) + ",";
  ret += to_string(*v.end()) + "}";
  return ret;
}

void debug() { cerr << endl; }
template <class Head, class... Tail>
void debug(Head head, Tail... tail) {
  cerr << to_string(head) << " ";
  debug(tail...);
}
void print() { cout << endl; }
template <class Head, class... Tail>
void print(Head head, Tail... tail) {
  cout << to_string(head) << " ";
  print(tail...);
}

struct IO {
#ifdef _WIN32
  inline char getchar_unlocked() { return getchar(); }
  inline void putchar_unlocked(char c) { putchar(c); }
#endif
  string separator = " ";
  template <class T>
  inline void read(T &x) {
    char c;
    do {
      c = getchar_unlocked();
    } while (c != '-' && (c < '0' || '9' < c));
    bool minus = 0;
    if (c == '-') {
      minus = 1;
      c = getchar_unlocked();
    }
    x = 0;
    while ('0' <= c && c <= '9') {
      x *= 10;
      x += c - '0';
      c = getchar_unlocked();
    }
    if (minus) x = -x;
  }
  inline void read(string &x) {
    char c;
    do {
      c = getchar_unlocked();
    } while (c == ' ' || c == '\n');
    x.clear();
    do {
      x += c;
      c = getchar_unlocked();
    } while (c != ' ' && c != '\n' && c != EOF);
  }
  template <class T>
  inline void read(vector<T> &v) {
    for (auto &x : v) read(x);
  }
  template <class Head, class... Tail>
  inline void read(Head &head, Tail &... tail) {
    read(head);
    read(tail...);
  }
  template <class T>
  inline void write(T x) {
    char buf[32];
    int p = 0;
    if (x < 0) {
      x = -x;
      putchar_unlocked('-');
    }
    if (x == 0) putchar_unlocked('0');
    while (x > 0) {
      buf[p++] = (x % 10) + '0';
      x /= 10;
    }
    while (p) {
      putchar_unlocked(buf[--p]);
    }
  }
  inline void write(string x) {
    for (char c : x) putchar_unlocked(c);
  }
  inline void write(const char s[]) {
    for (int i = 0; s[i] != 0; ++i) putchar_unlocked(s[i]);
  }
  template <class T>
  inline void write(vector<T> v) {
    for (auto itr = v.begin(); itr != v.begin(); ++itr) {
      write(separator);
      write(*itr);
    }
    write(*v.end());
  }
  template <class Head, class... Tail>
  inline void write(Head head, Tail... tail) {
    write(head);
    write(separator);
    write(tail...);
  }
  void set_separator(string s) { separator = s; }
} io;

int main() {
  int N;
  io.read(N);
  vector<int> P(N);
  io.read(P);
  set<Pii> s;
  REP(i, N) { s.insert(Pii(-P[i], i)); }
  set<int> upper;
  upper.insert(-1);
  upper.insert(N);
  ll ans = 0;
  for (auto p : s) {
    int i = p.second;
    auto itr = upper.lower_bound(i);
    int l2 = INF, l1, r1 = *itr, r2 = INF;
    itr++;
    if (itr != upper.end()) {
      r2 = *itr;
    }
    itr--;
    itr--;
    l1 = *itr;
    if (itr != upper.begin()) {
      itr--;
      l2 = *itr;
    }
    if (l2 != INF) {
      ans += (ll)(l1 - l2) * (r1 - i) * (-p.first);
    }
    if (r2 != INF) {
      ans += (ll)(r2 - r1) * (i - l1) * (-p.first);
    }
    upper.insert(i);
  }
  io.write(ans);
  io.write("\n");
  return 0;
}
