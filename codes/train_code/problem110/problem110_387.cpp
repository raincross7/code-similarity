#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
int main() {
    ll n,m,k;
    cin >> n >> m >> k;
    bool ok=false;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=m;j++){
            if(i*(m-j)+j*(n-i)==k) ok=true;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
}