#include <stdint.h>
#include <stdlib.h>

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>
using namespace std;
using default_counter_t = int64_t;

// macro
#define let auto const&
#define overload4(a, b, c, d, name, ...) name
#define rep1(n) \
  for (default_counter_t i = 0, end_i = default_counter_t(n); i < end_i; ++i)
#define rep2(i, n)                                                           \
  for (default_counter_t i = 0, end_##i = default_counter_t(n); i < end_##i; \
       ++i)
#define rep3(i, a, b)                                    \
  for (default_counter_t i       = default_counter_t(a), \
                         end_##i = default_counter_t(b); \
       i < end_##i; ++i)
#define rep4(i, a, b, c)                                 \
  for (default_counter_t i       = default_counter_t(a), \
                         end_##i = default_counter_t(b); \
       i < end_##i; i += default_counter_t(c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)

#define rrep1(n) \
  for (default_counter_t i = default_counter_t(n) - 1; i >= 0; --i)
#define rrep2(i, n) \
  for (default_counter_t i = default_counter_t(n) - 1; i >= 0; --i)
#define rrep3(i, a, b)                                         \
  for (default_counter_t i         = default_counter_t(b) - 1, \
                         begin_##i = default_counter_t(a);     \
       i >= begin_##i; --i)
#define rrep4(i, a, b, c)                                          \
  for (default_counter_t                                           \
           i = (default_counter_t(b) - default_counter_t(a) - 1) / \
                   default_counter_t(c) * default_counter_t(c) +   \
               default_counter_t(a),                               \
           begin_##i = default_counter_t(a);                       \
       i >= begin_##i; i -= default_counter_t(c))
#define rrep(...) \
  overload4(__VA_ARGS__, rrep4, rrep3, rrep2, rrep1)(__VA_ARGS__)

#define ALL(f, c, ...)                                           \
  (([&](decltype((c)) cccc) {                                    \
    return (f)(std::begin(cccc), std::end(cccc), ##__VA_ARGS__); \
  })(c))

// function
template <class C>
constexpr C& Sort(C& a) {
  std::sort(std::begin(a), std::end(a));
  return a;
}
template <class C>
constexpr auto& Min(C const& a) {
  return *std::min_element(std::begin(a), std::end(a));
}
template <class C>
constexpr auto& Max(C const& a) {
  return *std::max_element(std::begin(a), std::end(a));
}
template <class C>
constexpr auto Total(C const& c) {
  return std::accumulate(std::begin(c), std::end(c), C(0));
}
template <typename T>
auto CumSum(std::vector<T> const& v) {
  std::vector<T> a(v.size() + 1, T(0));
  for (std::size_t i = 0; i < a.size() - size_t(1); ++i) a[i + 1] = a[i] + v[i];
  return a;
}
template <typename T>
constexpr bool ChMax(T& a, T const& b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <typename T>
constexpr bool ChMin(T& a, T const& b) {
  if (b < a) {
    a = b;
    return true;
  }
  return false;
}

void In(void) { return; }

template <typename First, typename... Rest>
void In(First& first, Rest&... rest) {
  cin >> first;
  In(rest...);
  return;
}

template <class T, typename I>
void VectorIn(vector<T>& v, const I n) {
  v.resize(size_t(n));
  rep(i, v.size()) cin >> v[i];
}

void Out(void) {
  cout << "\n";
  return;
}

template <typename First, typename... Rest>
void Out(First first, Rest... rest) {
  cout << first << " ";
  Out(rest...);
  return;
}

constexpr auto yes(const bool c) { return c ? "yes" : "no"; }
constexpr auto Yes(const bool c) { return c ? "Yes" : "No"; }
constexpr auto YES(const bool c) { return c ? "YES" : "NO"; }

#ifdef USE_STACK_TRACE_LOGGER
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#include <glog/logging.h>
#pragma clang diagnostic pop
#endif  //__clang__
#endif  // USE_STACK_TRACE_LOGGER

signed main(int argc, char* argv[]) {
  (void)argc;
#ifdef USE_STACK_TRACE_LOGGER
  google::InitGoogleLogging(argv[0]);
  google::InstallFailureSignalHandler();
#else
  (void)argv;
#endif  // USE_STACK_TRACE_LOGGER
  int64_t N, M, V, P;
  In(N, M, V, P);
  vector<int64_t> A(N);
  rep(i, N) In(A[i]);

  ALL(sort, A, greater<>());

  map<int64_t, bool> m;

#if 0
  int64_t ans = 0;
  rep(i, N) {
    if (m.find(A[i]) != m.end()) {
      if (m[A[i]]) {
        ans++;
      }
      continue;
    }
    int64_t Q = P - 1 + N - i - 1;
    if (Q < V) {
      m[A[i]] = false;
      continue;
    }

    if (i < P) {
      m[A[i]] = true;
      ans++;
    }
    if (A[P - 1] <= A[i] + M) {
      m[A[i]] = true;
      ans++;
    } else {
      m[A[i]] = false;
    }
  }
#endif

  int64_t ans = 0;

  int64_t L = A[0] + M;

  int64_t cum = 0;
  rep(i, N) {
    if (m.find(A[i]) != m.end()) {
      if (m[A[i]]) {
        ans++;
      }
      if (i >= P - 1) {
        cum += (L - A[i]);
      }
      continue;
    }

    if (i < P) {
      ans++;
      m[A[i]] = true;
      if (i == P - 1) {
        cum += (L - A[i]);
      }
      continue;
    }

    int64_t Q = max<int64_t>(0, V - ((P - 1) + (N - i - 1)) - 1);
    if (Q == 0) {
      if (A[i] + M >= A[P - 1]) {
        ans++;
        m[A[i]] = true;
      } else {
        m[A[i]] = false;
      }
    } else {
      if (cum - (i - P + 1) * (L - (M + A[i])) >= Q * M &&
          A[i] + M >= A[P - 1]) {
        ans++;
        m[A[i]] = true;
      } else {
        m[A[i]] = false;
      }
    }
    cum += (L - A[i]);
  }

  cout << ans << endl;

  return EXIT_SUCCESS;
}
