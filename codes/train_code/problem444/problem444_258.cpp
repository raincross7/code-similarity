#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;
#define vec(s) vector<s>
#define vvec(s) vector<vector<s>>
typedef vector<lli> vi;
typedef vector<vi> vvi;
typedef pair<lli, lli> pii;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define YN(x) cout << (x ? "Yes" : "No") << endl;
#define out(s) cout << s << endl;
#define pb(s) push_back(s);
#define sp " "
#define INF 10000000000
#define LINF 9000000000000000000
#define all(s) s.begin(), s.end()
void vout(vi v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << endl;
}
int main()
{
    lli n, m;
    cin >> n >> m;
    vi rec(n, 0);
    lli ans = 0, ans2 = 0;
    vec(bool) c(n, false);
    rep(i, m)
    {
        lli p;
        string s;
        cin >> p >> s;
        p--;
        if (s == "WA")
        {
            rec[p]++;
        }
        else
        {
            if (!c[p])
            {
                ans += rec[p];
                ans2++;
                c[p] = true;
            }
        }
    }
    out(ans2 << sp << ans);
}