#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;
typedef pair<ll,ll> pll;
const ll mod=1e9+7;
//const ll mod=998244353;
const ll inf=5e18;

int main() {
  ll a,b,x;
  cin >> a >> b >> x;
  if(a<=x&&x<=a+b) cout << "YES" << endl;
  else cout << "NO" << endl;
}