//#define NDEBUG

#include <bits/stdc++.h>
#include <bits/extc++.h>

#define StarBurstStream ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define iter(a) a.begin(), a.end()
#define riter(a) a.rbegin(), a.rend()
#define lsort(a) sort(iter(a))
#define gsort(a) sort(riter(a))
#define pb(a) push_back(a)
#define eb(a) emplace_back(a)
#define pf(a) push_front(a)
#define pob pop_back()
#define pof pop_front()
#define mp(a, b) make_pair(a, b)
#define F first
#define S second
#define mt make_tuple
#define gt(t, i) get<i>(t)
#define iceil(a, b) (((a) + (b) - 1) / (b))
#define tomax(a, b) ((a) = max((a), (b)))
#define printv(a, b) {bool pvaspace=false; \
for(auto pva : a){ \
    if(pvaspace) b << " "; pvaspace=true;\
    b << pva;\
}\
b << "\n";}

//#define TEST

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pdd = pair<ld, ld>;
using tiii = tuple<int, int, int>;

const ll MOD = 1000000007;
const ll MAX = 2147483647;

template<typename A, typename B>
ostream& operator<<(ostream& o, pair<A, B> p){
    return o << '(' << p.F << ',' << p.S << ')';
}

int main(){
    StarBurstStream

    int n, k;
    cin >> n >> k;

    vector<pll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].S >> a[i].F;
    gsort(a);

    std::priority_queue<ll, vector<ll>, greater<>> pq;
    ll ans = 0;
    set<ll> use;

    ll tmp = 0;
    for(int i = 0; i < k; i++){
        tmp += a[i].F;
        if(use.find(a[i].S) != use.end()) pq.push(a[i].F);
        else use.insert(a[i].S);
    }
    ans = tmp + use.size() * use.size();
    for(int i = k; i < n && !pq.empty(); i++){
        if(use.find(a[i].S) != use.end()) continue;
        tmp -= pq.top();
        pq.pop();
        use.insert(a[i].S);
        tmp += a[i].F;
        ans = max(ans, tmp + (ll)use.size() * (ll)use.size());
    }

    cout << ans << "\n";

    return 0;
}