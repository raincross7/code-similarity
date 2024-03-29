#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define repp(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define repm(i,n) for(int (i)=(n-1);(i)>=0;(i)--)
#define INF (1ll<<60)
#define all(x) (x).begin(),(x).end()
typedef long long lint;
const lint MOD =1000000007;
const lint MAX = 10000000;
using Graph =vector<vector<lint>>;
typedef pair<lint,lint> P;

 
lint fac[MAX], finv[MAX], inv[MAX];

void COMinit() // 二項係数を求める時は前処理としてCOMinit()をする
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
 
// 二項係数計算
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
    else if (num % 2 == 0) return 0; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return 0;
        }
    }

    // 素数である
    return 1;
}
lint lcm(lint a,lint b){
      return a/__gcd(a,b)*b;
  }
 
  int main(){
 lint N,ans=0,a=0,b=0,count=0;
 string s;
 cin >>N;
    rep(i,N){
        cin>>s;
        if(s[0]=='B'&&s[s.size()-1]=='A'){
            count++;
            a--;
            b--;
        }
        rep(j,s.size()-1){
            if(j==0&&s[j]=='B')b++;
             if(j==(s.size()-2)&&s[j+1]=='A')a++;
            if(s[j]=='A'&&s[j+1]=='B')ans++;
          
        }
     
    }
  if(count==0)  ans+=min(a,b);
  else if(a+b>0)ans+=(count+min(a,b));
 else if(a+b==0)ans+=count-1;
    cout<<ans;
}
