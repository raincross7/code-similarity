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
  ll n; cin>>n;
  ll m=sqrt(n);
  ll max_x=-1;
  rep(i,m){
    if(i==0) continue;
    if(n%(i+1)==0) max_x=i+1;
  }
  if(max_x==-1){
    cout<<n-1<<endl;
    return 0;
  }
  ll max_y=n/max_x;
  ll ans=max_x+max_y-2;
  cout<<ans<<endl;
}
