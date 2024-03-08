#include <bits/stdc++.h>
using namespace std;

#define DUMP(x) cerr << #x << "=" << x << endl
#define DUMP2(x, y) cerr<<"("<<#x<<", "<<#y<<") = ("<<x<<", "<<y<<")"<< endl
#define BINARY(x) static_cast<bitset<16> >(x)

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

#define in_range(x, y, w, h) (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
const int INF   = 1e9;
const ll  INFLL = 1e18;
typedef pair<int, int> PII;
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};

vector<vector<int>> G;

int grundy(int v, int pre)
{
    int g = 0;
    for (auto u : G[v]) {
        if (u == pre) continue;
        g ^= (grundy(u, v) + 1);
    }
    return g;
}


int main()
{
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    G.resize(N);
    rep(i, N-1) {
        int X, Y;
        cin >> X >> Y;
        X--, Y--;
        G[X].push_back(Y);
        G[Y].push_back(X);
    }
    cout << (grundy(0, -1) != 0 ? "Alice" : "Bob") << endl;
}