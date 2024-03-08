#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>
#include <set>
#include <cstdlib>
#include <queue>
#include <map>

using namespace std;

typedef long long llint;
typedef long double ld;
#define inf 1e18
#define mod 1000000007
priority_queue<llint,vector<llint>,greater<llint>> que;
//priority_queue<llint> q;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

llint n,a,b;

void solve(){
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++)cin >> a[i];
  int ans=0;
  int m=n+1;
  for(int i=1;i<n;i++){
    if(a[i]==a[i-1]){
      a[i]=m;
      m++;
      ans++;
    }
  }
  cout << ans << endl;
}

int main(int argc, char *argv[]) {
  solve();
  return 0;
}
