#include <bits/stdc++.h>
using namespace std;


void solve(std::vector<long long> H, std::vector<long long> M, long long K){
    int t = (H[1] * 60 + M[1]) - (H[0] * 60 + M[0]) - K;
    cout << t << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::vector<long long> H(2);
    std::vector<long long> M(2);
    for(int i = 0 ; i < 2 ; i++){
        scanf("%lld",&H[i]);
        scanf("%lld",&M[i]);
    }
    long long K;
    scanf("%lld",&K);
    solve(std::move(H), std::move(M), K);
    return 0;
}
