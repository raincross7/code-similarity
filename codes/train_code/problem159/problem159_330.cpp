#include <bits/stdc++.h>
typedef long long lint;
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int main() {
    int x; cin >> x;
    for (int i=1;;i++) {
        if ((x*i) % 360 == 0) {
            cout << i << endl;
            break;
        }
    }
}