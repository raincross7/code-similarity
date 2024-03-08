#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<cmath>
#include<cstdio>
#include<queue>
#include<deque>
#include<map>
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

double cut(int r,int n,int i){
    double res=r*r-(r-r*(double)i/(double)n)*(r-r*(double)i/(double)n);
    return pow(res,0.5)*2;
}

int main(){
    int r,g,b,n;
    cin>>r>>g>>b>>n;
    int ans=0;
    for(int i=0;r*i<=n;i++){
        for(int j=0;r*i+g*j<=n;j++){
            int B=n-g*j-r*i;
            if(B%b==0) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}