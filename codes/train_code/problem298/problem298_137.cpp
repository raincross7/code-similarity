#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (ll i = a; i < b; i++)
#define REP(i,b) FOR(i,0,b)
#define RFOR(i,a,b) for (ll i = a-1; i >= b; i--)
#define RREP(i,a) RFOR(i,a,0)
#define REPALL(i,x) for (ll i = 0; i < x.size(); i++)
#define RREPALL(i,x) for (ll i = x.size()-1; i >= 0; i--)
#define REPITR(itr,x) for (auto itr = (x).begin(); itr != (x).end(); itr++)
#define ALL(x) (x).begin(), (x).end()
#define SORT(x) sort(ALL(x))
#define MIN_ELEMENT(x) min_element(ALL(x))
#define MAX_ELEMENT(x) max_element(ALL(x))
#define COUNT(x,num) count(ALL(x), num)
#define MEMSET(x,val) memset(x, val, sizeof(x))
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define debug(x) cerr<<__LINE__<<": "<<(#x)<<" = "<<(x)<<endl;
void YES(bool flag) {cout<<(flag ? "YES" : "NO")<<endl;}
void Yes(bool flag) {cout<<(flag ? "Yes" : "No")<<endl;}
void yes(bool flag) {cout<<(flag ? "yes" : "no")<<endl;}
#define e1 first
#define e2 second
#define nextline putchar('\n')
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<ll> VLL;
typedef vector<vector<ll>> VVLL;
const int INF = 1e7;
const ll MOD = 1e9 + 7;
const double pi = 3.141592653589793;

VVI ans;

int main()
{
    int n, k, m, cnt;
    cin>>n>>k;
    ans.resize(n);
    cnt = (n - 1) * (n - 2) / 2;
    m = n - 1;

    if (cnt < k) {
        cout<<-1<<endl;
        return 0;
    }

    REP(i,n-1) {
        ans[0].push_back(i+1);
    }

    int idx = 1;
    while (cnt > k) {
        int l = ans[idx].size();
        if (ans[idx].empty() || ans[idx][l-1] < n - 1) {
            ans[idx].push_back(idx + l + 1);
        } else {
            idx++;
            ans[idx].push_back(idx + 1);
        }
        cnt--;
        m++;
    }

    cout<<m<<endl;
    REPALL(i,ans) {
        REPALL(j,ans[i]) {
            cout<<i+1<<" "<<ans[i][j]+1<<endl;
        }
    }

    return 0;
}
