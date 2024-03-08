#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(long long N, long long A, long long B, std::vector<long long> P)
{
    ll one = 0, two = 0, three = 0;
    for (auto p : P) {
        if (p <= A) {
            one++;
        } else if (A < p && p <= B) {
            two++;
        } else {
            three++;
        }
    }

    cout << min({ one, two, three }) << endl;
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
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    std::vector<long long> P(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&P[i]);
    }
    solve(N, A, B, std::move(P));
    return 0;
}