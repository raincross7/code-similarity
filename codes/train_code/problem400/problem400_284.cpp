/*input
123456789
*/

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    int t = 0;
    rep(i, s.size()) t += s[i]-'0';
    if (t%9 == 0) puts("Yes");
    else puts("No"); 
}