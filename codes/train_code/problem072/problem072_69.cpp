#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define erep(i,a,b) for(int i=a;i<=(int)(b);++i)
#define per(i,a,b) for(int i=(b);i>(a);--i)
#define eper(i,a,b) for(int i=((int)(a));i>=b;--i)
#define pb push_back
#define mp make_pair
#define INF 2000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a, b)*b;}

ll n;
int main() {
 ios::sync_with_stdio ( false );
 cin.tie ( 0 );
    cin >> n;
    ll cnt = 0;
    ll sum = 0;
    while (sum <= n) cnt++, sum += cnt;
    rep(i, 1, cnt + 1) {
        if (i != sum - n) {
            printf("%d\n", i);
        }
    }
    return 0;
}
