#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;
#define mod 1000000007
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define setA0(a) for(ull i =0;i<n;i++){a[i] = 0;}
#define aout(a) for(auto x : a){cout<<x<<' ';} // array output macro 
#define ain(a) for(ull i =0;i<n;i++){cin>>a[i];} //array input macro
#define NofSetBits(x) __builtin_popcount(x);
#define InpGrph(g,e) while(e--){ll x;ll y;cin>>x>>y ;g[x].pub(y);g[y].pub(x);}
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main(){
  FastIO;
  ll n;
  cin>>n;
  string s;
  cin>>s;
  if(n&1){
    cout<<"No";
  }else{
    bool y =1;
    ll x = n/2-1;
    for(ll i=0;i<=x;i++){
      if(s[i]!=s[i+x+1]){
        y=0;
        break;
      }
    }
    if(y){
      cout<<"Yes";
    }else{
      cout<<"No";
    }
  }
  return 0;
}
