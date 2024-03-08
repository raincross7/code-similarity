#include <bits/stdc++.h>
using namespace std;
template <class T> T input() {T t; cin>>t; return t;}
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
#define CHMAX(a,b) a = max(a,b)
#define CHMIN(a,b) a = min(a,b)
#define debug(x) cerr<<__LINE__<<": "<<(#x)<<" = "<<(x)<<endl;
void YES(bool flag) {cout<<(flag ? "YES" : "NO")<<endl;}
void Yes(bool flag) {cout<<(flag ? "Yes" : "No")<<endl;}
void yes(bool flag) {cout<<(flag ? "yes" : "no")<<endl;}
#define PRINT_ARRAY_H(i,a) REPALL(i,a) {cout<<a[i]<<(i != a.size()-1 ? " " : "\n");}
#define e1 first
#define e2 second
#define newline putchar('\n')
#define cspace ' '
#define sspace " "
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<ll> VLL;
typedef vector<vector<ll>> VVLL;
const int INF = 1e7;
const ll MOD = 1e9 + 7;
const double pi = 3.141592653589793;
const VI dx = {1, 0, -1, 0};
const VI dy = {0, 1, 0, -1};

map<int, int> cnt;
priority_queue<int> pq;

int main()
{
    ll n,ans=0;
    cin>>n;
    REP(i,n) cnt[input<int>()]++;
    REPITR(itr,cnt) {
        pq.push(itr->e2);
    }
    while (pq.top() > 1) {
        auto p = pq.top();
        pq.pop();
        if (p > 2) {
            pq.push(p-2);
        } else {
            auto q = pq.top();
            pq.pop();
            pq.push(p-1);
            if (q > 1) {
                pq.push(q-1);
            }
        }
    }

    while (!pq.empty()) {
        ans++;
        pq.pop();
    }

    cout<<ans<<endl;

    return 0;
}
