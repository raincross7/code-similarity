/*{{{*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
// pll pp; -> (pp.first,pp.second)
// vector<vl> pp(n,vl(2)); sort(pp.begin(),pp.end(),[](vl a,vl b){return a[0]<b[0];});

#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define RREP(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define FOR(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define FORR(i,a,b) for(ll (i)=(b)-1;(i)>=(a);(i)--)
#define DEBUG(x) cout << #x << ": " << x << endl
#define CHMAX(a,b) a=max((a),(b))
#define CHMIN(a,b) a=min((a),(b))
/*}}}*/
int main() {
  ll k;
  cin >> k;
  deque<ll> que;
  vl cost(k,2*k);
  que.push_back(1ll);
  cost[1] = 1ll;
  while(!que.empty()){
    ll node = que[0];
    //cout << node << endl;
    que.pop_front();

    ll nx = (node * 10ll)%k;
    if(cost[node]<cost[nx]){
      cost[nx] = cost[node];
      //cout << "front:" << nx << "," << cost[nx] << endl; 
      que.push_front(nx);
    }
    nx = (node + 1ll)%k;
    if(cost[node]+1ll<cost[nx]){
      cost[nx] = cost[node]+1ll;
      //cout << "back :" << nx << "," << cost[nx] << endl; 
      que.push_back(nx);
    }
  }
  cout << cost[0] << endl;
  return 0;
}
