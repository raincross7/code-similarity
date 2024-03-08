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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, t;
    cin >> s >> t;
    string na = "UNRESTORABLE";
    if(s.length() < t.length()) {
        cout << na << endl;
        return 0;
    }

    for(int i = s.size() - t.size(); i >= 0; --i) {
        bool f = true;
        for(int j = i; j < i + t.size(); ++j) {
            if(s[j] != t[j - i] && s[j] != '?') {
                f = false;
                break;
            }
        }

        if(f) {
            for(int j = i; j < i + t.size(); ++j) {
                s[j] = t[j - i];
            }
            for(int j = 0; j < s.size(); ++j) {
                if(s[j] == '?') s[j] = 'a';
            }
            cout << s << endl;
            return 0;
        }
    }
    cout << na << endl;

    return 0;
}
