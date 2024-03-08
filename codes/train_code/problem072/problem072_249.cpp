#include <ios>
#include <iomanip>
#include <iostream>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <climits>
 
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define MOD 1000000007
#define INF (1e9)

#define PI (acos(-1))
#define print(x) cout << x << endl
 
ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a;}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
typedef pair <ll,ll> P;

int main()
{
    ll N;
    cin >> N;
    ll ma = 0;
    rep(i, 10000) {
        if (i * (i+1) >= 2*N) {
            ma = i;
            break;
        }
    }
    for(ll i = ma; i > 0; i--) {
        if (N - i >= 0) {
            print(i);
            N -= i;
        }
    }
    return 0;
}