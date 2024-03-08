#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vl = vector<ll>;
#define rep(i, n) for(ll i = 0;i < n;i++)
#define all(i) i.begin(), i.end()
template<class T, class U> bool cmax(T& a, U b) { if (a<b) {a = b; return true;} else return false; }
template<class T, class U> bool cmin(T& a, U b) { if (a>b) {a = b; return true;} else return false; }

int main() {
  cin.tie(0); ios::sync_with_stdio(false);

  ll n, m;
  cin >> n >> m;
  vl cnt(n);
  ll a, b;
  rep(i, m) {
    cin >> a >> b;
    cnt[a-1]++;
    cnt[b-1]++;
  }

  bool f = 1;
  rep(i, n) {
    f &= !(cnt[i]%2);
  }
  if (f) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
