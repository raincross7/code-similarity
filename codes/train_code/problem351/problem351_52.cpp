#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
ll GetDigit(ll num){ return log10(num)+1; } //numの桁数を求める

int main()
{
    char x, y;
    cin >> x >> y;
    int p = x;
    int q = y;
    if(p < q) cout << '<' << endl;
    else if(p == q) cout << '=' << endl;
    else cout << '>' << endl;
    return 0;
}