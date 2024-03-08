#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
#define ll long long int
#define rep(i,n) for( int i = 0; i < n; i++ )
#define rrep(i,n) for( int i = n; i >= 0; i-- )
#define REP(i,s,t) for( int i = s; i <= t; i++ )
#define RREP(i,s,t) for( int i = s; i >= t; i-- )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000

int cnt[1000010];
int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int s; cin >> s;
    int x = 0;
    while(true) {
        cnt[s]++;
        x++;
        if(cnt[s] == 2) {cout << x << endl; return 0;}
        if(s % 2 == 0) s /= 2;
        else s = s * 3 + 1;
    }

    return 0;
}
