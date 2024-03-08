#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

ll d[205][205];
int n;

void warshall_floyd() {
    for(int k=1; k<=n; k++)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
}

int main(){
    int m, r;
    cin >> n >> m >> r;
    // int rs[r];
    vector<int> rs(r);

    rep(i, r) cin >> rs[i];
    repr(i, 1, n) repr(j, 1, n) if(i!=j) d[i][j] = INF;

    rep(i, m){
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = c;
        d[b][a] = c;
    }

    warshall_floyd();

    ll ans = LLINF;
    sort(rs.begin(), rs.end());
    do{
        ll tmp = 0;
        rep(i, r-1){
            tmp += d[rs[i]][rs[i+1]];
        }
        // cout << tmp << endl;
        chmin(ans, tmp);

        // rep(i, r){
        //     cout << rs[i] << " ";
        // }
        // cout << endl;
    }while(next_permutation(rs.begin(), rs.end()));

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}