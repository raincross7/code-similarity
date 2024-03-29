#include <bits/stdc++.h>
#define INF 1e9
#define endl '\n'
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define RFOR(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define FORE(i, a, b) for (int i = (a), e = (b); i < e; ++i)
#define RFORE(i, a, b) for (int i = (b)-1, e = (a); i >= e; --i)
#define ALL(x) (x).begin(), (x).end()
#define SORT(c) sort((c).begin(), (c).end())
#define SORTR(c) sort((c).begin(), (c).end(), greater<int>())
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int       N;
    long long Y;
    cin >> N >> Y;
    Y /= 1000;
    FOR(im, 0, N + 1) {
        FOR(gs, 0, N - im + 1) {
            int sen = N - im - gs;
            if (im * 10 + gs * 5 + sen == Y) {
                cout << im << " " << gs << " " << sen << endl;
                exit(0);
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}
