#include <bits/stdc++.h>
#define ll long long int
#define F(i,j,k,in) for(ll i=j;i<k;i+=in)
#define DF(i,j,k,in) for(int i=j;i>=k;i-=in)
#define feach(it,l) for (auto it = l.begin(); it != l.end(); ++it)
#define fitr(it,it1,itr2) for(auto it=itr1;it!=itr2;++it)
#define fall(a) a.begin(),a.end()
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define eq equal_range
#define fs first
#define ss second
#define ins insert
#define mkp make_pair
#define PI 3.1415926535897932384626433832795
#define endl "\n"
using namespace std;
typedef vector<ll> vll;
typedef vector<int> vin;
typedef vector<char> vch;
typedef vector<string> vst;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll,ll>> vpll;
typedef set<ll> sll;
typedef set<int> sint;
typedef set<char> sch;
typedef set<string> sst;
typedef queue<ll> qll;
typedef priority_queue<ll> pqll;
typedef map<ll,ll> mll;
typedef pair<ll,ll> pll;
const ll MOD=1000000007;
ll pwr(ll b,ll p){ll res=1;while(p){if(p&1) {res*=b; p--;}else{b*=b; p>>=1;}}return res;}
ll nod (ll num) {
  ll cnt=0;
  while (num) {
    num/=10; 
    ++cnt;
  }
  return cnt;
}

int main()
{
  ios_base::sync_with_stdio(false) , cin.tie(NULL) , cout.tie(NULL);
  ll n;
  cin>>n;
  ll ans=1e10;
  F (i,1,(ll)(sqrt(n)+0.5)+1,1) {
    if (n%i==0) {
      ll a= max (nod(i) ,nod(n/i));
      ans=min(a,ans);
    }
  }
  cout<<ans;

return 0;
}


