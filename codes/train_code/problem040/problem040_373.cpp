#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    rep(i,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=a[n/2-1]+1;i<=a[n/2];i++){
        ans++;
    }
    cout<<ans<<endl;
}