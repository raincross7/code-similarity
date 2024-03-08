/*
AUTHOR: Aman Raj
LANG: C++
*/

using namespace std;

typedef   long long  int ll;
#include <bits/stdc++.h>


//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val
#define fast  ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define all(a) a.begin(),a.end()
//#define mod 998244353


#define mod   1000000007

#define inf 1e18
//#define mod 3
#define flush fflush(stdout)

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef cc_hash_table<ll, ll, hash< ll > > ht;

// find_by_order()  // order_of_key
typedef tree<
    ll,
    null_type,
    less<ll>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;






ll power1(ll a, ll b)//a raised to power b
   {  if(b<=0) return 1; if(b==1) return a;
       ll c=power1(a,b/2);
        c*=c;c%=mod;if(b%2==1) c*=a;c%=mod;
        return c;
   }
   ll mi(ll a,ll m)
   { ll c= power1(a,m-2);

     return c;
   }



 struct less_then_greater {
    template<typename T, typename U>
    bool operator()(T const& lhs, U const& rhs) const {
        if (lhs.first < rhs.first) return true;
        if (rhs.first < lhs.first) return false;
        return lhs.second > rhs.second;
    }
};

 /*std::priority_queue<std::pair<int, int>,
                    std::vector<std::pair<int, int>>,
                    less_then_greater
                    > pq;*/


  int main()
{  fast;
   ll n,k;cin>>n>>k;
    vector<ll> v(n);for(auto &x:v){cin>>x;--x;}
    map<ll,ll> mpp;
    ll ans=0;ll sum=0;
    mpp[0]=1;
    vector<ll> dp(n+1);
    for(ll i=1;i<=n;i++)
    {  if(i>=k)
        {   //if(i==5)cout<<dp[i-k]<<" "<<mpp[dp[i-k]]<<endl;
            mpp[dp[i-k]]--;
        }
       
        sum+=v[i-1];sum%=k;
        ans+=mpp[sum];
        mpp[sum]++;
        dp[i]=sum;
     //cout<<i<<" "<<ans<<endl;

    }


    cout<<ans<<endl;
   return 0;
}
