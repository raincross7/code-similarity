#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;

#define LEN(x) (int)x.size()
#define ALL(x) x.begin(), x.end()

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int,int>;
using vpii = vector<pii>;

template<typename T, typename M = __gnu_pbds::null_type>
using ordered_set = __gnu_pbds::tree<T, M, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;

template<typename T>
const T INF = (is_same<T, int>::value ? 1e9 : 1e18);
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

inline int fcmp(double x, double y)
{ return (x < y + EPS ? (x < y - EPS ? -1 : 0) : 1);}

const int N = 1e6 + 10;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    
    int n; cin >> n;
    vi a(n), cnt(N, 0);

    for(int& i : a) cin >> i, cnt[i]++;

    ll ans = 0;
    for(int& i : a)
    {
        int now = 0;
        for(int d = 1; d * d <= i; d++)
        {
            if(i % d == 0)
            {
                now += cnt[d];
                if(i / d != d) now += cnt[i / d];
            }
        }
        if(now == 1) ans++;
    }

    cout << ans << endl;


    return 0;
}