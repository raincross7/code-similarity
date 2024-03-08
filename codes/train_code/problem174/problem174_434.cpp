#include <bits/stdc++.h>
using namespace std;

const string YES = "POSSIBLE";
const string NO = "IMPOSSIBLE";

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve(long long N, long long K, std::vector<long long> A)
{
    long long gc = 0, ma = 0;
    for (int i = 0; i < N; i++)
        gc = gcd(A[i], gc), ma = max(ma, A[i]);
    if (K % gc)
    {
        cout << NO << endl;
        return;
    }
    if (K > ma)
    {
        cout << NO << endl;
        return;
    }
    cout << YES << endl;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long N;
    scanf("%lld", &N);
    long long K;
    scanf("%lld", &K);
    std::vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    solve(N, K, std::move(A));
    return 0;
}