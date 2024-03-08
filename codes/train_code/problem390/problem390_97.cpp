#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int Inf = 2000000010;
constexpr ll INF= 2000000000000000000;
constexpr ll MOD = 1000000007;
const double PI = 3.1415926535897;
typedef pair<ll,ll> P;

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

ll mod(ll val, ll M) {
    ll res = val % M;
    if(res < 0) {
        res += M;
    }
    return res;
}

// N^P mod M（ただしM == -1の時はmodを取らない）
template<typename T>
T RS(T N, T P, T M){
    if(P == 0) {
        return 1;
    }
    if(P < 0) {
        return 0;
    }
    if(P % 2 == 0){
        ll t = RS(N, P/2, M);
        if(M == -1) return t * t;
        return t * t % M;
    }
    if(M == -1) {
        return N * RS(N,P - 1,M);
    }
    return N * RS(N, P-1, M) % M;
}

int main() {
    int Q;
    cin >> Q;
    for(int i = 0;i < Q;i++) {
        ll A,B;
        cin >> A >> B;
        if(A == B) {
            cout << 2 * A - 2 << endl;
        }
        else {
            ll ok = 0;
            ll ng = 1000000001;
            ll mid = 0;
            while(ng - ok > 1) {
                mid = (ok + ng) / 2;
                if(mid * mid < A * B) {
                    ok = mid;
                }
                else {
                    ng = mid;
                }
            }
            if(ok * (ok + 1) >= A * B) {
                cout << 2 * ok - 2 << endl;
            }
            else {
                cout << 2 * ok - 1 << endl;
            }
        }
    }
}