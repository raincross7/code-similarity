#include<bits/stdc++.h>
using namespace std;
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define double long double
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const ll inf=1e9+7;
const ll mod=1e9+7;
int main(){
    ll n,x;cin>>n>>x;
    ll ans=n;
    ll a=min(x,n-x),b=max(n-x,x);
    while(1){
        if(b%a==0){
            ans+=(b/a*2-1)*a;
            break;
        }else{
            ans+=(b/a*2)*a;
            ll c=a;
            a=b%c;
            b=c;
        }
    }
    cout<<ans<<endl;
}