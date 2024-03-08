#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0, i##_len = (n); i < i##_len; ++i)
#define REPS(i, n) for(int i = 1, i##_len = (n); i < i##_len; ++i)
#define ALL(x) (x).begin(), (x).end()
#define PRINT(A) std::cout << (#A) << ":" << (A) << std::endl;
using namespace std;
#define repi(itr, ds) for(auto itr = ds.begin(); itr != ds.end(); itr++)

// vector
template <typename T>
istream &operator>>(istream &is, vector<T> &vec) {
  for(T &x : vec) is >> x;
  return is;
}
// pair
template <typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> &pair_var) {
  os << "(" << pair_var.first << ", " << pair_var.second << ")";
  return os;
}
// vector
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
  os << "{";
  for(int i = 0; i < vec.size(); i++) {
    os << vec[i] << (i + 1 == vec.size() ? "" : ", ");
  }
  os << "}\n   ";
  return os;
}
// map
template <typename T, typename U>
ostream &operator<<(ostream &os, map<T, U> &map_var) {
  os << "{";
  repi(itr, map_var) {
    os << *itr;
    itr++;
    if(itr != map_var.end()) os << ", ";
    itr--;
  }
  os << "}";
  return os;
}
// set
template <typename T>
ostream &operator<<(ostream &os, set<T> &set_var) {
  os << "{";
  repi(itr, set_var) {
    os << *itr;
    itr++;
    if(itr != set_var.end()) os << ", ";
    itr--;
  }
  os << "}";
  return os;
}

#define DUMPOUT cerr

void dump_func() { DUMPOUT << endl; }
template <class Head, class... Tail>
void dump_func(Head &&head, Tail &&... tail) {
  DUMPOUT << head;
  if(sizeof...(Tail) > 0) {
    DUMPOUT << ", ";
  }
  dump_func(std::move(tail)...);
}
#ifdef DEBUG_
#define DEB
#define dump(...)                                                             \
  DUMPOUT << "  " << string(#__VA_ARGS__) << ": "                             \
          << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]" << endl \
          << "    ",                                                          \
      dump_func(__VA_ARGS__)
#else
#define DEB if(false)
#define dump(...)
#endif

typedef long long int ll;
const int MOD = 1e9 + 7;
const int INF = 1e9;

int main() {
  int n;
  cin >> n;
  auto a = vector<int>(n);
  REP(i, n) cin >> a[i];
  sort(ALL(a));
  long max = a[n - 1];
  a.pop_back();
  int index = lower_bound(ALL(a), max / 2.0) - a.begin();

  if(index >= (int)a.size()) {
    cout << max << " " << a[index - 1] << endl;
  } else if(index == 0) {
    cout << max << " " << a[index] << endl;
  } else if(abs(max / 2.0 - a[index]) > abs(max / 2.0 - a[index - 1])) {
    cout << max << " " << a[index - 1] << endl;
  } else {
    cout << max << " " << a[index] << endl;
  }
}
