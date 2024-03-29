#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(long long N, long long K)
{
    ll max_K = (N - 1) * (N - 2) / 2;
    if (K > max_K) {
        cout << -1 << endl;
        return;
    }

    cout << N - 1 + max_K - K << endl;
    for (ll i = 2; i <= N; i++) {
        cout << 1 << " " << i << "\n";
    }

    for (ll i = 2; i <= N; i++) {
        for (ll j = i + 1; j <= N; j++) {
            if (K >= max_K) {
                return;
            }
            cout << i << " " << j << "\n";
            K++;
        }
    }
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
// clang-format off
#pragma GCC diagnostic ignored "-Wunused-result"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    solve(N, K);
    return 0;
}
