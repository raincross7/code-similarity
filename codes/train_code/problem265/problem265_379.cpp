//
//AtCoder Beginner Contest 081
//C
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
    int n, k;
    cin >> n >> k;

    vector<int> cnt(200001,0);
    REP(i, n) {
        int a;
        cin >> a;
        cnt[a]++;
    }

    int orgCnt=0;
    REP(i, cnt.size()){
        if (cnt[i]>0) orgCnt++;
        if (cnt[i]==0) cnt[i]=200001;
    }
    sort(ALL(cnt));
    int ans = 0;
    if (orgCnt>k){
        REP(i,orgCnt-k){
            ans += cnt[i];
        }
    }
    cout << ans << endl;
    return 0;
}
