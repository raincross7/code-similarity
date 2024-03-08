#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); ++i)
#define repr(i, a, b) for (int i=a; i<(b); ++i)
#define reprev(i, n) for (int i=n-1; i>=0; --i)
#define reprrev(i, a, b) for (int i=b-1; i>=(a); --i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    cout << fixed << setprecision(10);
    
    int H, W, A, B; cin >> H >> W >> A >> B;

    rep(i, H) {
        rep(j, W) {
            if (i < B) {
                if (j < A) {
                    cout << 0;
                } else {
                    cout << 1;
                }
            } else {
                if (j < A) {
                    cout << 1;
                } else {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}