#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstdio>
#include<numeric>
using namespace std;
using ll = long long;
int main(){
  int n;
  ll d, a;
  cin >> n >> d >> a;
  vector<vector<ll>> x(n, vector<ll>(2));
  for(int i = 0; i < n; i++){
    cin >> x[i][0] >> x[i][1];
  }
  sort(x.begin(), x.end());
  ll cnt = 0;
  vector<pair<ll, ll>> rng(n, pair<ll, ll>(0, 0));
  queue<pair<ll, ll>> que;
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    while(true){
      pair<ll, ll> tmp = que.front();
      if(tmp.first < x[i][0] && !que.empty()){
        sum -= tmp.second;
        que.pop();
      }else{
        break;
      }
    }
    x[i][1] -= sum * a;
    if(x[i][1] <= 0) {
      continue;
    }

    ll r = min(x[i][0] + 2 * d, x[n - 1][0]);
    ll bomb = (x[i][1] + a - 1) / a;
    que.push(make_pair(r, bomb));
    sum += bomb;
    cnt += bomb;
    x[i][1] -= bomb * a;
  }
  cout << cnt << '\n';
  return 0;
}