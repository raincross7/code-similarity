#include <bits/stdc++.h>

#define REP(i,n) for (int i=0;i<(n);++i)

using namespace std;

using ll = long long;

int mod(int x, int m) {
    if (x > 0) {
        return x % m;
    } else {
        int r = (-x) % m;
        return r ? m - r : 0;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, L, T;
    cin >> N >> L >> T;
    vector<int> X(N), W(N);
    REP(i, N) {
        cin >> X[i] >> W[i];
    }

    ll cnt = 0; // アリ 0 がすり抜ける回数。
    REP(i, N) {
        if (W[i] != W[0]) {
            int d;
            if (W[0] == 1 && W[i] == 2) {
                d = X[i] - X[0];
            } else if (W[0] == 2 && W[i] == 1) {
                d = L - (X[i] - X[0]);
            }
            if (2 * T >= d) {
                cnt += 1 + (2 * T - d) / L;
            }
        }
    }
    int k;
    int Yk;
    if (W[0] == 1) {
        k = mod(cnt, N);
        Yk = mod(X[0] + T, L);
    } else if (W[0] == 2) {
        k = mod(-cnt, N);
        Yk = mod(X[0] - T, L);
    }

    vector<int> Y(N);
    REP(i, N) {
        if (W[i] == 1) {
            Y[i] = mod(X[i] + T, L);
        } else if (W[i] == 2) {
            Y[i] = mod(X[i] - T, L);
        }
    }
    sort(Y.begin(), Y.end());

    int l = lower_bound(Y.begin(), Y.end(), Yk) - Y.begin();
    int l1;
    if (W[0] == 1) {
        l1 = mod(l + 1, N);
    } else if (W[0] == 2) {
        l1 = mod(l - 1, N);
    }
    if (Y[l] == Y[l1]) {
        l = l1;
    }

    REP(i, N) {
        cout << Y[mod(i + l - k, N)] << '\n';
    }
    cout << flush;
    
    return 0;
}
