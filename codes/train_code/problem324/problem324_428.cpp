#include <iostream>
using namespace std;
typedef long long ll;
int main(){
  ll n,r=0;cin>>n;
  ll m=n,ans=0,a[1000000];
  fill(a,a+1000000,0);
  for(ll i=2;i*i<=n;i++){
    if(m%i==0){
      while(m%i==0){
        a[r]++;
        m=m/i;
      }
      r++;
    }
  }
  ll j=1;
  for(int i=0;i<r;i++){
    while(a[i]-j>=0){
      ans++;
      a[i]-=j;
      j++;
    }
    j=1;
  }
  if(m!=1){ans++;}
  cout<< ans<<endl;
}