///*.......................Shadman Sakib Utshob............................*///

#include <bits/stdc++.h>
using namespace std;

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;

#define Boost           ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define see(x)        cerr<< __LINE__ << ": " << (#x) << " is "<< (x) <<'\n';
#define pb              push_back
#define inf             1e9+8
#define mp              make_pair
#define rep(i,n)        for(int i=0;i<n;i++)
#define rep1(i,n)       for(int i=1;i<=n;i++)
#define ll              long long
#define pii             pair<ll,ll >
#define MOD             1000000007
#define fileout         freopen("output.txt","w",stdout)
#define mem(x,i)        memset(x,i,sizeof x)
#define Ones(x)         __builtin_popcount(x);
#define PI              acos(-1.0)
#define ff              first
#define ss              second
#define T               int t;cin>>t;while(t--)
#define ok              cout<<"ok"<<endl;
#define all(x)          (x).begin(),(x).end()
#define ordered_set     tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define nln	            cout<<endl;

int main()
{
    Boost;
    int x,y,n,i,j,ans=1;
    string s;

    cin>>n>>s;
    //s+='#';
    for(i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
        {
            ans++;
        }
    }
    cout<<ans<<endl;



}