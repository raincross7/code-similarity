#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

long long K;
std::vector<long long> A;

ll f(ll mid){
    REP(i, K){
        mid -= mid % A.at(i);
    }
    return mid;
}

void solve(){
    ll lo = 2;
    ll hi = 2;
    REP(i, K){ hi += A.at(i) - 1; }
    while(lo < hi){
        ll mid = (lo + hi + 1) / 2;
        ll fmid = f(mid);
        if(fmid == 2){
            lo = mid;
        }else if(fmid > 2){
            hi = mid - 1;
        }else{ // fmid < 2
            lo = mid + 1;
        }
    }
    if(f(lo) != 2){
        cout << -1 << endl;
        return;
    }
    const ll ans_max = lo;

    ll ans_min = binary_search(
        2, ans_max,
        [&](ll mid) -> bool {
            REP(i, K){
                mid -= mid % A.at(i);
            }
            return mid == 2;
        },
        false
    );

    cout << ans_min << ' ' << ans_max << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools
int main(){
    scanf("%lld",&K);
    A.resize(K);
    for(int i = 0 ; i < K ; i++){
        scanf("%lld",&A[i]);
    }
    solve();
    return 0;
}
