#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define ALL(a) (a).begin(), (a).end()
const ll mod = 1e9 + 7;

int main()
{
    string s;
    cin >> s;
    if (s.length() < 4)
        cout << "No" << endl;
    else
    {
        if (s[0] == 'Y' && s[1] == 'A' && s[2] == 'K' && s[3] == 'I')
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
