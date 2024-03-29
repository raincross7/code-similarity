#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep1(i, n) for(int i = 1; i <= (int)(n); i++)
#define show(x) {for(auto i: x){cout << i << " ";} cout<<endl;}
#define showm(m) {for(auto i: m){cout << m.x << " ";} cout<<endl;}
typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> lP;
ll gcd(int x, int y){ return y?gcd(y, x%y):x;}
ll lcm(ll x, ll y){ return (x*y)/gcd(x,y);}

bool cmp(const lP &a, const lP &b){
    return (a.first+a.second)>(b.first+b.second);
}

int main()
{
    int n;
    cin >> n;
    vector<lP> ab;
    vector<ll> food;
    rep(i, n){
        ll tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        ab.push_back({tmp1, tmp2});
    }
    sort(ab.begin(), ab.end(), cmp);
    
    ll taka = 0;
    ll aok = 0;

    rep(i, n){
        if ((i%2)==0){
            taka+=ab[i].first;
        }else{
            aok+=ab[i].second;
        }
    }
    printf("%lld\n", taka-aok);
}

