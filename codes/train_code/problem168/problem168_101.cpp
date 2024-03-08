#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int Inf = 1000000010;
constexpr ll INF= 5000000000000000000;
constexpr ll MOD = 1000000007;
const double PI = 3.1415926535897;
typedef pair<ll,ll> P;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

ll mod(ll val) {
    ll res = val % MOD;
    if(res < 0) {
        res += MOD;
    }
    return res;
}

// N^P mod M（ただしM == -1の時はmodを取らない）
template<typename T>
T RS(T N, T P, T M){
    if(P==0) return 1;
    if(P < 0) return 0;
    if(P%2==0){
        ll t = RS(N, P/2, M);
        if(M == -1) return t * t;
        return t * t % M;
    }
    if(M == -1) return N * RS(N,P - 1,M);
    return N * RS(N, P-1, M) % M;
}

int main() {
    ll N,Z,W;
    cin >> N >> Z >> W;
    vector<ll> vec(N);
    for(int i = 0;i < N;i++) {
        cin >> vec.at(i);
    }
    ll ret = abs(W - vec.at(N - 1));
    if(N > 1) {
        chmax(ret,abs(vec.at(N - 2) - vec.at(N - 1)));
    }
    cout << ret << endl;
}