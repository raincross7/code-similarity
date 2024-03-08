#include <bits/stdc++.h>

#define F first
#define S second
#define MP make_pair
#define pb push_back
#define all(a) a.begin(), a.end()
#define lcm(a, b) (a)/__gcd((a),(b))*(b)
#define endl '\n'

using namespace std;

typedef long long LL;
typedef pair<int, int> P;
typedef pair<LL, LL> LP;

static const int INF = INT_MAX;
static const LL LINF = LLONG_MAX;
static const int MIN = INT_MIN;
static const LL LMIN = LLONG_MIN;
static const int MOD = 1000000007;
static const int SIZE = 200005;

const int dx[] = {0, -1, 1, 0};
const int dy[] = {-1, 0, 0, 1};

vector<int> Div(int n) {
    vector<int> ret;
    for(int i = 1; i * i <= n; ++i) {
        if(n % i == 0) {
            ret.pb(i);

            if(i * i != n) ret.pb(n / i);
        }
    }
    sort(all(ret));
    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    LL sum = 0;
    unordered_map<LL, LL> ump;
    set<LL> st;
    ump[0]++;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        ump[sum % m]++;
        st.insert(sum % m);

    }

    LL res = 0;
    for(auto it = st.begin(); it != st.end(); ++it) {
        res += (ump[*it] * (ump[*it] - 1)) / 2;

    }
    cout << res << endl;
    return 0;
}
