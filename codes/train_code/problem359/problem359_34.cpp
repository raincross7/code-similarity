#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int n;
  cin>>n;
    int a[n+1],b[n];
    for(int i=0;i<n+1;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=min(a[i],b[i]);
        b[i]-=min(a[i],b[i]);
        ans+=min(a[i+1],b[i]);
        a[i+1]-=min(a[i+1],b[i]);
 
    }
    cout<<ans<<endl;
}