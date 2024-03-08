#include <bits/stdc++.h>
#define sz(arr) (int)arr.size()
#define all(arr) arr.begin(), arr.end()

using namespace std;

void _cin() {}
template <class Head, class... Tail>
void _cin(Head &&head, Tail &&... tail) {
  cin >> head;
  _cin(forward<Tail>(tail)...);
}

#define Cin(T, ...) \
  T __VA_ARGS__;    \
  _cin(__VA_ARGS__)

int main() {
  vector<int> n(4);
  for (auto &e : n) cin >> e;

  set<int> st;
  for (auto &e : n) st.insert(e);

  puts(st.count(1) && st.count(9) && st.count(7) && st.count(4) ? "YES" : "NO");

  return 0;
}