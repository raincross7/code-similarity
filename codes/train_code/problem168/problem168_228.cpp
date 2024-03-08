#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,ll>;

void solve(long long N, long long Z, long long W, std::vector<long long> a){
    if(N==1){
        cout << abs(W-a[N-1]) << endl;
        return;
    }
    cout << max(abs(a[N-1]-a[N-2]),abs(W-a[N-1])) << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long Z;
    scanf("%lld",&Z);
    long long W;
    scanf("%lld",&W);
    std::vector<long long> a(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
    }
    solve(N, Z, W, std::move(a));
    return 0;
}