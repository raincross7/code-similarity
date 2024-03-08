//
//AtCoder Beginner Contest 113
//C
//https://atcoder.jp/contests/abc113/tasks/abc113_c
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <queue>
#include <map>
#include <set>
#include <tuple>
#include <functional>
#include <cassert>
#include <bitset>
#include <numeric>

using namespace std;

#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)
#define FORD(i,a,b) for(ll i=a;i>=(ll)(b);i--)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define SIZE(x) (int)(x).size()
#define SIZEL(x) (ll)(x).size()
#define MSG(a) cout << #a << " " << a << endl;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

const double PI = 3.14159265358979323846;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

ll gcd(ll x, ll y) { return (x % y)? gcd(y, x % y): y; }    //最大公約数
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }            //最小公倍数

int main()
{
    int n, m;
    cin >> n >> m;

    vector<tuple<int, int, int>> pyi;
    REP(i, m) {
        int p, y;
        cin >> p >> y;
        pyi.push_back(make_tuple(p, y, i));
    }
    sort(ALL(pyi));

    vector<string> ans(m);
    int seq=1;
    int pPrv=-1;
    REP(i, m){
        int p = get<0>(pyi[i]);
        int y = get<1>(pyi[i]);
        int ii = get<2>(pyi[i]);
        
        if (pPrv==p) seq++;
        else{
            seq=1;
            pPrv=p;
        }
        ostringstream sout;
        sout << setfill('0') << setw(6) << p;
        sout << setfill('0') << setw(6) << seq;
        ans[ii] = sout.str();
    }
    REP(i, m){
        cout << ans[i] << endl;
    }
    return 0;
}
