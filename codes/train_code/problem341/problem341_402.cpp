#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;
typedef pair<ll,ll> pll;
const ll mod=1e9+7;
//const ll mod=998244353;
const ll inf=1LL<<61;

int main() {
  string s;
  ll w;
  cin >> s >> w;
  for(ll i=0;i<s.size();i+=w) {
    cout << s[i];
  }
  cout << endl;
}