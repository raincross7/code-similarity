#include <bits/stdc++.h>
#include <random>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i <= (n); ++i)

using namespace std;
using ll = long long;
using P = pair<ll,ll>;
using ull= unsigned long long;
const ll K_MAX=1e5+5;
const ll Lmax=ll(1e18);
const ll INF=1e6;
const int Nmax=2e5+1;
const int Nd=61;


int main(){
  int n; cin>>n;
  vector<int> p(n);
  int ans=0;
  int m1=INF;
  rep(i,n){
    cin>>p[i];
    if(p[i]<= m1) ans++;
    m1=min(m1,p[i]);

  }
  cout<<ans<<endl;


}
