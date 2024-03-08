#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n);i++)
#define all(v) v.begin(),v.end()
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using vl = vector<ll>;
using vvl = vector<vl>;

ll gcd(ll a,ll b){
  if(b == 0) return a;
  return gcd(b , a % b);
}

ll mod(ll a){
  return a % 1000000007;
}

ll lcm(ll a,ll b){
  return (a*b)/gcd(a,b);
}


int main(){
  ll r,g,b,n; cin >> r >> g >> b >> n; ll count = 0;
  
  for(ll i=0; i <= n; i++){
    for(ll j=0; j <= n; j++){
      if((n-r*i-g*j) % b == 0 && n-r*i-g*j >= 0) count++;
    }
  }
  
  cout << count << endl;
}