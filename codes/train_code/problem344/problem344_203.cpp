#include <bits/stdc++.h>//Carefully Crafted by hetp111
using namespace std;
#define int long long
#define double long double
#define all(v) (v).begin(),(v).end()
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define MOD 1000000007
#define MOD2 998244353
#define MOD3 1000000009
#define PI acos(-1)
#define eps (1e-8)
#define INF (1e18)
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0)
template<class A,class B>ostream&operator<<(ostream&out,const pair<A,B>&a){return out<<"("<<a.first<<","<<a.second<<")";}
template<class A>ostream&operator<<(ostream&out,const vector<A>&a){for(const A &it:a)out<<it<<" ";return out;}
template<class A,class B>istream&operator>>(istream&in,pair<A,B>&a){return in>>a.first>>a.second;}
template<class A>istream&operator>>(istream&in,vector<A>&a){for(A &i:a)in>>i;return in;}
//ifstream cinn("in.in");ofstream coutt("out.out");
int poww(const int &a,int b,const int &m=MOD){if(b==0)return 1;int x=poww(a,b/2,m);x=x*x%m;if(b&1)x=x*a%m;return x;}
int ceil(const int &a,const int &b){return (a+b-1)/b;}
////Read:
//Check corner cases, n==1;
//
////Some function:
//__builtin_popcountll(), 

int n;
int v[100001];
int id[100001];

signed main(){
    FASTER;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        id[v[i]]=i;
    }
    
    
    int ans=0;
    set<int> used;
    
    for(int i=n;i>=1;i--){
        
        int a=0,b=0,x=n+1,y=n+1;
        
        auto it=used.upper_bound(id[i]);
        if(it!=used.end())x=*it,it++;
        if(it!=used.end())y=*it;
        it=used.upper_bound(id[i]);
        if(it!=used.begin())it--,b=*it;
        if(it!=used.begin())it--,a=*it;
            
        ans += (b-a)*(x-id[i])*i;
        ans += (y-x)*(id[i]-b)*i;
        
        used.insert(id[i]);
    }
    
    cout<<ans;
}
