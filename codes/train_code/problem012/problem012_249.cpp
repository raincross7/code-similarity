#define _GLIBCXX_DEBUG
#include<bits/stdc++.h>
#include<algorithm>//next_permutation
#define rep(i,n) for (int i = 0;i < (n);i++)
#define all(v) v.begin(),v.end()
#define dec(n) cout << fixed << setprecision(n);
#define large "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define small "abcdefghijklmnopqrstuvwxyz"
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using vl = vector<ll>;
using vvl = vector<vl>;

ll gcd(ll a,ll b){
  if(b == 0) return a;
  return gcd(b , a % b);
}

const ll MOD = 998244353;
const ll MAX = 2000001;

ll mod(ll a){
  if(a % MOD < 0) return MOD + (a % MOD);
  return a % MOD;
}

ll lcm(ll a,ll b){
  return (a*b)/gcd(a,b);
}


int main(){
  ll n,h; cin >> n >> h; ll cnt = 0;
  
  vvl table(n,vl(2));
  
  rep(i,n) cin >> table[i][0] >> table[i][1];
  
  vl bn(n);
  
  rep(i,n) bn[i] = table[i][1];
  
  sort(all(bn));
  reverse(all(bn));
  
  ll maxcut = 0;
  
  rep(i,n){
    maxcut = max(maxcut,table[i][0]);
  }
  
  rep(i,n){
    if(bn[i] > maxcut){
      cnt++;
      h -= bn[i];
      
      if(h <= 0){
        cout << cnt << endl;
        return 0;
      }
    }
  }
  
  
  cnt += (h+maxcut-1)/maxcut;
  
  cout << cnt << endl;
  
  
}