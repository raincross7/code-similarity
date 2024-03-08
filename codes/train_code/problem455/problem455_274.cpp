#include "bits/stdc++.h"
using namespace std;

#define DEBUG(x) cout<<#x<<": "<<x<<endl;
#define DEBUG_VEC(v) cout<<#v<<":";for(int i=0;i<v.size();i++) cout<<" "<<v[i]; cout<<endl

typedef long long ll;
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define pii pair<int,int>
#define pis pair<int,string>
#define psi pair<string,int>
const int inf = 1000000001;
const ll INF = 1e16;
#define MOD 1000000007
#define mod 1000000009
#define pi 3.14159265358979323846
#define Sp(p) cout<<setprecision(15)<<fixed<<p<<endl;
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
int dx2[8] = { 1,1,0,-1,-1,-1,0,1 }, dy2[8] = { 0,1,1,1,0,-1,-1,-1 };

int main() {
  int n, i, j;
  cin >> n;
  vi a(n);
  for (i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ans = a[0] - 1;
  ll now = 1;
  for (i = 1; i < n; i++) {
    if (a[i] == now + 1) {
      now++;
      continue;
    }
    else if (a[i] <= now) {
      continue;
    }
    else {
      ans += (a[i] - 1) / (now + 1);
    }
  }
  cout << ans << endl;
  return 0;
}
  
/*
3
3
2
5

15
3
1
4
1
5
9
2
6
5
3
5
8
9
7
9

*/
