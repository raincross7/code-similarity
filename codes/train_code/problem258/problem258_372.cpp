#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main()
{
    string s;
    cin >> s;

    rep (i, 3)
        if (s[i] == '1')
            cout << "9";
        else
            cout << "1";
    cout << endl;
    return 0;
}