#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int INF = 1001001001;


ll gcd(ll a,ll b){return b ? gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

int main(){
    ll a,b;
    cin >> a >> b;
    cout << lcm(a,b) << endl;
}