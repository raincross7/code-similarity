#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string s;
    cin >> k >> s;

    if (s.size() > k)
    {
        s = s.substr(0,k) + "...";
    }

    cout << s << endl;
}