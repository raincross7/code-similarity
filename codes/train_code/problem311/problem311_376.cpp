#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstdio>
#include<queue>
#include<deque>
using namespace std;
typedef pair<int,int> ii;
typedef long long ll;
typedef pair<ll,ll> pll;
const int INF=1e9;
const ll MOD=1e9+7;

ll gcd(ll x,ll y){
    if(y==0) return 0;
    return gcd(y,x%y);
}

int dis2(int x1,int y1,int x2,int y2){
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

int main(){
    int n;cin>>n;
    vector<string> s(n);
    int t[n];
    for(int i=0;i<n;i++) cin>>s[i]>>t[i];
    string x;cin>>x;
    int ans=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]==x){
            flag=true;
            continue;
        }
        if(flag) ans+=t[i];
    }
    cout<<ans<<endl;
    return 0;
}