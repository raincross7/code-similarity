//#pragma GCC optimize("03,unroll-loops")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define pb           push_back
#define ff           first
#define ss           second
#define gcd(a, b)    __gcd(a, b)
#define lcm(a, b)    ((a)*((b)/gcd(a,b)))
#define all(v)       v.begin(),v.end()
#define rall(v)      v.rbegin(),v.rend()
#define lllim        2147483648
#define Pi           2*acos(0.0)
#define pii          pair<int,int>
#define pll 	     pair<ll,ll>
#define mem(a,b)     memset(a, b, sizeof(a))
#define fill_(a,b)   fill(a,a+n,b);
#define MOD          1000000007
#define fast_cin     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define filein       freopen("input.txt","r", stdin)
#define D(x)         cerr << __LINE__ << ": " << #x << " = " << (x) << '\n'
#define case		 int t,cas=1;cin>>t;while(t--)
#define rep(i,a,n)   for(int i=a;i<n;i++)
#define rev(i,n,a)   for(int i=n;i>=a;i--)
#define sim 		 template<class T

/*------------------------------Graph Moves----------------------------*/
//const int fx[]= {+1,-1,+0,+0};
//const int fy[]= {+0,+0,+1,-1};
//const int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};  // Kings Move
//const int fy[]= {-1,+1,+0,+0,+1,+1,-1,-1}; // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/



sim > void ckmin(T& a, const T& b) {
    a= b < a? b:a;
}
sim > void ckmax(T& a, const T& b) {
    a= b > a? b:a;
}

///.............................input.................................///
sim > void read(T& a) {
    std::cin>>a;
}
sim > void read(T& a, T& b) {
    std::cin>>a>>b;
}
sim > void read(T& a,T& b, T& c) {
    std::cin>>a>>b>>c;
}
sim > void readara(T& ara,const int sidx, const int eidx) {
    for(int i=sidx; i<eidx; i++) std::cin>>ara[i];
}
sim > void readvec( std::vector<T>& v, const int n) {
    rep(i,0,n) {
        T p;
        std::cin>>p;
        v.pb(p);
    }
}
///...........................input end...............................///


using namespace std;
using namespace __gnu_pbds;

const int maxn=1e6+6;

///............................Number theory , si(), bigmod...................///
vector<int>pr;
ll bigmod(ll a, ll b, ll m);
void si();
///.................................Number theory end.........................///

/*
 * test Case:

*/

void solve()
{
	int n;
	read(n);
	string s;
	read(s);
	
	int cnt=1;
	
	rep(i,1,n)
	{
		if(s[i]!=s[i-1])
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;

}


int main()
{
    fast_cin;
    // si();

    //while(scanf("%d",&n)!=EOF)
    //case
    {
        //cout<<""<<cas++<<""<<endl;
        solve();
    }

    return 0;
}







///............................Number theory , si(), bigmod...................///

bool mark[maxn];

void si()
{
    mem(mark,0);
    for(int i=4; i<maxn; i+=2) mark[i]=1;
    for(int i=3; i*i<maxn; i+=2)
    {
        if(!mark[i])
            for(int j=i*i; j<maxn; j+=2*i)
                mark[j]=1;
    }

    pr.pb(2);
    for(int i=3; i<maxn; i+=2)
        if(!mark[i])
            pr.pb(i);
}


ll bigmod(ll a, ll b, ll m)
{
    if(b==0) return 1;
    if(b==1) return a;

    if(b%2)
    {
        ll res=bigmod(a,b/2,m)%m;
        return ((((res%m)*(res%m))%m)*(a))%m;
    }
    else
    {
        ll res=bigmod(a,b/2,m)%m;
        return (((res%m)*(res%m))%m);
    }
}

///.................................Number theory end.........................///
