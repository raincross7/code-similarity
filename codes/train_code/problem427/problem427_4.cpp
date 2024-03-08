#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define REP(i,n) for (ll i = 0; i < (n); ++i)

ll binary_search(
    ll lo, ll hi, function<bool(ll)> is_ok,
    bool maximize
){
    while(lo < hi){
        if(maximize){
            const ll mid = (lo + hi + 1) / 2;
            if(is_ok(mid)){
                lo = mid;
            }else{
                hi = mid - 1;
            }
        }else{
            const ll mid = (lo + hi) / 2;
            if(is_ok(mid)){
                hi = mid;
            }else{
                lo = mid + 1;
            }
        }
    }
    return lo;
}

void solve(long long N, long long M, long long V, long long P, std::vector<long long> A){
    sort(A.begin(), A.end(), greater<ll>());
    ll ans = binary_search(
        0, A.size() - 1,
        [&](ll x){
            if(x < P){
                return true;
            }
            if(A.at(x) + M < A.at(P - 1)){
                return false;
            }
            ll tmp = (N - x - 1 + P) * M;
            for(ll i = P - 1; i < x; ++i){
                tmp += (A.at(x) + M - A.at(i));
            }
            return tmp >= M * V;
        },
        true
    ) + 1;
    cout << ans << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools
int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long V;
    scanf("%lld",&V);
    long long P;
    scanf("%lld",&P);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, M, V, P, std::move(A));
    return 0;
}