#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;
const long long int INF = 1e18;
const long long int MOD = 1e9+7;

typedef pair<ll, ll> pairs;
typedef vector<pairs> p;

struct edge{
    ll to, cost;
};


ll gcd(ll a,ll b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}

ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

ll keta(ll N){
    int tmp{};
    while( N > 0 ){
        tmp += ( N % 10 );
        N /= 10;
    }
    N = tmp;
    return N;
}

// 素数
vector<bool> IsPrime;
void sieve(size_t max){
    if(max+1 > IsPrime.size()){
        IsPrime.resize(max+1,true);
    } 
    IsPrime[0] = false;
    IsPrime[1] = false;

    for(size_t i=2; i*i<=max; ++i){
        if(IsPrime[i]){
            for(size_t j=2; i*j<=max; ++j){
                IsPrime[i*j] = false;
            }
        }
    }
}

// べき乗の余り
ll modpow(ll a, ll n){
    ll res = 1;
    while(n){
        if(n & 1){
            res = res * a % MOD;
        }
        a = a * a % MOD;
        n = n >> 1;
    }
    return res;
}

// コンビネーション
ll MAXN = 2e5+10;
vector<ll> inv(MAXN);
ll nCk(ll n, ll k) {
	ll res = 1;
	for(ll i = 1; i <= k; i++) {
		res = res*(n-i+1) % MOD;
	}
 
	for(ll i = 1; i <= k; i++) {
		res = res*inv[i] % MOD;
	}
	return res;
}

// 回文
bool kai(string S){
    bool flag = true;
    for(ll i=0;i<S.size()/2;++i){
        if(S[i] != S[S.size()-i-1]){
            flag = false;
            break;
        }
    }
    return flag;
}
// ---------------------------------------------

int main(){
    ll n, k, s;
    cin>>n>>k>>s;

    if(n == k){
        for(ll i=0;i<n;++i){
            if(i != 0){
                cout<<' ';
            }
            cout<<s;
        }
        cout<<endl;
    }else if(s == 1){
        for(ll i=0;i<k;++i){
            if(i != 0){
                cout<<' ';
            }
            cout<<s;
        }
        for(ll i=0;i<n-k;++i){
            cout<<' '<<5;
        }
        cout<<endl;
    }else{
        for(ll i=0;i<k+1;++i){
            if(i != 0){
                cout<<' ';
            }
            if(i % 2 == 0){
                cout<<s - 1;
            }else{
                cout<<1;
            }
        }
        for(ll i=0;i<n-k-1;++i){
            cout<<' '<<1987681;
        }
        cout<<endl;
    }

    return 0;
}