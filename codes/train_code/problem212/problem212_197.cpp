#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 1; i <= N; i += 2)
    {
        int yakusuu = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                yakusuu++;
        }
        if (yakusuu == 8)
            cnt++;
    }
    cout << cnt << endl;
}