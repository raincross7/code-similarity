#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ff first
#define ss second
typedef long long ll;
ll power(ll a, ll b){//a^b
    ll res=1;
    a=a%MOD;
    while(b>0){
        if(b&1){res=(res*a)%MOD;b--;}
        a=(a*a)%MOD;
        b>>=1;
    }
    return res;
}
ll fermat_inv(ll y){return power(y,MOD-2);}
ll gcd(ll a, ll b){return (b==0)?a:gcd(b,a%b);}
int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==1&&b==2)
            cout<<"3\n";
        if(a==2&&b==1)
            cout<<"3\n";
        if(a==3&&b==1)
            cout<<"2\n";
        if(a==1&&b==3)
            cout<<"2\n";
        if(a==3&&b==2)
            cout<<"1\n";
        if(a==2&&b==3)
            cout<<"1\n";
    }
    return 0;
}
