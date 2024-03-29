#include <bits/stdc++.h>
#include <atcoder/dsu.hpp>
using namespace std;
using namespace atcoder;

void solve(long long N, long long Q, std::vector<long long> t, std::vector<long long> u, std::vector<long long> v){
    dsu d(N);
    for (int i = 0; i < Q; i++) {
        if (t[i] == 0) {
            d.merge(u[i], v[i]);
        } else {
            cout << d.same(u[i], v[i]) << endl;
        }
    }
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> t(Q);
    std::vector<long long> u(Q);
    std::vector<long long> v(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&t[i]);
        scanf("%lld",&u[i]);
        scanf("%lld",&v[i]);
    }
    solve(N, Q, std::move(t), std::move(u), std::move(v));
    return 0;
}
