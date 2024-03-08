#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod;

ll powimod(ll x,ll n,ll mod){
    ll res=1;
    while(n){
        if(n&1) res=(res*x)%mod;
        x=(x*x)%mod;
        n>>=1;
    }
    return res;
}

ll powi(ll x,ll n){
    ll res=1;
    while(n){
        if(n&1) res*=x;
        x*=x;
        n>>=1;
    }
    return res;
}

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x;
    cin>>x;
    int hcf=__gcd(360,x);
    int ans;
    ans=360/hcf;
    cout<<ans;
}