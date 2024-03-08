#include <bits/stdc++.h>
#pragma GCC optimize("unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define watch(x) cout << (#x) << " is " << (x) << endl
#define debug cout << "hi" << endl

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const ll MOD = 1e9 + 7;
const int INF32 = 1<<30;
const ll INF64 = 1LL<<60;
const ld pi = 3.141592653589793;

void solve(){
    ld a,b,x;
    cin >> a >> b >> x;
    ld v = a*a*b;
    if(x>=v/2){
    ld h = (v-x)/a/a*2;
    cout << fixed <<setprecision(10)<<atan(h/a)*180/pi;}
    else {
    ld c = x/b/a*2;
    //cout << c<<endl;
    cout << fixed <<setprecision(10)<<90-atan(c/b)*180/pi;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
