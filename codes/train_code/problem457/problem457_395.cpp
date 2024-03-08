#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_1 (i,j,n) for(int i=j;i<n;i++)
typedef long long ll;
typedef long l;
const ll l_INF = 1010101010101010;
const int INF = 1010101010;
const int dx[4] = {-1,0,1,0};
const int dy[4] = {0,-1,0,1};
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

int main(){
  int n,m; cin>>n>>m;
  vector<pair<int,int>> a(n); rep(i,n) cin>>a[i].first>>a[i].second;
  //priority_queue<pair<int,int>> pq;
  //vector<pair<int,int>> b;
  //rep(i,n) pq.push(a[i]);
  ll ans=0;
  //myごみコード
  /*rep(i,m){
    while(!pq.empty()){
      b.push_back(pq.top());
      int x=pq.top().first;
      pq.pop();
      if(pq.top().second<=i+1){
        b.pop_back();
        ans+=x;
        break;
      }
    }
    for(auto x:b){
      pq.push(x);
    }
    b.clear();
  }*/
  sort(a.begin(),a.end());
  priority_queue<ll> b;
  ll t=0;
  rep(i,m){
    while(t<n&&a[t].first<=i+1){
      b.push(a[t].second);
      t++;
    }
    if(!b.empty()){
      ans+=b.top();
      b.pop();
    }
  }
  cout<<ans<<endl;
}
