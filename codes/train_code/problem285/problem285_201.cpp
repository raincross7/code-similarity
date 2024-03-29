#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr,__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define RFOR(i,a,b) for(int i=(int)(b-1);i>=(int)(a);--i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define RREP(i,n) for(int i=(int)(n-1);i>=0;--i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SZ(a) ((int)(a).size())
#define BIT(x, i) (((x) >> (i)) & 1)
#define SQ(x) ((x)*(x))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int main() {
    int n;
    while (cin >> n, n) {
        vi s(n);
        REP(i, n) cin >> s[i];
        auto minmax = minmax_element(ALL(s));
        cout << (accumulate(ALL(s), 0) - *minmax.first - *minmax.second) / (n-2) << endl;
    }
}