#include <bits/stdc++.h>
using namespace std;
#ifdef _DEBUG
#define dlog(str) cout << "====" << str << endl;
#else
#define dlog(str)
#endif
#define INF 999999999
#define MOD 1000000007
#define REP(i, n) for(int i = 0, i##_l = (n); i < i##_l; i++)
#define FOR(i, s, e) for(LLI i = s, i##_l = (e); i < i##_l; i++)
#define LLI long long int
#define _min(a, b) ((a < b) ? a : b)
#define _max(a, b) ((a < b) ? b : a)
#define chmax(a, b) a = _max(a, b)
#define chmin(a, b) a = _min(a, b)
#define bit(a, shift) ((a>>shift)&1))
#define pm(a) ((a) ? 1 : -1)
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
// int 2.14E±9    lli 9.2E±18    double 1.7E±380

int main() {
    cout << fixed << setprecision(10);
    LLI W, H;
    cin >> H >> W;

    LLI ans = H * W;
    FOR(w, 1, W) {
        LLI a = H * w;
        LLI b = (H / 2) * (W - w);
        LLI c = (H - H / 2) * (W - w);

        LLI ma = max(max(a, b), c);
        LLI mi = min(min(a, b), c);

        chmin(ans, ma - mi);
    }
    FOR(h, 1, H) {
        LLI a = h * W;
        LLI b = (H - h) * (W / 2);
        LLI c = (H - h) * (W - W / 2);

        LLI ma = max(max(a, b), c);
        LLI mi = min(min(a, b), c);

        chmin(ans, ma - mi);
    }
    FOR(w, 1, W) {
        LLI a = H * w;
        LLI b = H * ((W - w) / 2);
        LLI c = H * ((W - w) - (W - w) / 2);

        LLI ma = max(max(a, b), c);
        LLI mi = min(min(a, b), c);

        chmin(ans, ma - mi);
    }
    FOR(h, 1, H) {
        LLI a = h * W;
        LLI b = ((H - h) / 2) * W;
        LLI c = ((H - h) - (H - h) / 2) * W;

        LLI ma = max(max(a, b), c);
        LLI mi = min(min(a, b), c);

        chmin(ans, ma - mi);
    }
    cout << ans;
    return 0;
}

/*

W*(h)
W*(H-h)/2

*/