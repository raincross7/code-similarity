#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  ll a, b, c, k;
  cin >> a >> b >> c >> k;
  ll diff = a - b;
  if (k % 2) diff = -diff;
  cout << diff << endl;
}