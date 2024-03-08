#include <bits/stdc++.h>
#define rep(i,n)for(long long i=0;i<(long long)(n);++i)
#define all(a) a.begin(), a.end()
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
 
const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
int dx[8] = {1,0,-1,0,1,1,-1,-1};
int dy[8] = {0,1,0,-1,-1,1,1,-1};

const int MAX=510000;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false); 
  
  int a[4]={1,4,7,9};
  vector<int>vec(4);
  rep(i,4) cin >> vec[i];
  sort(vec.begin(),vec.end());
  bool ok=true;
  rep(i,4){
    if(vec[i]!=a[i])ok=false;
  }
  if(ok)cout<<"YES"<<endl;
  else cout << "NO" << endl;
  return 0;
}