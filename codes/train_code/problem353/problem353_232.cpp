#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    rep(i,n){
        cin>>a[i];
        b[i]=a[i];
    }
    map<int,int>mp;
    sort(b.begin(),b.end());
    rep(i,n){
        mp[b[i]]=i;
    }
    int ans=0;
    rep(i,n){
        if(i%2!=mp[a[i]]%2)ans++;
    }
    cout<<ans/2<<endl;
}