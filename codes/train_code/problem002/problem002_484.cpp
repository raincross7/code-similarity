#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
   vector<ll>A(5);
   ll ans=0;
   ll m=10;
   rep(i,5){
       cin>>A[i];
      	ll d=A[i];
          d%=10;
     	if(d==0){	
          d+=10;
        }
     if(d<m){
       m=d;
     }
     if(A[i]%10!=0){
       A[i]=A[i]/10*10+10;
     }
       ans+=A[i];
   }
        cout<<ans-(10-m)<<endl;
}
