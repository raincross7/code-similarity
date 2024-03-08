#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
#define rep(i,n) for(lint (i)=0;(i)<(n);(i)++)
#define repp(i,m,n) for(lint (i)=(m);(i)<(n);(i)++)
#define repm(i,n) for(lint (i)=(n-1);(i)>=0;(i)--)
#define INF (1ll<<60)
#define all(x) (x).begin(),(x).end()
const lint MOD =1000000007;
const lint MAX = 1000000;
using Graph =vector<vector<lint>>;
typedef pair<lint,lint> P;
typedef map<lint,lint> M;
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
 
lint fac[MAX], finv[MAX], inv[MAX];
 
void COMinit() 
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (lint i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
 
long long COM(lint n, lint k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
 
lint primary(lint num)
{
    if (num < 2) return 0;
    else if (num == 2) return 1;
    else if (num % 2 == 0) return 0;
 
    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
 
    return 1;
}
   long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
    lint lcm(lint a,lint b){
        return a/__gcd(a,b)*b;
    }
     lint gcd(lint a,lint b){
        return __gcd(a,b);
    } 

    int main(){
        lint n,m;
        cin>>n>>m;
        lint x[n];
        lint y[n];
        lint z[n];
        rep(i,n)cin>>x[i]>>y[i]>>z[i];
        lint ans=0;
        lint g[n];
        rep(bit,8){
            bool a[3];
            fill(a,a+3,false);
            rep(i,3)if(bit&(1<<i))a[i]=true;
            rep(i,n){
                lint b=0;
                if(a[0])b+=x[i];
                else b-=x[i];
                if(a[1])b+=y[i];
                else b-=y[i];
                if(a[2])b+=z[i];
                else b-=z[i];
                g[i]=b;
            }
            lint comp=0;
            sort(g,g+n,greater<lint>());
            rep(i,m)comp+=g[i];
            ans=max(ans,comp);
        }
        cout<<ans<<endl;


    }
      