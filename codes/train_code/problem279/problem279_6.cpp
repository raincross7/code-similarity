#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int zero = 0, one = 0;
    rep(i, n)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }
    int ans = n - abs(zero - one);
    cout << ans << endl;
    return 0;
}