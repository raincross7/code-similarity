#include<algorithm>
#include<bitset>
#include<cmath>
#include<complex>
#include<deque>
#include<functional>
#include<iomanip>
#include<iostream>
#include<iterator>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<vector>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define MOD (1000000007)
#define INF (2e9)
#define INFL (2e18)

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
using vint=vector<int>;
using vll=vector<ll>;
template<class T>using arr=vector<vector<T>>;
template<class T>int popcount(T &a){int c=0; rep(i, 8*(int)sizeof(a)){if((a>>i)&1) c++;} return c;}
template<class T>void pr(T x){cout << x << endl;}
template<class T>void prvec(vector<T>& a){rep(i, a.size()-1){cout << a[i] << " ";} pr(a[a.size()-1]);}
template<class T>void prarr(arr<T>& a){rep(i, a.size()) if(a[i].empty()) pr(""); else prvec(a[i]);}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
    int n, k; cin >> n >> k;
    int m = n*(n+1)/2;
    vll a(n), b(n*(n+1)/2);

    rep(i, n) cin >> a[i];
    rep(i, n-1) a[i+1] += a[i];
    rep(i, n) b[i] = a[i];
    int t = n;
    rep(i, n-1){
        FOR(j, i+1, n){
            // pr(t);
            a[j] -= a[i];
            b[t++] = a[j]; 
        }
    }

    // prvec(b);

    vll c;
    ll ans = 0;

    for(int bit=63;bit>=0;bit--){
        c.clear();
        //bの各要素について、bitが立っているか
        rep(i, b.size()) {
            if((b[i]>>bit)&1){
                c.push_back(b[i]);
            }
        }

        if(c.size() >= k){
            ans += (1LL<<bit);
            b = c;
        }
    }

    pr(ans);
    return 0;}