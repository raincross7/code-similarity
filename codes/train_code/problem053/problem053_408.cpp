#include <bits/stdc++.h>
#include <vector> 
# include <cstdint>
#define FOR(i,l,r) for(int i=(l);i<(r);++i)
#define RFOR(i,l,r) for(int i=(l);i>=(int)(r);i--)
#define rep(i,n)  FOR(i,0,n)
#define rrep(i,n)  RFOR(i,n-1,0)

#define int long long
using namespace std;
const int MX = 1e6;
const int inf = 1e9;
const int mod = 1e9+7;

vector<int> fac(300001); //n!(mod M)
vector<int> ifac(300001); //k!^{M-2} (mod M)

long long fpow(long long a,long long n){
  long long ret=1;
  if(n==1) return a;
  if(n%2==0) {
      ret = fpow(a*a%mod, n/2) %mod ;
  }else {
      ret = (a%mod)*fpow(a*a%mod, n/2) %mod;
  }
  return ret %mod;
}
int comb(int a, int b){ //aCbをmod計算
    if(a == 0 && b == 0)return 1;
    if(a < b || a < 0)return 0;
    int tmp = ifac[a-b]* ifac[b] % mod;
    return tmp * fac[a] % mod;
}
const int D = 60;
int to[D][MX];


signed main(){
    string s;
    cin >> s;
    bool f = true;
    if(s[0]!='A') f = false;
    if(count(s.begin()+2, s.end() - 1, 'C') != 1) f = false;
    for(char c: s) {
        if(c != 'A' && c != 'C' && isupper(c)) f = false;
    }
    if(f) cout << "AC" << endl;
    else cout << "WA" << endl;
}