#include <bits/stdc++.h>

using namespace std;

#define INF 1001000100010001000
#define MOD 1000000007
#define EPS 1e-10
#define int long long
#define rep(i, N) for (int i = 0; i < N; i++)
#define Rep(i, N) for (int i = 1; i < N; i++)
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define vp vector< pii >
#define all(a) (a).begin(), (a).end()
#define Int(x) int x; cin >> x;
#define int2(x, y) Int(x); Int(y);
#define int3(x, y, z) Int(x); int2(y, z);
#define in(x, a, b) ((a) <= (x) && (x) < (b))
#define fir first
#define sec second
#define ffir first.first
#define fsec first.second
#define sfir second.first
#define ssec second.second
#define Decimal fixed << setprecision(10)

//int dxy[5] = {0, 1, 0, -1, 0};
// cmd

signed main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    vi table(101000, 0);
    vi funami(101000, 0);
    int cnt = 0;
    Rep(i, 101000) {
        cnt += i;
        if (cnt >= table.size()) break;
        table[cnt] = 1;
        funami[cnt] = i;
//        cout << cnt << endl;
    }

    Int(n);
    if (!table[n]) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
        int k = funami[n]+1;
        cout << k << endl;
        int sum = 1;
        vi yui;
        rep(i, k) {
            int tmp = sum;
            cout << k-1 << " ";
            rep(j, (k-1)-i) {
                cout << sum++ << " ";
            }
            rep(j, yui.size()) {
                cout << yui[j]++ << " ";
            }
            cout << endl;
            yui.pb(tmp);
        }
    }

    return 0;
}
