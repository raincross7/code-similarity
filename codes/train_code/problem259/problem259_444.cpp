#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int r;
    cin >> r;
    if      ( r < 1200 ) cout << "ABC" << endl;
    else if ( r < 2800 ) cout << "ARC" << endl;
    else                 cout << "AGC" << endl;
    return 0;
}