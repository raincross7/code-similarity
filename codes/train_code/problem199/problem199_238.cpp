#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define dump(x) cout << #x << " = " << (x) << endl
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end());
#define MINS(m, s) m.insert(make_pair(s, 1));
#define MFIN(m, s) m.find(s) != m.end()
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl

const int INF = 1e9;
const ll LINF = 1e18;
const int mod = 1e9 + 7;

int main() {
    ll n, m, a;
    cin >> n >> m;
    priority_queue<ll> p_que;
    for(ll i = 0; i < n; i++) {
        cin >> a;
        p_que.push(a);
    }
    for(ll i = 0; i < m; i++) {
        ll t = p_que.top();
        p_que.pop();
        p_que.push(t / 2);
    }

    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        sum += p_que.top();
        p_que.pop();
    }

    cout << sum << endl;

    return 0;
}