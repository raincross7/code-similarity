#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,x) for(int i=0;i<x;i++)
#define put(ans)    cout << ans << endl;
#define sort(s) sort(s.begin(),s.end())
#define reverse(s) reverse(s.begin(),s.end())

//最大公約数
ll gcd(ll a, ll b) {
    return b ? gcd(b, a%b) : a;
}
//最小公倍数
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
bool isPrime(int x){
    ll i;
    if(x < 2)return 0;
    else if(x == 2) return 1;
    if(x%2 == 0) return 0;
    for(i = 3; i*i <= x; i += 2) if(x%i == 0) return 0;
    return 1;
}

int main(){
    int a,p,ans(0);
    cin >> a >> p;
    p += a*3;
    ans = p/2;
    put(ans);

    return 0;
}