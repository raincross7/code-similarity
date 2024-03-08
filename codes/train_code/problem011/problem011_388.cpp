#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <complex>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <assert.h>
#define int long
#define ll long long
#define rep(i, n) for(int i = 0; i < n; i++)
#define pb push_back
#define fi first
#define se second
const int INF = 1e9;
using namespace std;
int gcd(int a,int b){return b ? gcd(b,a%b) : a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}

signed main() {
    int N,X; cin >> N >> X;
    cout << 3*(N-gcd(N,X)) << endl;
}