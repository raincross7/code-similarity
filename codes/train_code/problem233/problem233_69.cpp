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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    
    int n, k;
    cin >> n >> k;
    map<int, ll> mp;
    vi a(n), pre(n + 1, 0);

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= k;
        pre[i + 1] = (pre[i] + a[i]) % k;
    }

    for(int i = 1; i <= n; i++)
        pre[i] = (pre[i] - (i % k) + k) % k;
        
    mp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        if(i - k >= 0) mp[pre[i - k]]--;
        ans += mp[pre[i]];
        mp[pre[i]]++;
    }

    cout << ans << endl;

    return 0;
}