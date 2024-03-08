#include <bits/stdc++.h>
using namespace std;
void debug() {cout<<endl;}
template<typename T,typename... Args>
void debug(T x,Args... args) {cout<<x<<" ";debug(args...);}
#define forn(i,a,b) for(int i=a;i<b;++i)
#define SZ(x) int(x.size())
#define pb push_back
#define F first
#define S second
#define endl "\n"
typedef long long ll;
typedef pair<int, int> pii;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, d;
    cin >> n >> d;
    int p[n][d];
    forn(i, 0, n) {
        forn(j, 0, d) {
            cin >> p[i][j];
        }
    }
    
    int ans = 0;
    forn(i, 0, n) {
        forn(j, i+1, n) {
            int sum = 0;
            forn(k, 0, d) {
                sum += (p[i][k]-p[j][k])*(p[i][k]-p[j][k]);
            }
            int sq = sqrt(sum);
            if (sq*sq == sum) ans++;
        }
    }
    cout << ans << endl;
}
