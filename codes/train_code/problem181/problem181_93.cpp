#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=int(a);i--)
#define per(i,b) gnr(i,0,b)
#define pb push_back
#define eb emplace_back
#define a first
#define b second
#define bg begin()
#define ed end()
#define all(x) x.bg,x.ed
const int MOD = 1000000007; 


int main() {
    ll k, a, b;
    cin >> k >> a >> b;
    if (a+2 >= b || k <= a) {
        cout << k+1 << endl;
    } else {
        ll ret = b;
        ll rest = k - (a+1);
        ret += (rest/2)*(b-a);
        if (rest%2) ret++;
        cout << ret << endl;
    }
    
    return 0;
}