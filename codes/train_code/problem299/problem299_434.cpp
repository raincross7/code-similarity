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
    int a,b,k;
    cin>>a>>b>>k;
    for(int i=0;i<k;i++){
        if(i%2==0){
            a/=2;
            b+=a;
        }else{
            b/=2;
            a+=b;
        }
    }
    cout<<a<<' '<<b<<endl;
    return 0;
}