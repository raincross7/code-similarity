#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> P;
#define ll long long
#define ld long double
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define PI 3.14159265358979323846
#define sz(x) ((int)(x).size())
#define chmin(x,y) x = min(x,y)
#define chmax(x,y) x = max(x,y)
#define all(x) (x).begin(),(x).end()

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;
int main()
{
    int n;cin >> n;
    vector<int> d(n);rep(i,n)cin >> d[i];
    sort(d.begin(),d.end());
    if (d[n / 2 ] - d[n / 2-1] == 0 )
    {
        cout << 0 << endl;
        return 0;
    }
    cout << d[n / 2 ] - d[n / 2-1] << endl;
}
