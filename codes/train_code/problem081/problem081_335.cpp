#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define FOR_IN(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i, n) FOR(i,0,n)
const int MOD = 1000000007;

// 可変引数で最大公約数を求める関数
// コンパイルオプションに"-std=c++17"を追加
template <class T>
T vgcd(T m, T n) {
  return std::gcd(m, n);
}

template <class T, class... Args>
T vgcd(T a, Args... args) {
  return vgcd(a, vgcd(args...));
}

ll MODPOW(ll res_mod,ll N){
    ll res = 1;
    while(N > 0){
        if(N & 1) res = res * res_mod % MOD;
        res_mod = res_mod * res_mod % MOD;
        N >>= 1;
    }
    return res;
}

int main(void){
    ll N,K;
    cin >> N >> K;
    ll ans = 0;
    vector<ll> bucket(K+10,0);
    for(int i = K; i > 0;i--){
        ll tmp = MODPOW(K/i,N);

        bucket[i] = tmp;
        
        int tmp_num = i*2;
        while(tmp_num <= K){
            bucket[i] -= bucket[tmp_num];
            tmp_num += i;
        }
    }
    FOR_IN(i,1,K){
        ans += i*bucket[i]%MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}