#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for (ll i = 0; i < (n); ++i)

long long N;
long long K;
std::vector<long long> H;
vector<ll> uh;

unordered_map<ll, ll> h2i;
array<array<array<ll, 301>, 301>, 301> dp;

ll solve2(ll pos, ll lefth, ll rest){
    if(pos >= N){
        return 0;
    }
    if(dp[pos][h2i[lefth]][rest] != -1){
        return dp[pos][h2i[lefth]][rest];
    }
    ll ret = max(0LL, H.at(pos) - lefth) + solve2(pos + 1, H.at(pos), rest);
    if(rest > 0){
        ret = min(
            ret,
            solve2(pos + 1, lefth, rest - (H.at(pos) != lefth))
        );
    }
    dp[pos][h2i[lefth]][rest] = ret;
    return ret;
}

void solve(){
    uh = H;
    sort(uh.begin(), uh.end());
    uh.erase(unique(uh.begin(), uh.end()), uh.end());
    REP(i, uh.size()){
        h2i[uh.at(i)] = i;
    }
    REP(i, dp.size()){
        REP(j, dp.at(i).size()){
            fill(dp.at(i).at(j).begin(), dp.at(i).at(j).end(), -1);
        }
    }
    cout << solve2(0, 0, K) << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    if(0){
        N = 300;
        H.resize(N);
        REP(i, N){
            H[i] = i + 100000000;
        }
        K = 300;
    }else{
        scanf("%lld",&N);
        scanf("%lld",&K);
        H.resize(N);
        for(int i = 0 ; i < N ; i++){
            scanf("%lld",&H[i]);
        }
    }
    solve();
    return 0;
}
