#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    int n;

    while (cin >> n && n) {
        VI a(n);
        REP(i,n) cin >> a[i];
        sort(a.begin(), a.end());
        int ans = 1e9;
        REP(i,n-1) ans = min(ans, a[i+1]-a[i]);
        cout << ans << endl;
    }

    return 0;
}