#include <bits/stdc++.h>

#include <boost/hana/functional/fix.hpp>

#if DEBUG
template <typename Iter>
void debug_iter(Iter begin, Iter end);
template <typename T>
void debug(const T& value) {
  std::cerr << value;
}
template <typename T>
void debug(const std::vector<T>& v) {
  debug_iter(v.begin(), v.end());
}
template <typename T>
void debug(const std::set<T>& s) {
  debug_iter(s.begin(), s.end());
}
template <typename T, typename U>
void debug(const std::map<T, U>& m) {
  debug_iter(m.begin(), m.end());
}
template <typename T, typename U>
void debug(const std::pair<T, U>& p) {
  std::cerr << "{";
  debug(p.first);
  std::cerr << ", ";
  debug(p.second);
  std::cerr << "}";
}
template <typename T, typename... Ts>
void debug(const T& value, const Ts&... args) {
  debug(value);
  std::cerr << ", ";
  debug(args...);
}
template <typename Iter>
void debug_iter(Iter begin, Iter end) {
  std::cerr << "{";
  for (Iter it = begin; it != end; ++it) {
    if (it != begin) std::cerr << ", ";
    debug(*it);
  }
  std::cerr << "}";
}
#define dbg(...)                        \
  do {                                  \
    cerr << #__VA_ARGS__ << ": ";       \
    debug(__VA_ARGS__);                 \
    cerr << " (L" << __LINE__ << ")\n"; \
  } while (0)
#else
#define dbg(...)
#endif

void read_from_cin() {}
template <typename T, typename... Ts>
void read_from_cin(T& value, Ts&... args) {
  std::cin >> value;
  read_from_cin(args...);
}
#define rd(type, ...) \
  type __VA_ARGS__;   \
  read_from_cin(__VA_ARGS__);

template <typename T>
void write_to_cout(const T& value) {
  std::cout << value << '\n';
}
template <typename T, typename... Ts>
void write_to_cout(const T& value, const Ts&... args) {
  std::cout << value << ' ';
  write_to_cout(args...);
}
#define wt(...) write_to_cout(__VA_ARGS__);

#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

template <typename T>
std::istream& operator>>(std::istream& is, std::vector<T>& v) {
  for (T& vi : v) is >> vi;
  return is;
}

template <typename T>
bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template <typename T>
bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

using ll = long long;

template <typename T>
using V = std::vector<T>;
template <typename T>
using VV = V<V<T>>;

using namespace std;

int main() {
  rd(int, n);
  vector<int> target(3);
  cin >> target;
  vector<int> l(n);
  cin >> l;
  vector<int> current(3);
  int ans = numeric_limits<int>::max();
  boost::hana::fix([&](auto f, int depth, int used_mp) {
    if (depth == n) {
      rep(i, 3) {
        if (current[i] == 0) return;
        used_mp += abs(target[i] - current[i]);
      }
      chmin(ans, used_mp);
      return;
    }
    rep(i, 4) {
      int mp = 0;
      if (i < 3) {
        if (current[i] != 0) {
          mp += 10;
        }
        current[i] += l[depth];
      }
      f(depth + 1, used_mp + mp);
      if (i < 3) {
        current[i] -= l[depth];
      }
    }
  })(0, 0);
  wt(ans);
}
