#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//#include <boost/multiprecision/cpp_ll.hpp>
//typedef boost::multiprecision::cpp_ll ll;
typedef long double dd;
#define i_7 (ll)(1E9+7)
//#define i_7 998244353
#define i_5 i_7-2
ll mod(ll a){
    ll c=a%i_7;
    if(c>=0)return c;
    return c+i_7;
}
typedef pair<ll,ll> l_l;
ll inf=(ll)1E16;
#define rep(i,l,r) for(ll i=l;i<=r;i++)
#define pb push_back
ll max(ll a,ll b){if(a<b)return b;else return a;}
ll min(ll a,ll b){if(a>b)return b;else return a;}
void Max(ll &pos,ll val){pos=max(pos,val);}//Max(dp[n],dp[n-1]);
void Min(ll &pos,ll val){pos=min(pos,val);}
void Add(ll &pos,ll val){pos=mod(pos+val);}
dd EPS=1E-9;
string alp="abcdefghijklmnopqrstuvwxyz";
#define endl "\n"
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main(){
    ll x,y;cin>>x>>y;
    if(x>0 && y>0){
        if(x<=y){
            cout<<y-x<<endl;
        }else{
            cout<<(x-y)+2<<endl;
        }
    }else if(x>0 && y<0){
        if(-y<=x){
            cout<<(x+y)+1<<endl;
        }else{
            cout<<(-y-x)+1<<endl;
        }
    }else if(x<0 && y<0){
        if(x<=y){
            cout<<y-x<<endl;
        }else{
            cout<<x-y+2<<endl;
        }
    }else if(x<0 && y>0){
        if(-x<=y){
            cout<<y+x+1<<endl;
        }else{
            cout<<-x-y+1<<endl;
        }
    }else if(x==0){
        if(y<0){
            cout<<-y+1<<endl;
        }else{
            cout<<y<<endl;
        }
    }else if(y==0){
        if(x>0){
            cout<<x+1<<endl;
        }else{
            cout<<-x<<endl;
        }
    }
    
    return 0;
}




