#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;
    bool bus = true;
    if (s == "AAA")
        bus = false;
    if (s == "BBB")
        bus = false;
    if (bus)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}