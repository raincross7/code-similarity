#include <bits/stdc++.h>

#define F first
#define S second
#define MP make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define LCM(a, b) (a) / __gcd((a), (b)) * (b)
#define CEIL(a, b) (a)/(b)+(((a)%(b))?1:0)
#define ln '\n'

using namespace std;
using LL = long long;
using ldouble = long double;
using P = pair<int, int>;
using LP = pair<LL, LL>;

static const int INF = INT_MAX;
static const LL LINF = LLONG_MAX;
static const int MIN = INT_MIN;
static const LL LMIN = LLONG_MIN;
static const int MOD = 1e9 + 7;
static const int SIZE = 200005;

const int dx[] = {0, -1, 1, 0};
const int dy[] = {-1, 0, 0, 1};

vector<LL> Div(LL n) {
    vector<LL> ret;
    for(LL i = 1; i * i <= n; ++i) {
        if(n % i == 0) {
            ret.pb(i);
            if(i * i != n) ret.pb(n / i);
        }
    }
    sort(all(ret));
    return ret;
}

int graph[105][105];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    for(int i = 1; i <= N; ++i) {
        for(int j = i + 1; j <= N; ++j) {
            graph[i][j] = 1;

        }
    }

    int t = K;
    for(int i = 2; i <= N && K > 0; ++i) {
        for(int j = i + 1; j <= N && K > 0; ++j) {
            graph[i][j] = 0;
            --K;

        }
    }

    if(K > 0) {
        cout << -1 << endl;
        return 0;

    }

    K = t;
    cout << N * (N - 1) / 2 - K << endl;
    for(int i = 1; i <= N; ++i) {
        for(int j = i + 1; j <= N; ++j) {
            if(graph[i][j] == 1) {
                cout << i << " " << j << endl;

            }
        }
    }

    return 0;
}

