#include <bits/stdc++.h>

#define F first
#define S second
#define MP make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define lcm( a, b ) (a)/__gcd((a),(b))*(b)
#define endl '\n'

using namespace std;

typedef long long LL;
typedef pair< int, int > P;
typedef pair< LL, LL > LP;

static const int INF = INT_MAX;
static const LL LINF = LLONG_MAX;
static const int MIN = INT_MIN;
static const LL LMIN = LLONG_MIN;
static const int MOD = 1000000007;
static const int SIZE = 200005;

const int dx[] = {0, -1, 1, 0};
const int dy[] = {-1, 0, 0, 1};

LL fac[SIZE], finv[SIZE], inv[SIZE];
void combInit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for( int i = 2; i < SIZE; ++i ) {
        fac[i] = (fac[i - 1] * i) % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = (finv[i - 1] * inv[i]) % MOD;

    }
}

LL comb(int n, int k) {
    if( n < k ) return 0;
    if( n < 0 || k < 0 ) return 0;
    return (fac[n] * (finv[k] * finv[n - k] % MOD)) % MOD;

}

vector< int > Div( int n ) {
    vector< int > ret;
    for( int i = 1; i * i <= n; ++i ) {
        if( n % i == 0 ) {
            ret.pb( i );

            if( i * i != n ) ret.pb( n / i );
        }
    }
    sort( all( ret ) );
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    LL n, K;
    cin >> n >> K;
    vector< LP > v(n);
    for( int i = 0; i < n; ++i ) {
        cin >> v[i].F >> v[i].S;

    }

    LL res = LINF;
    for( int i = 0; i < n; ++i ) {
        for( int j = 0; j < n; ++j ) {
            for( int k = 0; k < n; ++k ) {
                for( int l = 0; l < n; ++l ) {
                    LL xmin, xmax, ymin, ymax;
                    xmin = min(v[i].F, min(v[j].F, min(v[k].F, v[l].F)));
                    xmax = max(v[i].F, max(v[j].F, max(v[k].F, v[l].F)));
                    ymin = min(v[i].S, min(v[j].S, min(v[k].S, v[l].S)));
                    ymax = max(v[i].S, max(v[j].S, max(v[k].S, v[l].S)));
                    int cnt = 0;
                    for( int m = 0; m < n; ++m ) {
                        if( xmin <= v[m].F && v[m].F <= xmax &&
                                ymin <= v[m].S && v[m].S <= ymax ) {
                            ++cnt;

                        }
                    }
                    if( K <= cnt ) {
                        res = min(res, (xmax - xmin) * (ymax - ymin));

                    }
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
