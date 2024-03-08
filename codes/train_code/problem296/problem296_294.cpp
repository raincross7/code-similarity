#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
using ll=long long;

int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    rep(i,n){
        int a; cin>>a;
        mp[a]++;
    }
    int ans=0;
    for(auto&p:mp){
        if(p.first<p.second)ans+=p.second-p.first;
        if(p.first>p.second)ans+=p.second;
    }
    cout<<ans<<endl;
    return 0;
}