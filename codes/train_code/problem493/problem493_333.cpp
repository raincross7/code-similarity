#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(j, m) for (int j = 0; j < (int)(m); j++)
#define rep2(i, l, n) for (int i = l; i < (int)(n); i++)


int main() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int E = min(B,D) - max(A,C);
    if (E >= 0) {
        cout << E << endl;
    }
    else {
        cout << 0 << endl;
    }
}

