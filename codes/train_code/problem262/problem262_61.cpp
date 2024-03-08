#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define m0(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define rep(i, n) for(int i = 0; i < (n); i++)
#define asort(x) sort(all(x));
#define dsort(x, t) sort(x.begin(), x.end(), greater<t>());
#define vuni(v) v.erase(unique(v.begin(), v.end()), v.end());
#define mins(m, s) m.insert(make_pair(s, 1));
#define mfin(m, s) m.find(s) != m.end()

#define dump(x) cout << #x << " = " << (x) << endl
#define YES(n) cout << ((n) ? "YES" : "NO") << endl
#define Yes(n) cout << ((n) ? "Yes" : "No") << endl

const int INF = 1e9;
const ll LINF = 1e18;
const int mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b = a;
    dsort(b, int);
    for(int i = 0; i < n; i++) {
        if(a[i] != b[0]) {
            cout << b[0] << endl;
        } else {
            cout << b[1] << endl;
        }
    }
    return 0;
}