#include <bits/stdc++.h>
using namespace std;
#define INF 2000000000
typedef long long int ll;
typedef pair<ll,ll> ii;
typedef pair<ii,ll> iii;
typedef vector<ll> vi;
typedef vector<ii> vii;
#define getbit(n,i) (((n)&(1LL<<(i)))!=0)
#define setbit0(n,i) ((n)&(~(1LL<<(i))))
#define setbit1(n,i) ((n)|(1LL<<(i)))
#define lastone(n) ((n)&(-(n)))
#define read freopen("debug\\in.txt","r",stdin)
#define write freopen("debug\\out.txt","w",stdout)
#define DBG(a) cout<<#a<<" ->->->-> "<<a<<"\n"
#define fi first
#define se second
#define PI (acos(-1))
#define fastread ios::sync_with_stdio(false);cin.tie(NULL)
#define mod (1000000007)
#define asz 500005
template<class T,class V> ostream& operator<<(ostream &s,pair<T,V> a)
{
    s<<a.fi<<' '<<a.se;
    return s;
}
void done(bool ok){
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    exit(0);
}
int main()
{
    fastread;
    ll T=1;
//    cin>>T;
    for(ll qq=1;qq<=T;qq++)
    {
        ll n;
        cin>>n;
        ll sum=0,mn=INF;
        deque<ll> v(n);
        for(auto &x:v)cin>>x,mn=min(mn,x),sum+=x;
        ll a=n*(n+1)/2;
        if(sum%a)done(0);
        a=sum/a;
        while(mn!=v.front())v.push_back(v.front()),v.pop_front();
        ll cur=0,cnt=0;
        for(int i=1;i<n;i++){
            v[i]-=cur;
            ll k=(a+v[i-1]-v[i]);
            if(k%n||k<0)done(false);
            k/=n;
            v[i-1]-=k*n;
            v[i]-=k;
            a-=k;
            cnt+=k;
            cur+=k+cnt;
        }
        done(true);
    }
    return 0;
}