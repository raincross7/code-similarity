#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;

#define REP(i, l, n) for(int i=(l), i##_len=(n); i<i##_len; ++i)
#define ALL(x) (x).begin(),(x).end()
#define pb push_back

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(){
    ll k, a, b; cin >> k >> a >> b;
    ll ans = 0;
    if(b - a < 2){
        cout << 1 + k << endl;
        return 0;
    }else{
        ans = a;
        k -= (a-1);
        ll c = k / 2;
        ans += c * (b-a);
        k -= c * 2;
        if(k == 1){
            ans++;
        }
    }
    cout << ans << endl;
}