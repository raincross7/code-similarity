#include <bits/stdc++.h>
using namespace std;

using namespace std;

#define REP(i, n) for ((i) = 0; (i) < (int)(n); (i)++)
#define foreach(c, itr) for (__typeof((c).begin()) itr = (c).begin(); itr != (c).end(); itr++)

typedef long long ll;

ll b[70];
ll path[70];

bool can(vector<ll> v, ll target) {
    int i, j;

    REP(i, 70)
    b[i] = 0;
    REP(i, v.size()) {
        ll x = v[i];
        for (j = 59; j >= 0; j--)
            if (x & (1ll << j)) {
                if (b[j] != 0) {
                    x ^= b[j];
                } else {
                    b[j] = x;
                    break;
                }
            }
    }

    for (i = 59; i >= 0; i--)
        if (target & (1ll << i)) target ^= b[i];
    return (target == 0);
}

ll construct(vector<ll> v, ll target) {
    int i, j;

    REP(i, 70)
    b[i] = path[i] = 0;

    REP(i, v.size()) {
        ll x = v[i], mask = (1ll << i);
        for (j = 59; j >= 0; j--)
            if (x & (1ll << j)) {
                if (b[j] != 0) {
                    x ^= b[j];
                    mask ^= path[j];
                } else {
                    b[j] = x;
                    path[j] = mask;
                    break;
                }
            }
    }

    ll ans = 0;
    for (i = 59; i >= 0; i--)
        if (target & (1ll << i)) {
            target ^= b[i];
            ans ^= path[i];
        }

    return ans;
}

bool can(vector<ll> x, ll target, ll mask) {
    int i;
    vector<ll> y;
    REP(i, x.size())
    y.push_back(x[i] & mask);
    return can(y, target);
}

ll solve(ll xor_all, vector<ll> x) {
    int i;

    ll mask = 0, target = 0;

    for (i = 59; i >= 0; i--)
        if (!(xor_all & (1ll << i))) {
            mask |= (1ll << i);
            if (can(x, (target | (1ll << i)), mask)) target |= (1ll << i);
        }

    for (i = 59; i >= 0; i--)
        if (xor_all & (1ll << i)) {
            mask |= (1ll << i);
            if (can(x, (target | (1ll << i)), mask)) target |= (1ll << i);
        }

    return construct(x, target);
}

ll a[100010];
vector<int> important;
int ans[100010];

int main(void) {
    int N, i, j;

    cin >> N;
    REP(i, N)
    cin >> a[i];

    REP(i, N) {
        ll x = a[i];
        for (j = 59; j >= 0; j--)
            if (x & (1ll << j)) {
                if (b[j] != 0) {
                    x ^= b[j];
                } else {
                    b[j] = x;
                    important.push_back(i);
                    break;
                }
            }
    }

    int D = important.size();
    vector<ll> v;
    REP(i, D)
    v.push_back(a[important[i]]);

    ll xor_all = 0;
    REP(i, N)
    xor_all ^= a[i];

    ll mask = solve(xor_all, v);
    REP(i, N)
    ans[i] = 1;
    REP(i, D)
    if (mask & (1ll << i)) ans[important[i]] = 2;

    ll x1 = 0, x2 = 0;
    REP(i, N) {
        (ans[i] == 1 ? x1 : x2) ^= a[i];
    }
    cout << x1 + x2 << endl;

    /*  
    ll xor_two = 0;
    REP(i,N) if(ans[i] == 2) xor_two ^= a[i];
    cout << xor_two + (xor_all ^ xor_two) << ' ' << xor_two << endl;
    
    REP(mask,(1<<N)){
        xor_two = 0;
        REP(i,N) if(mask&(1<<i)) xor_two ^= a[i];
        cout << xor_two + (xor_all ^ xor_two) << ' ' << xor_two << endl;
    }
*/
    return 0;
}