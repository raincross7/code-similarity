#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
long long modinv(long long a, long long m=MOD) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
    /*MODの割り算の際に
    a/＝b;
    を
    a *= modinv(b,MOD);
    とする。
        */
}
ll ans = 0;
int main(){

    int N,K;cin >> N >> K;
    ll small = 0;
    for(ll i=K;i<=N+1;i++){
        ll mi = ((i-1)*i)/2;
        ll ma = ((N+(N-i+1))*i)/2;
        ma %= MOD;
        mi %= MOD;
        if(ma<mi)ma += MOD;
        ll cou = ma - mi + 1;
        cou %= MOD;
        ans += cou;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}