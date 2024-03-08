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
int main()
{
    fastread;
    ll T=1;
//    cin>>T;
    for(ll qq=1;qq<=T;qq++)
    {
        ll n;
        cin>>n;
        vi a(n);
        for(auto &x:a)cin>>x;
        sort(a.begin(),a.end());
        ll lo=0,hi=n-1;
        while(lo<hi){
            ll mid=(lo+hi)/2;
            ll cur=2*a[mid];
            int i=0;
            for(;i<n;i++){
                if(i==mid)continue;
                if(a[i]>cur)break;
                cur+=2*a[i];
            }
            if(i==n)hi=mid;
            else lo=mid+1;
        }
        cout<<n-lo<<endl;
    }
    return 0;
}