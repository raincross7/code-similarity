//Water Bottle

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define irep(i,a) for(auto i = a.begin(); i != a.end(); ++i)
#define nvarep(n,a) ll n;cin>>n;vector<ll>a(n);rep(i,0,n)cin>>a[i]
#define vecrep(n,a,type) vector<type>a(n);rep(i,0,n)cin>>a[i]
#define lcm(a,b) (a/__gcd(a, b)*b)
#define range(a) (a).begin(),(a).end() 
#define pb push_back
#define mp make_pair
#define nnn "\n"
#define spa " "
#define cout15(a) printf("%.15f\n",a)
using p = pair<ll, string>;
using garph = vector<vector<ll>>;
const int inf = 2147483647;//2*10^9
const ll INF = 9223372036854775807;//9*10^18
const double PI=3.14159265358979323846;

signed main (){
    double a,b,x;cin>>a>>b>>x;
    if(a*a*b/2>x){
        double ha = x/a/b*2;
        cout15(atan(b/ha)*(180/PI));
    }else{
        double ha = (a*a*b-x)/a/a*2;
        cout15(atan(ha/a)*(180/PI));
    }
    return 0;
}