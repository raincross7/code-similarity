#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;

#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

int main() {
  
  ll n;
  cin >> n;
  vl p(n);
  unordered_map<ll, ll> mp;
  set<ll> s;
  rep(i, n) {
    cin >> p[i];
    mp[p[i]] = i; //値 => INDEX
    s.insert(p[i]);
  }
  
  //memo: setで降順で取得したい => rbegin()を使う
  set<ll> idx;
  ll ans = 0;
  while(!s.empty()) {
    ll now = *s.rbegin(); //最大から取得
    s.erase(now);
    
    ll i = mp[now];
    vl l(2, -1), r(2, n);
    {
      auto itr = idx.lower_bound(i);
      rep(j, 2) { //r
        if(itr == idx.end()) break;
        r[j] = *itr;
        itr++;  //インクリメントすることで，「その次に右にある，より値が大きい要素のインデックス」を取得できる
      }
    }
    {
      auto itr = idx.lower_bound(i);
      rep(j, 2) { //l
        if(itr == idx.begin()) break;
        itr--;  //左の場合は，最初にデクリメント．これができるのは，idxには検索地より大きい値しか無いという仮定のため
        l[j] = *itr;
      }
    }
    
    ll l1 = i - l[0], l2 = l[0] - l[1];
    ll r1 = r[0] - i, r2 = r[1] - r[0];
    ans += (l1 * r2 + l2 * r1) * now;
    
    idx.insert(i);
  }
  cout << ans << '\n';
  
  return 0;
}