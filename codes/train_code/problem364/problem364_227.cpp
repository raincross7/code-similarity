#include <bits/stdc++.h>

using namespace std;
#define all(a)a.begin(),a.end()
using ll=long long;
const int INF = 1<<30;
const ll INFll =1LL<<62;
const int mod =(1e9)+7;
using P = pair<ll,ll>;

int main(){
    ll n,a,b;
    cin >>n>>a>>b;
    ll d=abs(a-b);
    if(d%2==0)puts("Alice");
    if(d%2==1)puts("Borys");
    return 0;
}

