#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b); i >= (a); i--)
#define R0F(i, a) ROF(i, 0, a-1)
#define trav(x, a) for (auto& x: a)

const int MX  = 2e5+5;
const int MOD = 1e9+7;
const ll  INF = 1061109567; // 4557430888798830399LL
const ld  EPS = 1e-9;
const ld  PI  = acos(-1);

typedef pair<int,int> P;
typedef vector<P> vP;

#define X first
#define Y second

int distM(P x, P y) {
    return abs(x.X-y.X)+abs(x.Y-y.Y);
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M; cin >> N >> M;

    vP s(N), c(M);
    trav(x, s) cin >> x.X >> x.Y;
    trav(x, c) cin >> x.X >> x.Y;

    bitset<MX> mk;
    F0R(i, N) {
        ii res = {-1,INF};
        F0R(j, M) {
            if (distM(s[i],c[j]) < res.s) {
                res.s = distM(s[i],c[j]);
                res.f = j;
            }
        }

        cout << res.f+1 << "\n";
    }


}
