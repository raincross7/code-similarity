#include <iostream>
using namespace std;

int calc_digit(long long N)
{
    if (N == 0) return 1;

    int res = 0;
    while (N) {
        res++;
        N /= 10;
    }
    return res;
}

int main()
{
    long long N;
    cin >> N;
    int res = (1 << 29);
    for (long long A = 1; A * A <= N; A++)
    {
        if (N % A == 0) {
            long long B = N / A;
            int F = max(calc_digit(A), calc_digit(B));
            res = min(res, F);
        }
    }
    cout << res << endl;
}