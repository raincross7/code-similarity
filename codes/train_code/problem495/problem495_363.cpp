#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>
//#include <unistd.h>
//#include <stdio.h>
#define rep(i,x) for(ll i = 0;i<x;i++)
#define all(a) (a).begin(),(a).end()
using ll = long long;
using ld = long double;
using namespace std;
using dou = double;
const ll INF = 1LL << 60;
const ll mod = 1000000007;
typedef pair<ll,ll> P;
using graph = vector<vector<ll>>;
template<class T> inline bool chmax(T& a, T b){if(a < b){a = b; return true;}return false;}
template<class T> inline bool chmin(T& a, T b){if(a > b){a = b; return true;}return false;}
ll gcd(ll a,ll b){
    if(a < b)swap(a,b);
    if(a % b == 0)return b;
    else return gcd(b,a%b);
}
//素数判定O(sqrt(N))
bool isp(ll n){
    bool res = true;
    if(n == 1)return false;
    else{
        for(ll i = 2;i * i <= n;i++){
            if(n % i == 0){
                res = false;
                break;
            }
        }
        return res;
    }
}

ll fac[510000], finv[510000], inv[510000];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (ll i = 2; i < 510000; i++){
        fac[i] = fac[i - 1] * i % mod;
        inv[i] = mod - inv[mod%i] * (mod / i) % mod;
        finv[i] = finv[i - 1] * inv[i] % mod;
    }
}

// 二項係数計算
ll COM(ll n, ll k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % mod) % mod;
}
//nのm乗をMODで割ったあまりO(logN)
ll modpow(ll n,ll m,ll MOD){
    ll res = 1;
    while(m){
        if(m & 1)res = (res * n) % MOD;
        m >>= 1;
        n *= n;
        n %= MOD;
    }
    return res;
}

//printf("%.10f\n", N);
/*  vector<ll> vec = {1,2,5,6,8,9,10};
    cout << binary_search(all(vec),5) << endl; -> true*/
/*
    vector<ll> vec = {1,2,5,6,8,9,10};
    auto n = upper_bound(all(vec),4);
    cout << *n << endl; -> 5*/
/*
    cout << fixed << setprecision(15);
*/

int main(){
    ll N,A,B,C;
    cin >> N >> A>> B >> C;
    vector<ll> num(N);
    rep(i,N)cin >> num[i];
    vector<ll> dore(N);
    ll ans = INF;
    for(ll i = 0;i < pow(4,N);i++){
        ll n = i;
        rep(j,N){
            dore[j] = n % 4;
            n /= 4;
        }
        ll a = 0,b = 0,c = 0,cnt = 0;
        ll p1 = -1,p2 = -1,p3 = -1;
        rep(j,N){
            if(dore[j] == 1){
                a += num[j];
                p1++;
            }
            else if(dore[j] == 2){
                b += num[j];
                p2++;
            }
            else if(dore[j] == 3){
                c += num[j];
                p3++;
            }
        }
        if(p1 < 0)p1 = 0;if(p2 < 0)p2 = 0;if(p3 < 0)p3 = 0;
        if(c == 0 || b == 0 || a == 0)continue;
        cnt += abs(a - A) + abs(b - B) + abs(c - C);
        cnt += (p1 + p2 + p3) * 10;
        ans = min(ans,cnt);
    }
    cout << ans << endl;
}