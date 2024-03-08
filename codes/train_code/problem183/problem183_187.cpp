#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int m = 1e6, M = 1e9+7;
ll inverse[3*m], fact[3*m], invfact[3*m];

ll nCr(ll n, ll r){
    ll ans = fact[n]*invfact[r]%M;
    return (ans*invfact[n-r]%M); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //good luck, kittu

    inverse[1] = 1;
    for(ll i = 2; i<3*m; i++) inverse[i] = M - M/i * inverse[M%i]%M;
    fact[0] = invfact[0] = 1;
    for(ll i = 1; i<3*m; i++){
        fact[i] = fact[i-1]*i%M;
        invfact[i] = invfact[i-1]*inverse[i]%M;
    }

    ll x, y; cin>>x>>y;
    if((x+y)%3!=0) return cout<<"0\n", 0;

    ll n = (2*y - x)/3, m = (2*x - y)/3;
    if(n<0 || m<0) return cout<<"0\n", 0;

    ll ans = nCr(n+m, n);
    ans %= M;
    cout<<ans<<"\n";
    return 0;
}
