#include <bits/stdc++.h>
using namespace std;

const long long MOD = 5;
const string YES = "YES";
const string NO = "NO";

int solve(long long A, long long B, long long C)
{
    for (int i = 1; i <= B; i++)
    {
        if (A * i % B == C)
        {
            puts("YES");
            return 0;
        }
    }

    puts("NO");
    return 0;
}

// Generated by 1.1.7.1 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main()
{
    long long A;
    scanf("%lld", &A);
    long long B;
    scanf("%lld", &B);
    long long C;
    scanf("%lld", &C);
    solve(A, B, C);
    return 0;
}