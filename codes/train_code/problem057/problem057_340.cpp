#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main()
{
    string s;
    cin >> s;
    string ss;
    for (int i = 1; i <= s.size(); i++)
    {
        if (i % 2 != 0)
            ss += s[i - 1];
    }
    cout << ss << endl;
    return 0;
}