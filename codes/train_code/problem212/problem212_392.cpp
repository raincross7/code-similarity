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
  int n; cin>>n;
  int count=0,m_count=0;
  for(int i=1;i<=n;i++){
    count=0;
    if(i%2==0) continue;
    //if(i==sqrt(i)*sqrt(i)) continue;
    for(int j=1;j<=i;j++){
      if(i%j==0) count++;
    }
    if(count==8) m_count++;
  }
  cout<<m_count;
}
