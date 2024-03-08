#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int M = 1001001;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  vector<int> cnt(M);
  for(int x : a) {
    if(cnt[x] != 0) {
      cnt[x] = 2;
      continue;
    }
    for(int i = x; i < M; i += x) cnt[i]++;
  }
  int ans = 0;
  for(int x : a) {
    if(cnt[x] == 1) ans++;
  }
  cout << ans << endl;
  return 0;
}