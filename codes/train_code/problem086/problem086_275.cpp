#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> VI;

template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
#define _overload3(_1,_2,_3,name,...) name
#define _rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload3(__VA_ARGS__,repi,_rep,)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()


int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep (i, n) {
        cin >> a[i];
    }
    rep (i, n) {
        cin >> b[i];
    }
    ll ctr = 0;
    rep (i, n) {
        if (a[i] > b[i]) {
            ctr += a[i] - b[i];
        } else {
            ctr -= (b[i] - a[i]) / 2;
        }
    }
    cout << (ctr > 0 ? "No" : "Yes") << endl;
}