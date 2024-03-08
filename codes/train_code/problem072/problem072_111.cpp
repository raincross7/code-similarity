#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0, i##_len = (n); i < i##_len; i++)
#define reps(i, s, n) for(int i = (s), i##_len = (n); i < i##_len; i++)
#define rrep(i, n) for(int i = (n) - 1; i >= 0; i--)
#define rreps(i, e, n) for(int i = (n) - 1; i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define uniq(x) (x).erase(unique((x).begin(), (x).end()), (x).end())

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int t = 0;
    vector<int> k;
    reps(i, 1, n + 1) {
        k.push_back(i);
        t += i;
        if (t > n) break;
    }
    int r = t - n;
    rrep(i, sz(k)) {
        if (k[i] <= r) {
            r -= k[i];
            k[i] = 0;
            if (r == 0) break;
        }
    }
    rep(i, sz(k)) {
        if (k[i] > 0) printf("%d\n", k[i]);
    }
    return 0;
}