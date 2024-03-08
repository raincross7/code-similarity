#include <bits/stdc++.h>

template <typename T>
class DualSegmentTree {
 public:
  using Operation = std::function<T(T, T)>;
  DualSegmentTree(int size, Operation operation, T identity = T())
      : operation_(operation), identity_(identity) {
    int two = 1;
    while (two < size) {
      two <<= 1;
    }
    v_.resize(two * 2 - 1, identity_);
  }
  void Update(int begin, int end, T v) {
    std::function<void(int, int, int)> rec = [&](int cbegin, int cend,
                                                 int index) {
      if (begin <= cbegin && cend <= end) {
        v_[index] = operation_(v_[index], v);
        return;
      }
      if (cend <= begin || end <= cbegin) {
        return;
      }
      int cmid = (cbegin + cend) / 2;
      rec(cbegin, cmid, index * 2 + 1);
      rec(cmid, cend, index * 2 + 2);
    };
    rec(0, (v_.size() + 1) / 2, 0);
  }
  T Get(int i) const {
    T v = identity_;
    int index = v_.size() / 2 + i;
    while (true) {
      v = operation_(v, v_[index]);
      if (index == 0) break;
      index = (index - 1) / 2;
    }
    return v;
  }

 private:
  const Operation operation_;
  const T identity_;
  std::vector<T> v_;
};

#if DEBUG
template <typename T>
void debug(const T& value) {
  std::cerr << value;
}
template <typename T, typename... Ts>
void debug(const T& value, const Ts&... args) {
  std::cerr << value << ", ";
  debug(args...);
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

using ll = long long;

template <typename T>
using V = std::vector<T>;
template <typename T>
using VV = V<V<T>>;

using namespace std;

struct Monster {
  ll X, H;
  bool operator<(const Monster& m) const { return X < m.X; }
};

Monster monster[200000];

ll Add(ll a, ll b) { return a + b; }

int main() {
  rd(ll, N, D, A);
  rep(i, N) cin >> monster[i].X >> monster[i].H;
  sort(monster, monster + N);

  DualSegmentTree<ll> tree(N, Add);
  rep(i, N) tree.Update(i, i + 1, monster[i].H);

  ll ans = 0;
  int mi = 0;
  while (mi < N) {
    int h = tree.Get(mi);
    if (h <= 0) {
      ++mi;
      continue;
    }
    Monster max_m = {monster[mi].X + D * 2, 0};
    int ub = upper_bound(monster, monster + N, max_m) - monster;
    ll cnt = (h + A - 1) / A;
    tree.Update(mi, ub, -cnt * A);
    ans += cnt;
  }
  wt(ans);
}
