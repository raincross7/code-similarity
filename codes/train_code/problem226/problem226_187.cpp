//Vacant Seat

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define nvarep(n,a) ll n;cin>>n;vector<ll>a(n);rep(i,0,n)cin>>a[i]
#define vecrep(n,a,type) vector<type>a(n);rep(i,0,n)cin>>a[i]
#define YN(flag) (flag?"Yes":"No")
#define lcm(a,b) (a/__gcd(a, b)*b)
#define range(a) (a).begin(),(a).end() 
#define pb push_back
#define mp make_pair
#define nnn "\n"
#define spa " "
using P = pair<ll,ll>;
using graph = vector<vector<ll>>;
const int inf = 2147483647;//2*10^9
const ll INF = 9223372036854775807;//9*10^18

signed main (){
    int n;cin>>n;
    int right=0,left=n-1;
    int ra;
    cout<<right<<endl;
    string s;cin>>s;
    if(s=="Vacant")return 0;
    ra=(s=="Male"?0:1);
    cout<<left<<endl;
    cin>>s;
    if(s=="Vacant")return 0;
    while(true){
        int m=(right+left)/2;
        cout<<m<<endl;
        cin>>s;
        if(s=="Vacant")return 0;
        int ca=(s=="Male"?0:1);
        if((m-right)%2==0){
            if(ca==ra){
                right=m;
                ra=ca;
            }else{
                left=m;
            }
        }else{
            if(ca!=ra){
                right=m;
                ra=ca;
            }else{
                left=m;
            }
        }
    }
    return 0;
}