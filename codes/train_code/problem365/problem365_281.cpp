#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep1(i, n) for(int i = 1; i <= (int)(n); i++)
#define show(x) {for(auto i: x){cout << i << " ";} cout<<endl;}
#define showm(m) {for(auto i: m){cout << m.x << " ";} cout<<endl;}
typedef long long ll;
typedef pair<int, int> P;
ll gcd(int x, int y){ return y?gcd(y, x%y):x;}
ll lcm(ll x, ll y){ return (x*y)/gcd(x,y);}


int main()
{
    ll s;
    cin >> s;
    ll base = 1000000000;
    ll a = base;
    ll c = (s+base-1)/base;
    ll b = ((s%base)==0) ? 0 : base-s%base;
    ll d = 1;
    

    cout << "0 0 ";
    cout << a << " " << d << " " << b << " " << c << endl;

}

