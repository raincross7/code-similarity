// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define sl(n) scanf("%lld", &n)
#define si(n) scanf("%d", &n)
#define sd(n) scanf("%lf", &n)
#define pll pair <ll, ll>
#define pii pair <int, int>
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define inf (1LL << 61)
#define loop(i, start, stop, inc) for(ll i = start; i <= stop; i += inc)
#define for1(i, stop) for(ll i = 1; i <= stop; ++i)
#define for0(i, stop) for(ll i = 0; i < stop; ++i)
#define rep1(i, start) for(ll i = start; i >= 1; --i)
#define rep0(i, start) for(ll i = (start-1); i >= 0; --i)
#define ms(n, i) memset(n, i, sizeof(n))
#define casep(n) printf("Case %lld:", ++n)
#define pn printf("\n")
#define pf printf
#define EL '\n'
#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const ll sz = 2e5 + 10;
ll cnt[sz], pw[sz];
char s[sz];

int main()
{
    ll n, p, ans = 0;
    cin >> n >> p;
    scanf("%s", s+1);

    if(p == 2 || p == 5) {

        for(ll i = 1; i <= n && p == 2; i++) {
            if((s[i]-'0') % 2 == 0)
                ans += i;
        }

        for(ll i = 1; i <= n && p == 5; i++) {
            if(s[i] == '5' || s[i] == '0')
                ans += i;
        }

        pf("%lld\n", ans);

        return 0;
    }

    pw[0] = 1;
    for1(i, n) pw[i] = (pw[i-1] * 10) % p;

    ll sum = 0;
    for1(i, n) {
        sum = (sum * 10 + (s[i] - '0')) % p;
        if(sum == 0) ans++;

        ll now = (sum * pw[n-i]) % p;

        ans += cnt[now];
        cnt[now]++;
    }

    pf("%lld\n", ans);

    return 0;
}
